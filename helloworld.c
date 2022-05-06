// Simple C program to display "Hello World"

// Header file for input output functions
#include <stdio.h>

// main function -
// where the execution of program begins
int main()
{

	// prints hello world
	printf("Hello World!");

	for(int i=0; i < 4; i++){
	  printf("Hello, I'm %d -- really", i);
	  
	}
	// need to add comments (so I can have some remote changes!)
	// great work!!
	for(int i=0; i < 4; i++){
	  printf("Hello, it's me and  I'm %d -- it's fine, right?", i);
	  
	}
	
	int x = 0;
	while (x++ < 10){
	  printf("new loop!\n");
	}

	return 0;
}
void sayHello(int x){
	for (int i = 0; i<x; i++){
		printf("Hello\n");	

	}
}

