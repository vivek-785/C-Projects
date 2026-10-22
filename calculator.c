#include <stdio.h>
#include <stdbool.h>
int main(){
    char operator = '\0';
    
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;
    
    printf("Enter the first number :");
    scanf("%lf",&num1);

    printf("Enter the operator (+,-,x,/) :");
    scanf(" %c",&operator);//clear new line character
    
    printf("Enter the second number :");
    scanf("%lf",&num2);
    
    
     
    
    switch (operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case 'x':
            result = num1 * num2;
            break;
        case '/':
            if(num2 == 0){
                printf("Cannot divided by zero");
            }
            else{
                result = num1 + num2 ;
            }
            break;
        default:
            printf("Enter valid operator");
    }
    printf("%.2lf",result);
    
    return 0;
}
