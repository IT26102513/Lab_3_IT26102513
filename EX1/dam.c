#include <stdio.h>

int main(void)
{	
	float height, cmeters, work, power;
	const float(gravi) = 9.80;
	const float(effi) = 0.9;   //gravitational constant and efficiency constant
	
	printf("Enter height of the dam: ");
	scanf("%f", &height);
	printf("\nEnter number of cubic meters of water per second: ");
	scanf("%f", &cmeters);

	work = (1000*cmeters)*gravi*height; //one cubic meter == 1000kg of water
	power = (effi*work)/1000000; //90% efficiency & in megawatts
	
	printf("%.2f megawatts will be produced\n", power);
}
	

	
