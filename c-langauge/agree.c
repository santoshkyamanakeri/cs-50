#include <stdio.h>

int mian(void) {
    char c = get_char("do you agree? ");

    //check wheter user agreed
    if(c == 'y')
    {
        printf("agreed.\n");
    }
    else if (c == 'n')
    {
        printf("not agreed.\n");
    }
    
}