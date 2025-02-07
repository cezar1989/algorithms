#include <stdio.h>

#define GREEN   "\033[32m"      /* Green */
#define RESET   "\033[0m"       /* Reset color */

int gcd(int u, int v){
	int t;
	while (u>0){
		if (u < v){
			t = u; u = v; v = t; 
		}
		u = u - v;
	}
	return v;
}

int main(){
	int x,y;
	while(scanf("%d %d", &x, &y) != EOF)
		if (x > 0 && y > 0)
		       printf( GREEN "Nr.1 : %d, Nr.2 :  %d, GCD : %d\n" RESET, x, y, gcd(x, y));	
	return 0;
}
