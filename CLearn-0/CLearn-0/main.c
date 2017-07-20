//
//  main.c
//  CLearn-0
//
//  Created by necfol on 2017/7/19.
//  Copyright © 2017年 Necfol. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char a;
//    定义一个指针变量b，并且b只能指向char类型的数据
    char *b;
//    指针变量的值为a的地址
    b = &a;
    
//    访问b值对应的存储空间，即变量a的存储空间，此时的*和上面的* 是不同的
    *b = 10;
    return 0;
}
