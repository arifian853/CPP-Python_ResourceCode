#include <iostream>
#include <cstdio>
using namespace std;

int max_of_inputed(int a, int b, int c, int d){
    int max=a;
    
    if (b>max){
        max = b;
    }
    if (c>max){
        max = c;
    }
    if (d>max){
        max=d;
    }
    return max;
}
int main() {
    int a, b, c, d;
    printf("Input the number 4 times (with spaces) = " );
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_inputed(a, b, c, d);
    printf("Biggest number = result = ");
    printf("%d", ans);
    
    return 0;
}
