/*
*计算牌面点数的程序
*使用“拉斯维加斯公开许可证”
*(c)2014学院21点扑克游戏小组
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char card_name[3];
    puts("please enter name: ");
    scanf("%2S", card_name);
    int val = 0;
    switch (card_name[0])
    {
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;
    case 'A':
        val = 11;
        break;
    default:
        val = atoi(card_name);
    }
    // 检查拍的点数是否在3到6之间
    if ((val > 2) && (val < 7))
        puts("more than");
    // 否则检查牌是不是10,J,Q,K
    else if (val == 10)
        puts("lost something");
    return 0;
}
