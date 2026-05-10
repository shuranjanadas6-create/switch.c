#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;        // coefficients integer
    float D, root1, root2; // discriminant এবং roots float

    printf("Enter coefficients a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    D = (float)(b*b - 4*a*c); 

    if(D > 0) {
        root1 = (-b + sqrt(D)) / (2.0 * a);
        root2 = (-b - sqrt(D)) / (2.0 * a);
        printf("Two distinct real roots: %.2f and %.2f\n", root1, root2);
    }
    else if(D == 0) {
        root1 = -b / (2.0 * a);
        printf("One real root: %.2f\n", root1);
    }
    else {
        float realPart = -b / (2.0 * a);
        float imagPart = sqrt(-D) / (2.0 * a);
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n",   realPart, imagPart, realPart, imagPart);
    }
    return 0;
}
