#include<iostream>
using namespace std;

long long find_base_exp(long long base, int power){
    if(power==0) return 1LL;
    else {
        long long res = 1;
        for(int i = 0; i < power; i++) res *= base;
        return res;
    }
}
int main(){
    long long k, a, b;
    scanf("%lld", &k);
    scanf("%lld %lld", &a, &b);
    long long aBase10 = 0;
    long long bBase10 = 0;
    int count = 0;
    while(a!=0){
        long long rem = a % 10;
        a /= 10;
        long long base_exp = find_base_exp(k, count);
        aBase10 += rem * base_exp;
        count++;
    }
    count = 0;
    while(b!=0){
        long long rem = b % 10;
        b /= 10;
        long long base_exp = find_base_exp(k, count);
        bBase10 += rem * base_exp;
        count++;
    }
    printf("%lld\n", aBase10 * bBase10);
    return 0;
}
