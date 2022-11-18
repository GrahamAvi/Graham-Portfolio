#include <stdio.h>

int main() {
	int a, b;
	char c;

	a = 10;
	b = 20;

	scanf("%c" , &c);

	if(a > b)  {
		printf("a > b = %i\n", a > b);
	}

	if(c >= 65 && c <= 90 ) {
		c = c + 32;
		printf("lowercase = %c\n", c);
	}

	return 0;
}
