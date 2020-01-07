/*
* typedef有自己的作用域。
* #define文件内可见，namespace对它不起作用。
*/

#include"./include/customize.h";

#include<iostream>

namespace Idle
{
#define INTPTR_1 int*

}   // Idle

namespace Customize
{
    int main()
    {
        //
        INTPTR_1 p1, p2;    // >p1 int*     >p2 int
        INTPTR_2 p3, p4;    // >p3 int*     >p4 int*
        INTPTR_3 p;

        //
        const INTPTR_1 p5 = nullptr;    // >p5 const int*
        const INTPTR_2 p6 = nullptr;    // >p6 int* const
        INTPTR_1 const p7 = nullptr;    // >p7 int* const;
        INTPTR_2 const p8 = nullptr;    // >p8 int* const;
    }
}   // Customize