#include <stdio.h>
#include <conio.h>

int main()
{
    void *ptr = NULL;
    int a = 11;
    ptr = &a;
    printf("kich thuoc cua con tro: %d\n", sizeof(ptr));
    printf("dia chi con tro : %p", *((int *)ptr));
    return 0;
}

fasdfasdgghgasg