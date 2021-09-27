#include<iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    long long a[n];
    long long sum = 0;
    for(int i = 0; i < n; i++){
        long long x;
        scanf("%lld", &x);
        sum += x;
        a[i] = x;
    }
    long long x;
    scanf("%lld", &x);
    long long count1;
    long long count2 = 0;
    if(x >= sum){
        count1 = x / sum;
        long long s = count1 * sum;
        for(long long i = 0; ; i++){
            count2++;
            s += a[i];
            if(s > x) break;
        }
        printf("%lld\n", (count1*n) + count2);
    }
    else {
        for(long long i = n-1; ; i--){
            sum -= a[i];
            if(sum <= x) break;
            count2++;
        }
        printf("%lld\n", n - count2);
    }
    return 0;
}
