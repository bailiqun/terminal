#include "cmd_help.h"

void HelpCmdExeFun(int agrc, char *argv[])
{
    printf("hello ,this is help\r\n");
    int i=0;
    for(i=0;i < agrc;i++)
    {
        printf("argv[%d]:%s \r\n",i,argv[i]);
    }
    printf("\r\n");
    return;
}
