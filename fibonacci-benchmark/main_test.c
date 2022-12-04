#include <stdio.h>
#include "mylib/mylib.h"

int main(){
    int n = 9;
    printf("Fibonacci with recursion (n = 9): %d\n", fibRecur(n));
    printf("Fibonacci with iteration (n = 9): %d\n", fibIter(n));
    return 0;
}