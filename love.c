#include <stdio.h>
int main()
{
    int i, j, k, l, m;
    char c = 'v';
    for (i = 1; i <= 5; i++)
        printf("\n"); //开头空出5行
    for (i = 1; i <= 3; i++)
    { //前3行中间有空隙分开来写
        for (j = 1; j <= 32 - 2 * i; j++)
            printf(" "); //左边的空格，每下一行左边的空格比上一行少2个 //8*n-2*i
        for (k = 1; k <= 4 * i + 1; k++)
            printf("%c", c); //输出左半部分字符小爱心
        for (l = 1; l <= 13 - 4 * i; l++)
            printf(" "); //中间的空格，每下一行的空格比上一行少4个
        for (m = 1; m <= 4 * i + 1; m++)
            printf("%c", c); //输出右半部分字符小爱心
        printf("\n");        //每一行输出完毕换行
    }
    for (i = 1; i <= 3; i++)
    { //下3行中间没有空格
        for (j = 1; j <= 24 + 1; j++)
            printf(" "); //左边的空格 //8*(n-1)+1
        for (k = 1; k <= 29; k++)
            printf("%c", c); //输出字符小爱心
        printf("\n");        //每一行输出完毕换行
    }
    for (i = 7; i >= 1; i--)
    { //下7行
        for (j = 1; j <= 40 - 2 * i; j++)
            printf(" "); //左边的空格，每下一行左边的空格比上一行少2个//8*(n+1)-2*i
        for (k = 1; k <= 4 * i - 1; k++)
            printf("%c", c); //每下一行的字符小爱心比上一行少4个（这个循环是i--）
        printf("\n");        //每一行输出完毕换行
    }
    for (i = 1; i <= 39; i++)
        printf(" ");   //最后一行左边的空格
    printf("%c\n", c); //最后一个字符小爱心
    for (i = 1; i <= 5; i++)
        printf("\n"); //最后空出5行

    getchar(); // 防止控制台程序闪退
    return 0;
}
