#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    float x;
    scanf("%d %d %d", &a,&b,&c);
    x=(a+b+c)/3.0;
    printf("Average: %.2f", x );
    return 0;
}