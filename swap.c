include <stdio.h>

int main()
{
    int a= 5; //defintion
    int b; //declaration
    b = 7;//initialization
    int temp = a;
    a = b;
    b = temp;
    printf("%d ", a);
    printf("%d ", b);
    return 0;
}
