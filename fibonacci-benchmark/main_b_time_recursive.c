#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void){
    clock_t t;
    t = clock();
    fibRecur(30);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("fibRecur() took %f seconds to execute \n", time_taken);
    return 0;
}