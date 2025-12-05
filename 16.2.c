
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, original, reversed = 0, remainder;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return EXIT_FAILURE;
    }
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return EXIT_SUCCESS;
}
