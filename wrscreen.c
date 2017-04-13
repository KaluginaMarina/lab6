#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "my_string.h"

int wrscreen(char *str)
{
    if (str == NULL)
    {
        return 1;
    }
    char *beg = str,
         *end = str + strlen(str);
    printf("\"");
    for (; beg < end; ++beg)
    {
        printf("%c", *beg);
    }
    printf("\"\n");
    return 0;
}
