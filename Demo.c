#include <stdio.h>

int main()
{
    // (a+b)^2=a^2+2*a*b+b^2
    int a,b,c;
    scanf(" %d %d", &a, &b);
    c=a*a+2*a*b+b*b;
    printf("Sum= %d\n",c);
    return 0;

}
