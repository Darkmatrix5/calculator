#include <stdio.h>
int main(){
    //char ch;
    float a, b, result;
    
    printf("Enter the Num1_an operator(+,*,-,/,%)_Num2 , Press Enter \n");
    printf("example 40-20 , result = 20 \n");
    //printf("enter the num1 :");
    scanf("%f", &a );
    char ch;
   // printf("enter the operator :");
    scanf("%c", &ch );
    //printf("enter the num2 :");
	scanf("%f", &b);
     
    switch(ch)
	{
        case '+':
            result = a + b;  break;
        case '-':
            result = a - b;  break;
        case '*':
            result = a * b;  break;
        case '/':
            result = a / b;  break;
        
    }
    printf("Result = %f", result);
    return 0;
}
