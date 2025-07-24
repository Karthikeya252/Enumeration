#include <stdio.h>

//enumeration is a derived data type that takes variables as terms and assign them with numerical values starting from 0
//difference between enum and #define is that enum can be declared locally whereas #define can't be declared locally
// Gobal enum
enum global {x,y,z};

void main()
{	enum global g = x;
	printf("%d",x); //Output:0
	// Local enum 
	// example 1
	enum val {sharma,karthikeya};  //in this example sharma is assigned with 0 and karthikeya is assigned with 1
	enum val val1 = karthikeya;
	printf("%d",val1);  //Output:1
	// example 2
	enum a {x=1,y=12,z=34};  //we can assign values to the terms in enumerated data type
	enum a ab = x;
	printf("%d",ab);  //Output:1
}
