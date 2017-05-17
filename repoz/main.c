#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("vvedite simvol\n");
    scanf("%c", &c);
    printf("predshestvuushiy simvol = %c\n", c - 1);
    printf("sledyushiy simvol = %c",c+1);
    return 0;
}
