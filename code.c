#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

int lowerbound,upperbound;

void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;// Converting time into milli_seconds

    clock_t start_time = clock();//storing the start time

    while (clock() < start_time + milli_seconds);//looping till required time is not achieved
}

int main(){
    int freq=10,dur=1000;
    char ch;
    printf("Press any key if you start hearing the sound wave.");
    while(1)
    {
        Beep(freq, dur);  // Beep.
        freq=freq+10;
        if(kbhit())
            break;
    }

    lowerbound=freq-10;
    printf("\n\nYou lower bound of frequency has been found. Press 'Enter' to continue : ");
    ch = getchar();//resets kbhit()
    printf("\n\n");
    fflush(stdin);//to clear keyboard buffer
    delay(2);

    freq=3000;
    printf("\n\nPress any key key if you stop hearing the sound wave.");
    while(1)
    {
        Beep(freq, dur);  // Beep.
        freq=freq+1000;
        if(kbhit())
            break;
    }

    upperbound=freq-1000;
    printf("\n\nYou upper bound of frequency has been found. Press 'Enter' to continue : ");
    ch = getchar();//resets kbhit()
    printf("\n\n");
    fflush(stdin);//to clear keyboard buffer
    delay(2);


    printf("\n\nFinding more precise upperbound : \n");
    printf("Press any key key if you stop hearing the sound wave.");
    freq=upperbound+100;
    while(1)
    {
        Beep(freq, dur);  // Beep.
        freq=freq+100;
        if(kbhit())
            break;
    }

    upperbound=(freq-100);
    printf("Press 'Enter' to print the result : ");
    ch = getchar();
    printf("\n\nYour audible range of frequency : [%d,%d]",lowerbound,upperbound);
    return 0;
}
