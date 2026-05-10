#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, D, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    D = b*b - 4*a*c;

    if(D > 0) {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Two distinct real roots: %d and %d\n", root1, root2);
    }
    else if(D == 0) {
        root1 = -b / (2*a);
        printf("One real root: %d\n", root1);
    }
    else {
        printf("No real roots (complex roots).\n");
    }
    return 0;
}



