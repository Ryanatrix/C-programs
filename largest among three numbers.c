#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Ask the user to input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check which number is the largest
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is %d.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is %d.\n", num2);
    } else {
        printf("The largest number is %d.\n", num3);
    }

    return 0;
}
