#include <stdio.h>

int main() {
	int x, y;
	printf("Enter the Length");
	scanf("%i", &x);

	if( x <= 0 )
	{
		printf("Length cannot be negative!\n");
		return 0;
	}

	printf("Enter the Width");
	scanf("%i", &y);

	if( y <= o )
	{
		printf("Width cannot be negative!\n");
		return 0;
	}
	
	printf("The sum of your <=8 is: %i\n", x + y);
	return 0;
}
