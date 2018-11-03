//1.完成猜数字游戏。
//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Menu() {
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("请输入您的选择:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Game() {
	srand((unsigned int) time(0));
	int result=rand() % 100 + 1;
	while (1) {
		printf("请输入要猜的数字:");
		int num = 0;
		scanf("%d", &num);
		if (num > result) {
			printf("高了\n");
		}
		else if (num < result) {
			printf("低了\n");
		}
		else {
			printf("恭喜你猜中了!\n");
			break;
		}
	}
}

int main() {
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else {
			printf("goodbye\n");
			break;
		}

	}
}


#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int to_find = 7;
	int left = 0, right=9, mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (to_find == arr[mid]) {
			printf("找到了! 数组的下标为%d\n", mid);
			break;
		}
		else if (arr[mid] < to_find) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	if (to_find != arr[mid]) {
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main() {
	char password[1024] = {0};
	int i = 0;
	for (i=0; i < 3; i++) {
		printf("请输入密码:\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) {
			printf("登陆成功!\n");
			break;
		}
		else {
			printf("密码输入错误!\n\n");
		}
	}
	if (i == 3) {
		printf("登陆失败!\n");
	}
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main() {
	char ch = 0;
	printf("请输入一个字符:\n");
	while ((ch = getchar()) != EOF) {
		if (ch >= 'A'&&ch <= 'Z') {
			printf("%c", ch + 32);
		}
		else if (ch >= 'a'&&ch <= 'z') {
			printf("%c", ch - 32);
		}
		else if (ch >= '0'&& ch <= '9') {
			printf(" ");
		}
		else {
			putchar(ch);
		}
	}
	system("pause");
	return 0;
}