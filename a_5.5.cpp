
#include <stdio.h>
int main()
{
  printf("ab\ncd\n");//转义字符规则

  printf("%c\n", '/');
  printf("%c\n",'\'');//通过转义字符\来表达 " ' 之类
  printf("%s\n","\"");

  printf("%s\n", "abc");

  printf("\test\test\n");//\t为水平制表符=Tab
  printf("\\test\\test\n");//通过\来将转义字符 转义 成字符

  return 0;
}

