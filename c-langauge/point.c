#include <stdio.h>

int main(void){
    int points = ("How any points did you lost?");

    if(points < 2)
    {
        printf("You lost fewer points than me. \n");
    }
    else if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points as me. \n");
    }
    
    
}