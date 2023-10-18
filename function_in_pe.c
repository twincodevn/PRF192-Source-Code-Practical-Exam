

#include <stdio.h>
int isPrime(int num){
	if(num <= 1){
return 0;
}

for(int i = 2; i * i <= num; i++)
{
	if(num % i == 0){
	return 0;
}
}
	return 1;
}

void displayTrianglePyramidOfPrimeNumber(int n){
	int num = 2;
	for(int i = 1; i <=n ;i++){
		
		for(int j = 1; j <= n;j++){
			if(j <= i){
				printf("%d ", num);
				num = getNextPrime(num);
			}else{
				printf(" "); 
			}
		}
	printf("\n");
	}
}

int getNextPrime(int prime){
	int nextPrime = prime + 1;
	while(!isPrime(nextPrime)){
		nextPrime++;
	}
	return nextPrime;
}

int main()
{ 
    displayTrianglePyramidOfPrimeNumber(6);
    return 0;
}
