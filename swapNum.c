#include<stdio.h>
int main()
{
    int num1, num2;
    int temp;
    printf("Enter two number: \n");
    scanf("%d%d", &num1,&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("-------Number Swaped-------\n");
    printf("First number: %d\n", num1);
    printf("Second Number: %d\n", num2);
    return 0;

}