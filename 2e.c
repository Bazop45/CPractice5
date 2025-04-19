#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "Requiem";
    int start = (sizeof(word)/sizeof(word[0]))/2; // Start pos
    int end = sizeof(word)/sizeof(word[0]);   // End pos
    int dif = (end - start)+1;
    char result[dif]; // Array for result

    int j = 0; // Index for array result
    for (int i = start; i < end; i++) {
        result[j] = word[i];
        j++;
    }
    result[j] = '\0'; // Adding null terminator

    printf("Result: %s\n", result);

    return 0;
}
