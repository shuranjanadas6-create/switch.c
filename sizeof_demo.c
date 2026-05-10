#include <stdio.h>

int main() {
    int num = 5;   // binary: 00000101

    // Left Shift
    int left = num << 1;   // shift left by 1 → 00001010 (decimal 10)

    // Right Shift
    int right = num >> 1;  // shift right by 1 → 00000010 (decimal 2)

    printf("Original number: %d\n", num);
    printf("After Left Shift (num << 1): %d\n", left);
    printf("After Right Shift (num >> 1): %d\n", right);

    return 0;
}



