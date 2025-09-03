// program named istriangle.c question1
#include <stdio.h>

int main(){
    float num1, num2, num3;


    printf("side1:");
    scanf("%f", &num1);
    printf("side2:");
    scanf("%f",&num2);
    printf("side3:");
    scanf("%f",&num3);
    if (num1+num2>num3){
        printf("yes,traiangle possible\n");

    }
    else{
        printf("no");
    }

return 0;

}