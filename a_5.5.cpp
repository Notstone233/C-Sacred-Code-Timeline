
#include <stdio.h>
int main()
{
  printf("ab\ncd\n");//ת���ַ�����

  printf("%c\n", '/');
  printf("%c\n",'\'');//ͨ��ת���ַ�\����� " ' ֮��
  printf("%s\n","\"");

  printf("%s\n", "abc");

  printf("\test\test\n");//\tΪˮƽ�Ʊ��=Tab
  printf("\\test\\test\n");//ͨ��\����ת���ַ� ת�� ���ַ�

  return 0;
}

