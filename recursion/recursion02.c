#include <stdio.h> 

int fib(int n);

int main(void){
    printf("%i\n", fib(5));
}

// fibonacci sequence is 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144...etc. 
// starts with 0 

// find the nth term of the sequence using recursion 

int fib(int n){
    if (n==1)
    {
        return 0;
    }
    else
    {
        return n-1 + fib(n);
    }
}