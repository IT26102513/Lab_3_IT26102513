#include <stdio.h>
#include <math.h>

int main(void)
{	
	float area, height, base;
	printf("Enter the Area: ");
	scanf("%f", &area);

	height = sqrt(3*area); // 2h/3 = b and A=1/2 *bh(area of a triangle) 
	base = (2*height)/3; // again, 2h/3 = b

	printf("\nHeight: %.2f", height);
	printf("\nBase: %.2f\n", base);
}




