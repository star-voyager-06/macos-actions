#include <stdio.h>
#include <string.h>

int main(){
	for (int i = 0; i < 150; i++){
		printf("%d: %s", i, strerror(i));
	}
	return 0;
}
