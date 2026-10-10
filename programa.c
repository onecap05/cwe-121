#include <stdio.h>

int main()
{
    int cookie = 0;
    char buf[10];

    printf("buf: %p cookie: %p\n",
           (void *)buf, (void *)&cookie);

    gets(buf);

    if (cookie == 0x000d0a00)
        printf("ganaste Irene!\n");

    return 0;
}