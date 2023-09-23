#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define STRING_SIZE 10

int main(void)
{
    int a = 10;
    printf("%d\n", 9999);
    printf("%d\n", 1239081);
    printf("[%p]: %d", &a, a);

    return 0;
}
