// Exercise: Write a recursive function to calculate the sum of digits of a positive integer.
#include <stdio.h>

int sum(int n);

int main(void) {
; 
    printf("%i\n", sum(431));
}

int sum(int n){
    if (n < 10)
    {
        return n;
    }
    else
    {
        return (n % 10) + sum(n / 10); // checking for the last digit + recursing the digits before that 
    }
}

