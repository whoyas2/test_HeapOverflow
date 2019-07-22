#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
        char *foo = (char *)malloc(4);
        char *bar = (char *)malloc(4);
        strcpy(foo, "abcdefghijklmnopqrstuvwxyz0123456789");
        printf("%p : %s\n", foo, foo);
        printf("%p : %s\n", bar, bar);
        return 0;
}
