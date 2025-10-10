#include<stdio.h>
int main(){
    float num = 31416.289063;  // 4 bytes : 32 bits -> overall 7-8 digits
    double num2 = 314162912879837.123456; // 8 bytes : 64 bits -> overall 14-15 digits
    printf("%f %lf", num, num2);
    return 0;
}