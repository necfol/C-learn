//
//  main.c
//  CLearn-1
//
//  Created by necfol on 2017/7/20.
//  Copyright © 2017年 Necfol. All rights reserved.
//

//#include <stdio.h>
//
//void swap(int *arg0, int *arg1 ) {
//    int temp;
//    temp = *arg0;
//    *arg0 = *arg1;
//    *arg1 = temp;
//}
//
//int main(int argc, const char * argv[]) {
//    int a = 10, b = 9;
//    printf("调用函数之前a=%d,b=%d\n", a, b);
//    swap(&a, &b);
//    printf("调用函数之后a=%d,b=%d\n", a, b);
//    return 0;
//}

#include <stdio.h>

void test(void) {
    char str[] = "ceshicyuyan";
    for (int i = 0; str[i] != '\0'; i++) {
        printf("str[%d] = %c\n", i, *(str + i));
    }
}

int main(int argc, const char * argv[]) {
    test();
    return 0;
}
