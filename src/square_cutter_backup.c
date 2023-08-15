#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* cutPaperIntoSquares(int N, int M) {
    char* result = (char*)malloc(1000 * sizeof(char));
    result[0] = '\0';

    while (N > 0 && M > 0) {
        int minSize = N < M ? N : M; // Determine the size of the largest possible square
        char square[50];
        sprintf(square, "%dx%d, ", minSize, minSize); // Format the square's dimensions
        strcat(result, square); // Append to the result

        // Cut the square from the paper
        if (N < M) {
            M -= minSize;
        } else {
            N -= minSize;
        }
    }

    // Remove the trailing comma and space if present
    if (strlen(result) > 0) {
        result[strlen(result) - 2] = '\0';
    }

    return result;
}

int main() {
    printf("%s\n", cutPaperIntoSquares(6, 5));
    printf("%s\n", cutPaperIntoSquares(1, 1));
    printf("%s\n", cutPaperIntoSquares(9, 9));
    return 0;
}
