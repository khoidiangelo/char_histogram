#include <stdio.h>
#define MAXCHAR 25
#define MAXDIG 9
int histogram_input(int clength[], int dlength[]) {
    // 97 -> 122 is a -> c values of corresponding character in int
    // 65 -> 90  is A -> Z values of corresponding character in int
    int c, nother = 0;
    while ((c = getchar()) != EOF) {
        if (c >= 97 && c <= 122) {
            ++clength[c -  97];
        } else if (c >= 65 && c <= 90) {
            ++clength[c - 65];
        } else if (c >= '0' && c <= '9') {
            ++dlength[c - '0'];
        } else {
            ++nother;
        }
    }
    return nother;
}