#include <unistd.h> 
#include <stdio.h> 
//Tor var her
int main() 
{
	int ret; // integer variable type storing return value from truncate
	ret = truncate ("./pirate.txt", 45); // try to open pirate.txt in current dir, truncate it to 45 bytes
	if (ret == -1) { // if return is -1, failed
		perror ("truncate");  // show error 
		return -1; // return exitcode -1 to shell to indicate error
	}
 	return 0; // return 0 to shell, everything worked
}
