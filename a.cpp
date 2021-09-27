#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    bool status = 0;
    for(int i = a; i <= b; i++){
        if(i%c==0) {
            printf("%d\n", i);
            status = 1;
            break;
        }
    }
    if(!status) puts("-1");
    return 0;
}
