#include<stdio.h>
int main(void)
{
	//v - velocity
	//a - acceleration
	//t - time
	//s - distance
	//km_v - velosity in kmph
	float v,a,t,s,km_v;

	//Inputs
	printf("Enter the takeoff speed :");
	scanf("%f",&km_v);

	printf("Enter the distance in meters :");
	scanf("%f",&s);

	//calculation
	
	v = km_v * 0.2777778; //convert KMph^(-1) to ms^(-1)
	
	t = (2.0*s)/v; // calculate the time

	a = v/t; // calculate the acceleration
	
	//outputs
	printf("The acceleration is %f\n",a);
	printf("The takeoff time is %f\n",t);

	return 0;

}

