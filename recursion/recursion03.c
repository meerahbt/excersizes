// Exercise: Write a recursive function to calculate the sum of digits of a positive integer.
#include <stdio.h>

int sum(int n);

int main(void) {
; 
    printf("%i\n", sum(43));
}

int sum(int n){
    if (n % 10 == 0)
    {
        return n;
    }
    else
    {
        return (n) + sum(n % 10);
    }
}

