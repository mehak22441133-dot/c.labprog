#include <stdio.h>

int main()
{
    float num1, num2, num3, num4, num5;
    float average;

    printf("Enter five integers:\n");
    printf("Integer 1: ");
    scanf("%d", &num1);
    printf("Integer 2: ");
    scanf("%d", &num2);
    printf("Integer 3: ");
    scanf("%d", &num3);
    printf("Integer 4: ");
    scanf("%d", &num4);
    printf("Integer 5: ");
    scanf("%d", &num5);

    average = (num1 + num2 + num3 + num4 + num5) / 5.0;

    printf("\nThe average of the five integers is: %.2f\n", average);

    getchar();
    getchar();

    return 0;
}
