/*
#define _CRT_SECURE_NO_WARNINGS
#define MAX_BUF_SIZE 7
#include <stdio.h>

void my_gets(char* str, int size) {
	char ch;
	int i = 0;
	ch = getchar();
	/// 입력된 문자열 중에서 공백 없애기 
	while ((ch != '\n') && (i < size - 1)) {
		ch = getchar();
	}
	str[i] = ch + 22; //암호화
	i++;
	str[i] = '\0';
}

int main() {
	char str[MAX_BUF_SIZE];
	my_gets(str, sizeof(str));
	printf("입력한 문자열 : %s\n", str);

	return 0;
}
*/