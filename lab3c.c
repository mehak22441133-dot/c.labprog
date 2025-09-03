//program name checkdivisor.c

#include <stdio.h>
int main(){
    int num1,num2;
    int larger,smaller;

    printf("number1:");
    scanf("%d",&num1);
    printf("number2:");
    scanf("%d",&num2);

    if (num1>num2){
        larger=num1;
        smaller=num2;
    }
    else if(num1<num2){
        larger=num2;
        smaller=num1;
    }
    else{
        printf("the number is equal\n",&num1);
        return 0;
    }
    if (smaller==0){
        printf("not possible\n");
        return 0;
    }  

    if (larger%smaller==0){
        printf("%d is divisor of  %d \n",smaller,larger);
    }
    else {
        printf("%d is not divisor of %d\n ",smaller,larger);
    }

    return 0; 
}