#include <stdio.h>
#include <conio.h> 
// Fast-forward vs non-fast-forward: https://confluence.atlassian.com/bitbucket/git-fast-forwards-and-branch-management-329977726.html
int add(); // Function declaration
int main() {
	// Comment above printf()
	
	printf(a-b);
	scanf(a);
	return 0;
}
Changes from local repo on line 8.
/* 
	This is a new local change, nothing changed remoted. 'Change | No-Change' result should apply. This means 
	remote should accept my change while it does not have anything. The output should be a fast-forward merge 	
	after push (Aditya will write "Yes" here - modified from the remote file, if it happens: Yes BUT it was 'recursive' 
	because - there were commits made in the remote branch my 'git pull' performed a 3-way a.k.a. 'recursive' a.k.a non-fast-forward or --no-ff merge.)
	
	
*/

/*
	At Line2, the remote file did not have anything. Aditya added a local change to Line2.
	Expected output: It should accept the change occured locally into the remote file after push.
	Obtained output: It accepted my change after I pulled the other changes by creating a merge branch commit, performed a 'recursive or 3-way' merge.
*/

/*
	I have updated Line20 and Line12 (which already had some content) so lets see if it generates a merge conflict.
	Expected Output: 'No-Change | Change' result should apply. A fast-forward merge of changes coming from remote into local repo.
	Obtained output: YES. It performed a fast-forward merge on 'git merge'. And the reason it did NOT generate a merge-conflict was that this is not a 'Change | Change' situation.
*/

/*
	< This comment is a clean append, nothing that I am conflicting with remotely >
	Adding a different change locally and different change remotely.
	Expected output: Merge conflict on pull. I am commiting remote first and then pulling it locally. 
	Obtained output: ...
*/
