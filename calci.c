#include<stdio,h>
int main()
{
    char operator;
    float num1,num2,result=0;
    printf("please enter operator: +,-,*,/");
    scanf("%c",&operator);
    printf("enter values of operands");
    scanf("%f%f",&num1,&num2);
    switch(operator)
    {
        case'+':
          result=num1+num2;
          break;
        case'-':
          result=num1-num2;
          break;
        case'*':
          result=num1*num2;
          break;
        case'/':
          result=num1/num2;
           break;
        default:printf("invalid operator");
    }
    printf("the result of %.2f%c%.2f=%.2f",num1,operator,num2,result);
    return 0;
}