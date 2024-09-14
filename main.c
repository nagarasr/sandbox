// This is first file commiting into github
#include <stdio.h>
#include <file1.h>
#include <file2.h>
int test_var=0;
int main()
{
	printf ("This is new hello world");
	
	// Call functions based on test_var value. 
	if (test_var%2)
	{
		function1();
	}
	else
	{
		function2();
	}
	
	return 0;
}
