#include <stdio.h>
#include <string.h>

int main() {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz"; // Alphabet array
    char letter = 's'; // Letter, that's need to find
    int index = -1;

    for (int i = 0; i < strlen(alphabet); i++) {
        if (alphabet[i] == letter) {
            index = i + 1; // i+1 for to not mistake with starting from 0
            break; // Exit from loop after success
        }
    }

    if (index != -1) {
        printf("Letter '%c' found on %d pos of alphabet\n", letter, index); // Print letter and letter's index
    } else {
        printf("Letter '%c' not found in alphabet\n", letter); // Print failure and missed letter
    }

    return 0;
}
