#include <stdio.h>

int squared(int x) {
	return x*x;
}

int main() {
	int a;
	int b;
	a = 6;
	b = squared(2);
	int c = a + b;
	printf("%i", c);
	return 0;
}
