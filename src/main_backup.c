#include <stdio.h>
#include <stdlib.h>
#include "square_cutter.h"

int main() {
    int N = 6, M = 5;
    char* result = cutPaperIntoSquares(N, M);
    
    printf("Cutting a %dx%d rectangle into squares: %s\n", N, M, result);
    free(result);

    return 0;
}
