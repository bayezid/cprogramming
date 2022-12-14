#include<stdio.h>

int main (){
    int num1;
    int num2;
    float num3;
    double num4;
    char ch;

    printf("Enter any letter: ");
    scanf("%c", &ch);
    printf("You have entered: %c\n\n",ch);

    printf("Enter two integer number: ");
    scanf("%d %d", &num1, &num2);
    printf("You have entered: %d %d\n\n", num1, num2);

    printf("Enter a floating number: ");
    scanf("%f", &num3);
    printf("You have entered: %f\n\n", num3);

    printf("Enter a double number: ");
    scanf("%lf", &num4);
    printf("You have entered: %lf", num4);
}