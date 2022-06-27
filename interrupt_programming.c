#include <stdio.h>
// include conio.h file for kbhit function
#include <conio.h>

int main()
{
    // declare variable
    char ch;
    printf("Enter key ESC to exit \n");
    // define infinite loop for taking keys
    while (1) {
        if (kbhit) {
            // fetch typed character into ch
            ch = getch();
            if ((int)ch == 27)//decimal 27 in ascii corresponds to escape
                // when esc button is pressed, then it will exit from loop
                break;
            printf("You have entered : %c\n", ch);
        }
    }
  return 0;
}
