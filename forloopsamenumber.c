#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        printf("%d\n", a);
    }

    return 0;
}