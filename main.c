#include <stdio.h>
#include <stdlib.h>
#define ever (;;)

void printUpPtr(char *anyPtr[99])
{
    for(int i = 0; *anyPtr < 100; i++)
    {
        if(*anyPtr != '\0')
            printf("^");

        anyPtr++;
    }
}

int main()
{
    char any[100] = {};
    int *anyPtr = &any;
    system("color A");

    printf("Walcome to CMD 2\n");
    printf("Microsoft Windows [versão 10.0.19044.2130]\n");
    printf("(c) Microsoft Corporation. Todos os direitos reservados.\n\n");



    for ever
    {
        printf(">");
        gets(any);

        if(any[0] == '\0'){continue;}

        fflush(stdin);

        printf("\n%s\n", &any);
        printUpPtr(any);
        printf(" is not a valid command, enter help to see the commands.\n\n");
    }
    return 0;
}
