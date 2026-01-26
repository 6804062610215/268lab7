#include<stdio.h> //printf() , scanf()
#include<math.h>  // ex. Math functions
#include<ctype.h> // ex. Character manipulation functions


int randomInt(int min, int max);

int main(){
	int arr[100], i, n;
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		arr[i] = randomInt(1, 100); //check here!!
	}
	
	for(i = 0;i < n;i++){
		printf("%d\n", arr[i]);
	}
	
}

int randomInt(int min, int max){
	return((rand() % (max - min + 1)) + min);
}
