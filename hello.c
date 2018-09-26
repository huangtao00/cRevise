#include <stdio.h>
#include <unistd.h>
#define print printf
int main()
{
 char *pt="注意红字部分。fflush处理的是已经从输入流中取出的数据";

 while (*pt)
 {
    print("%c",*pt);
    fflush(stdout);
    usleep(100000);
    pt++;
 }
 print("\n");
}