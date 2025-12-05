
#include <stdio.h>
#include <stdlib.h>

void printBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int bits[32];  // assume 32-bit int
    int idx = 0;
    while (n > 0) {
        bits[idx++] = n % 2;
        n = n / 2;
    }
    // bits are in reverse order now: LSB first
    for (int i = idx - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input\n");
        return EXIT_FAILURE;
    }
    if (num < 0) {
        printf("Please enter a non-negative number\n");
        return EXIT_FAILURE;
    }
    printf("Binary representation: ");
    printBinary(num);
    printf("\n");
    return EXIT_SUCCESS;
}
