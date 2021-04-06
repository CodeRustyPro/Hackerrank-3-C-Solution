//https://www.hackerrank.com/challenges/functions-in-c/problem
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){
    int maxn;
    if (a>b && a>c && a>d) {
        maxn=a;
    }
    else if (b>a && b>c && b>d) {
        maxn=b;
    }
    else if (c>a && c>b && c>d) {
        maxn=c;
    }
    else {
        maxn = d;
    }
    return maxn;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
