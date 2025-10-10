#include <stdio.h>

int main(){
    int num1 = 10;
    num1 = 20;
    float num2 = 3.14;
    char ch = 'a';
    printf("%d \n", num1);
    printf("%.2f \n", num2);  // %.2f means 2 decimal places
    printf("%c", ch);
    return 0;
}