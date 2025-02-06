#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100];
    int c;
    char b[100];
    scanf("%s %d %s" , &a,&c,&b);
    printf("Name: %s/n",a);
    printf("Age: %d/n",c);
    printf("Hobby: %s",b);
    return 0;
}