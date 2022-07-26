/*
 * Piramide Azteca
 *
 * Programma che genera una piramide Azteca, ovvero il seguente schema:
 *
 * 5x5 valore iniziale 10:
 * 10 10 10 10 10
 * 10  9  9  9 10
 * 10  9  8  9 10
 * 10  9  9  9 10
 * 10 10 10 10 10
 */

#include <stdio.h>


int main() {
    int max_r = 15;
    int max_c = 15;
    int val = max_r > max_c ? max_r : max_c;
    int iterations = 0;

    int mat[max_r][max_c];

    // Fill
    for (int i = 0; i < max_r; i++) {
        for (int r = i; r < max_r - i; r++) {
            for (int c = i; c < max_c - i; c++) {
                mat[r][c] = val - i;
                iterations++;
            }
        }
    }

    // Print
    for (int r = 0; r < max_r; r++) {
        for (int c = 0; c < max_c; c++) {
            printf("%2d ", mat[r][c]);
        }
        puts("");
    }
    printf("\nTotal iterations: %d\n", iterations);

    return 0;
}
