/*
 * Created by 14027 2019/12/26 17:45
 * 需求：
 *      malloc是memory(内存) allocate(分配)的缩写
 */
#include <stdio.h>
#include <malloc.h>

int main(void) {
    int i = 5;
    // 分配了4个字节 静态分配

    int *p = (int *) malloc(4);
    /*
     * malloc(t)函数
     *      功能：请求系统分配t个字节连续的内存空间，但不初始化
     *
     *      使用：
     *          其中t必须为整数
     *          malloc返回的是所分配内存空间的首字节地址
     *          因为没有初始化，返回的只是首字节地址，所以必须要强制类型转换
     *          需要指定头文件malloc.h
     *
     * 该行的含义：
     *      向系统请求4个字节的内存空间，然后将返回的地址转换成整型指针
     *      然后赋给指针变量p，此时p保存的就是申请的动态内存的首地址
     */

    *p = 6;
    // 将5存到申请的动态内存中
    printf("%d\n", *p);

    free(p);
    /*
     * 把p指向的内存释放掉
     *
     * p本身的内存是静态的，不能由程序员手动释放，
     * p本身的内存只能在p变量所在的函数运行终止时由系统自动释放
     *
     * free()和malloc是成对出现的
     */
    printf("%d\n", *p);

    return 0;
}