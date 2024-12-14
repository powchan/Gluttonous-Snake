#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <math.h>

#define int_1 char
#define bool char
#define true 1
#define false 0
#define byte unsigned char
#define coor unsigned short

#define msleep(s) usleep(s*1000)

#define EMPTY_DIC 4
#define LEFT 0
#define UP 1
#define RIGHT 2
#define DOWN 3

#define ESC 27
#define SPACE 32


void clearScreen()
{
    printf("\033[2J");
    printf("\033[H");
}

#define CL clearScreen()
#define SEED clock()



int kbhit(void) {
    struct termios oldt, newt;
    int ch;
    int oldf;

    // 获取终端的当前设置
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO); // 禁用缓冲区和回显
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin); // 将读取的字符放回缓冲区
        return 1;
    }

    return 0;
}

// 等待键按下
void wait_for_kbhit() {
    while (!kbhit()) {
        struct timespec req = {0, 100000000L}; // 100ms
        nanosleep(&req, NULL); // 使用 nanosleep 模拟 Sleep
    }
    getchar(); // 读取按键
}

void fresh_stdin()
{
    fflush(stdin);
}

void print_persent(int persent)
{
    printf("%d%%\n",persent);
}
