#include <stdio.h>
#define LINE_LENGTH 20


#define NONE                 "\e[0m"
#define BLACK                "\e[0;30m"
#define L_BLACK              "\e[1;30m"
#define RED                  "\e[0;31m"
#define L_RED                "\e[1;31m"
#define GREEN                "\e[0;32m"
#define L_GREEN              "\e[1;32m"
#define BROWN                "\e[0;33m"
#define YELLOW               "\e[1;33m"
#define BLUE                 "\e[0;34m"
#define L_BLUE               "\e[1;34m"
#define PURPLE               "\e[0;35m"
#define L_PURPLE             "\e[1;35m"
#define CYAN                 "\e[0;36m"
#define L_CYAN               "\e[1;36m"
#define GRAY                 "\e[0;37m"
#define WHITE                "\e[1;37m"

#define BOLD                 "\e[1m"
#define UNDERLINE            "\e[4m"
#define BLINK                "\e[5m"
#define REVERSE              "\e[7m"
#define HIDE                 "\e[8m"
#define CLEAR                "\e[2J"
#define CLRLINE              "\r\e[K" //or "\e[1K\r"
int main()
{
    printf("Hello World!\n");
    unsigned char a[1000];

    int line_offset = 0;
    unsigned char *pt = a;
    int byte_number = 1;
    int row_number = 1;
    while(byte_number<1001)
    {
        printf ("%d: ",row_number);
        while(line_offset<LINE_LENGTH)
        {
            printf("%02x ",pt[0]); //注意这里的pt必须是无符号的char 指针
            line_offset++;            pt++;
            byte_number++;
            if(byte_number == 1001)
                break;

        }
        row_number++;
        line_offset = 0;
        printf("\n");
    }




    return 0;
}
