#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* cutPaperIntoSquares(int N, int M) {
    char* result = (char*)malloc(1000 * sizeof(char));
    result[0] = '\0';

    while (N > 0 && M > 0) {
        int minSize = N < M ? N : M;
        char square[50];
        sprintf(square, "%dx%d, ", minSize, minSize);
        strcat(result, square);

        if (N < M) {
            M -= minSize;
        } else {
            N -= minSize;
        }
    }

    if (strlen(result) > 0) {
        result[strlen(result) - 2] = '\0';
    }

    return result;
}
