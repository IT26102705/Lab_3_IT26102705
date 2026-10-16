#include<stdio.h>
#include<math.h>
int main(void)
{
	//b - base 
	//h - height
	//a - area
	
	float b,h,a;
	
	//inputs
	printf("Enter the area :");
	scanf("%f",&a);

	//calculations
	
	h = sqrt(3.0*a); //calculate the height

	b = (2.0/3.0)*h; // calculate the base

	//outputs
	
	printf("Height is %f\n",h);
	printf("Base is %f\n",b);


	return 0;
}
