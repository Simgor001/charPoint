#include <stdio.h>
#include <stdlib.h>
#include "charPoint.h"
int main(int argc, char const *argv[])
{
    //参数一：字符串
    //参数二：字符间距
    //返回值：字符数
    charPointPrint("GDMEC", 1);
    
    getchar();
    return 0;
}

int charPointPrint(char const *String, int space)
{
    //获取字符串的长度
    int len = 1;
    char c = *String;
    while (c != 0)
        c = String[len++];
    len--;

    //把字符串字母编号加载到缓存
    char *buf;
    buf = (char *)malloc(sizeof(char) * len);
    for (int i = 0; i < len; i++)
    {
        c = String[i];
        if (c > 64 && c < 91)
            buf[i] = c - 65;
        else
            buf[i] = 26;
    }

    //输出字符
    for (int i = 0; i < 5; i++) //字符高为5
    {
        for (int n = 0; n < len; n++) //一行字符数为len
        {
            for (int b = 0; b < 8; b++) //一个字符宽8bit
                printf("%s", (letter[buf[n]][i] & (128 >> b)) ? "@" : " ");
            for (int sp = 0; sp < space; sp++)
                printf(" ");
        }
        printf("\n");
    }
    free(buf);
    return len;
}