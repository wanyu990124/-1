//1.��ɲ�������Ϸ��
//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Menu() {
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("����������ѡ��:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Game() {
	srand((unsigned int) time(0));
	int result=rand() % 100 + 1;
	while (1) {
		printf("������Ҫ�µ�����:");
		int num = 0;
		scanf("%d", &num);
		if (num > result) {
			printf("����\n");
		}
		else if (num < result) {
			printf("����\n");
		}
		else {
			printf("��ϲ�������!\n");
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
			printf("�ҵ���! ������±�Ϊ%d\n", mid);
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
		printf("û�ҵ�!\n");
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
		printf("����������:\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) {
			printf("��½�ɹ�!\n");
			break;
		}
		else {
			printf("�����������!\n\n");
		}
	}
	if (i == 3) {
		printf("��½ʧ��!\n");
	}
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main() {
	char ch = 0;
	printf("������һ���ַ�:\n");
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