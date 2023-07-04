#include <stdio.h>
#define MAXCHAR 26
#define MAXDIG 10
void histogram_print(int clength[], int dlength[], int nother) {
    for (int i = 0; i < MAXCHAR; ++i) {
        printf("%4c%c: ", i + 65, i + 97);
        for (int j = 0; j < clength[i]; ++j) {
            putchar('|');
        }
        printf("\n");
    }
    for (int i = 0; i < MAXDIG; ++i) {
        printf("%5d: ", i);
        for (int j = 0; j < dlength[i]; ++j) {
            putchar('|');
        }
        printf("\n");
    }
    printf("other: ");
    for (int i = 0; i < nother; ++i) {
        putchar('|');
    }
}