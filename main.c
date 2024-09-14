// This is first file commiting into github
#include <stdio.h>
#include "file1.h"
#include "file2.h"
int test_var=0;
int main()
{
	printf ("This is new hello world\n");
	scanf("%d", &test_var);
	// Call functions based on test_var value. 
	if (test_var%2 == 0)
	{
		function1();
		printf("This is for function 1.\n");
	}
	else
	{
		function2();
		printf("This is for function 2.\n");
	}

	printf("End of function calls\n");
	
	return 0;
}
