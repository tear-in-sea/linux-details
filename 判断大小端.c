#include<stdio.h>

//测试机器使用的是否为小端模式。是，则返回true，否则返回false
//这个方法判别的依据就是：C语言中一个对象的地址就是这个对象占用的字节中，地址值最小的那个字节的地址。
int isSmallIndain(void)
{
      unsigned short val = 0x0001;
      unsigned char* p = (unsigned char*)&val;  //C/C++：对于多字节数据，取地址是取的数据对象的第一个字节的地址，也就是数据的低地址
      
      return (*p == 0x01);
}
 
int main(void)
{

    if(isSmallIndain())
    {
        puts("小端"); 
    } else{
        puts("大端"); 
    }

    return 0;

}
