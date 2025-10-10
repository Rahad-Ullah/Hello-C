#include<stdio.h>
int main(){
    int num = 2147483647; // 4 bytes : 32 bits -> value range is -2147483648 to 2147483647
    long long int long_num = 9223372036854775807; // 8 bytes : 64 bits -> value range is -9223372036854775808 to 9223372036854775807
    printf("%d %lld", num, long_num);
}