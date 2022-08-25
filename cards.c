/*
*计算牌面点数的程序
*使用“拉斯维加斯公开许可证”
*(c)2014学院21点扑克游戏小组
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    puts("输入牌名: ");
    scanf("%2S", card_name);
    int val = 0;
    if (card_name[0] == 'K'){
        val = 10;
    } else if (card_name[0] == 'Q'){
        val = 10;
    } else if (card_name[0] == 'J'){
        val = 10;
    } else if (card_name[0] == 'A'){
        val = 11;
    } else{
        val = atoi(card_name);
    }
    // 检查拍的点数是否在3到6之间
    if ((val > 2) && (val < 7))
        puts("计数增加");
    // 否则检查牌是不是10,J,Q,K
    else if (val == 10)
        puts("计数减少");
    return 0;
}
