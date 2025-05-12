#include <stdio.h>

void mutiple (int grade) 
{
    for ( int i = 1 ; i <= 9 ; i++ ) 
    {
        printf("%d X %d = %d \n", grade, i, grade * i);
    }
}

int main () 
{
    mutiple(2);
    return 1;
}
