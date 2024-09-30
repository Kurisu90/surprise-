#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	printf("请注意你的电脑将在1min之内关机，请输入我是猪来取消关机\n");
	char ch[30] = { 0 };
	system("shutdown -s -t 60");//开始执行关机命令，同时你也可以把使时间调的更短
	scanf_s("%s", ch);
	char password[30] = "我是猪";//这里可以更改密码，比如叫爸爸😁😁😁
	if (strcmp(ch, password) == 0)
	{
		system("shutdown -a");
		printf("成功取消关机");
	}
	return 0;
}
