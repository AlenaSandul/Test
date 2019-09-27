#include <stdio.h>
#include <stdlib.h>
#include "resource.h"
#include "data.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	sayHello();
    printf ("%i\n", count(5,5));
  int result = getDiff(5, 3);
   printResult(result);
  getch();
	return 0;
}
