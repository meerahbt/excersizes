#include <stdio.h>

int fact(int n);

int main(void) {
    printf("%d\n", fact(5));
}

int fact(int n) {
    if (n==1)
        return 1;
    else 
        // printf("%i\n", n);
        return n * fact(n-1);
}

//      the program does the n-1 part over and over until we get to 1 and then goes back again to
//      preform the multiplication 