#include<stdio.h>
#include<string.h>

int main()
{
	char aa[] = "Great";
	char aa1[] = "123";  //�ַ���������־=/0,�����ַ�������
	char aa2[] = { '1','2','3'};
	char aa3[] ={'1','2','3','\0'};

	int len= strlen ("aaaaa");
	int len1 = strlen(aa1);
	int len2 = strlen(aa2);

	printf("%s\n",aa1);
	printf("%s\n",aa2);
	printf("%s\n",aa3);
	printf("%d\n",len);
	printf("%d\n", len1);
	printf("%d\n", len2);//���ֵ


	return 0; 
}