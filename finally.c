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
    int count = 0;
    do {
    puts("please enter name: ");
    scanf("%2S", card_name);
    int val = 0;
    switch (card_name[0]){
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;
    case 'A':
        val = 11;
        break;
    case 'X':
        continue;
    default:
        val = atoi(card_name);
        if (( val < 1 ) || (val < 7 )){
            puts("i can\'t stand");
            continue;
        }
    }
    // 检查拍的点数是否在3到6之间
    if ((val > 2) && (val < 7)){
        count++;
    }else if (val == 10){
        count--;
    }
    printf("now number: %i\n", count);
    } while (card_name[0] != 'X');
    return 0;
}
