#include <stdio.h>
#include <conio.h> 
int main() {
	printf("sum: ",a+b);
	return 0;
}

/* 
	This is a new local change, nothing changed remoted. 'Change | No-Change' result should apply. This means 	 remote should accept my change while it does not have anything. The output should be a fast-forward merge 	after push (Aditya will write "Yes" here - modified from the remote file, if it happens: ...)  
*/

/*
	At Line2, the remote file did not have anything. Aditya added a local change to Line2.
	Expected output: It should accept the change occured locally into the remote file after push.
	Obtained output: <Will be updated remotely after push>
*/
