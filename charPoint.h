#include <stdio.h>
char const letter[27][5] = {
    {0x3e, 0x41, 0x41, 0x7f, 0x41},  //A
    {0x7e, 0x41, 0x7e, 0x41, 0x7e},  //B
    {0x3f, 0x40, 0x40, 0x40, 0x3f},  //C
    {0x7e, 0x21, 0x21, 0x21, 0x7e},  //D
    {0x7f, 0x40, 0x7f, 0x40, 0x7f},  //E
    {0x7f, 0x40, 0x7f, 0x40, 0x40},  //F
    {0x3e, 0x40, 0x43, 0x41, 0x3e},  //G
    {0x41, 0x41, 0x7f, 0x41, 0x41},  //H
    {0x1c, 0x08, 0x08, 0x08, 0x1c},  //I
    {0x3c, 0x04, 0x04, 0x24, 0x18},  //J
    {0x22, 0x24, 0x38, 0x24, 0x22},  //K
    {0x40, 0x40, 0x40, 0x40, 0x7e},  //L
    {0x41, 0x63, 0x55, 0x49, 0x41},  //M
    {0x61, 0x51, 0x49, 0x45, 0x43},  //N
    {0x3e, 0x41, 0x41, 0x41, 0x3e},  //O
    {0x7e, 0x41, 0x7e, 0x40, 0x40},  //P
    {0x3e, 0x41, 0x49, 0x45, 0x3a},  //Q
    {0x7e, 0x41, 0x7e, 0x42, 0x41},  //R
    {0x3e, 0x40, 0x3e, 0x01, 0x7e},  //S
    {0x7f, 0x08, 0x08, 0x08, 0x08},  //T
    {0x42, 0x42, 0x42, 0x42, 0x3c},  //U
    {0x42, 0x42, 0x42, 0x24, 0x18},  //V
    {0x41, 0x41, 0x49, 0x5d, 0x22},  //W
    {0x41, 0x22, 0x14, 0x22, 0x41},  //X
    {0x41, 0x22, 0x14, 0x08, 0x08},  //Y
    {0x7f, 0x02, 0x08, 0x20, 0x7f},  //Z
    {0x00, 0x00, 0x00, 0x00, 0x00}}; //空格
int charPointPrint(char const *String, int space);