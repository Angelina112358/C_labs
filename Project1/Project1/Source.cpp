#include <stdio.h>

int main() {
	int a;
	printf("Enter a=");
	scanf("%d", &a);
	int b = a % 100;
	a = a /100;
	int c = b * 100 + a;
	printf("%d", c);
	return 0;
}