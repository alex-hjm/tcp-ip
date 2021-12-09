#include <stdio.h>
#define BUF_SZIE 3

int main(int argc, char *argv[])
{
    FILE *fp1; //保存在fp1中的是FILE结构体指针
    FILE *fp2; //保存在fp2中的是FILE结构体指针
    char buf[BUF_SZIE];

    fp1 = open("news.txt", "r");
    fp2 = open("cpy.txt", "w");

    while (fgets(buf, BUF_SZIE, fp1) != NULL)
        fputs(buf, fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
