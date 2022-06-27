#include <time.h>
  
void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;// Converting time into milli_seconds

    clock_t start_time = clock();//storing the start time

    while (clock() < start_time + milli_seconds);//looping till required time is not achieved
}
