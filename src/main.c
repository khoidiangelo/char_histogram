#include "histogram_input.c"
#include "histogram_print.c"
#define MAXCHAR 25
#define MAXDIG 9
int main() {
    int character_length[MAXCHAR], digit_length[MAXDIG];
    for (int i = 0; i < MAXCHAR; ++i) {
        character_length[i] = 0;
    }
    for (int i = 0; i < MAXDIG; ++i) {
        digit_length[i] = 0;
    }
    int other_length = histogram_input(character_length, digit_length);
    histogram_print(character_length, digit_length, other_length);
    return 0;
}