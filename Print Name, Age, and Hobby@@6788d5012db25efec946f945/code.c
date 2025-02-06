#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    int c;
    char b;
    scanf("%s %d %s" , &a,&c,&b);
    printf("Name: %s/n",a);
    printf("Age: %d/n",c);
    printf("Hobby: %s",b);
    return 0;
}