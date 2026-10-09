#include <stdio.h>

int main(void)
{
	float toff, dist, accel, time;
	printf("Enter the takeoff speed(km/hr): ");
	scanf("%f", &toff);
	printf("Enter the distance from rest to takeoff(m): ");
	scanf("%f", &dist);
	
	toff = (toff*1000)/3600; // convert km/hr to m/s

	accel = (toff*toff)/(2*dist); //using v=at & s=(1/2)*at^2
	time = toff/accel;

	printf("\nConstant acceleration: %.2fms-2", accel);
	printf("\nTime to be get to takeoff speed: %.2fs\n", time);
}
