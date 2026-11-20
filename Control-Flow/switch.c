#include <stdio.h>

int main()
{
    // This file contains the basic of switch commands and how the help in the flow of the execs in a C file.

    float pi = 3.14;
    switch(pi)
    {
        case 1: printf("The value of pi is 1.");
            break;
        case 22/7: printf("The value of pi is 22/7");
            break;
        case 3.14: printf("The value of pi is 3.14");
            break;
    }

    // The above code snippet will raise an error as float values aren't used in case labels.
   return 0;
}
