/**
 * Assignment-3
 * CSE30 Username: cs30fa21 (fill out your username)
 * Class: UCSD CSE30-FA21
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"

#define BUFSZ 1024

void print_help()
{
    printf("Commands:\n");
    printf("\th   Print this help message\n");
    printf("\t[#] Push number onto the stack\n");
    printf("\t+   Add youngest stack element and prior stack element\n");
    printf("\t-   Subtract youngest stack element from prior stack element\n");
    printf("\t*   Multiply youngest stack element and prior stack element\n");
    printf("\t/   Divide youngest stack element into prior stack element\n");
    printf("\tT   Square root of the youngest stack element\n");
    printf("\tc   Clear the value of the youngest stack element\n");
    printf("\ts   Swap the top two stack elements\n");
    printf("\tr   Rotate the stack (oldest becomes youngest, ...)\n");
    printf("\tp   Print the stack, oldest to youngest\n");
    printf("\tq   Quit\n");
}

int main(int argc, char *argv[])
{
    char buf[BUFSZ];

    printf(">>> ");
    // Loop fgets to read input (buf) from stdin
    while (fgets(buf, BUFSZ, stdin) != NULL)
    {
        buf[strcspn(buf, "\n")] = 0; // Remove new line char from input (buf)
        char cmd;
        double number;

//  
// !!!!!!!!!!!!!!!!!! DO NOT TOUCH ANY CODE ABOVE THIS LINE  !!!!!!!!!!!!!!!!!!
//

        if (sscanf(buf, "%lf", &number) == 1) // If the input is a number...
        {
            /* ----------------------- TODO: FILL IN ----------------------- */
        }
        else if (sscanf(buf, "%c", &cmd) == 1) // If the input is a char...
        {
            switch (cmd)
            {
                case ('h'):
                /* --------------------- TODO: FILL IN --------------------- */
                // case(...): 
                /* ---------- TODO: FILL IN THE REST OF THE CASES ---------- */
                default: // If the input is anything else...
                /* --------------------- TODO: FILL IN --------------------- */
            }
        }
        
//  
// !!!!!!!!!!!!!!!!!! DO NOT TOUCH ANY CODE BELOW THIS LINE  !!!!!!!!!!!!!!!!!!
//

        else // If the input is malformed (ex: newline)
        {
            printf("Bad input line '%s'\n", buf);
        }
        printf(">>> ");
    }
}
