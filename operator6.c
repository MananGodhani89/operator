#include<stdio.h>

main()

{
	int x=5,y=10,z=5,c;
	c=x^3-y^3-z^3-3*x^2*y+3*x*y^2-3*y^2*z-3*y*z^2+3*x*z^2-3*x^2*z+6*x*y*z;
	printf("c=%d",c);
}
