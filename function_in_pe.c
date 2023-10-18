

#include <stdio.h>
int compareAscen(const void* a,const void* b){
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	return num1 - num2; // compare by ascending ( tang dan )
}
int compareDesen(const void* a,const void* b){
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	return num2 - num1; // compare by ascending ( tang dan )
}
// cach su dung ham qsort
int arr[n];
qsort(arr,n,sizeof(int),compareAscen);
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

int sumOfNumbersInString(const char *str){
    int sum = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            sum += str[i] - '0';
        }
        i++;
    }
    return sum;
}
int sumOfEvenNumbersInString(const char *str){
    int sum = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            int num= str[i] - '0';
            if(num % 2 == 0){
                sum += str[i] - '0';
            }
        }
        i++;
    }
    return sum;
}
int getMaxMainDiagonalMatrix(int matrix[][100], int col, int row){
        int max = matrix[0][0];
    	for(int i = 1; i < col;i++){
		for(int j = 0; j < row;j++){
			if(max < matrix[i][j] && i == j){
			    max = matrix[i][j];
			}
		}
	}
	return max;
}
void inputMatrix(int matrix[][100], int col, int row){
	for(int i = 0; i < col;i++){
		for(int j = 0; j < row;j++){
			scanf("%d", &matrix[i][j]);
		}
	}
}

void printUniqueElements(int arr[], int size){
	// sap xep giam dan 
	qsort(arr,size,sizeof(int),compareDesen);
	// 5 8 9 8 2 9 9 
	// 9 9 9 8 8 5 2 
	printf("%d ", arr[0]); 
	for(int i = 1; i < size;i++){
		if(arr[i] != arr[i-1]){
			printf("%d ", arr[i]);
		}
	}
}
#include<ctype.h> 
// chuyển đổi ký tự thành chữ hoa trước khi so sánh 
void searchName(char names[][100],int n, char searchChar){
	searchChar = toupper(searchChar);
	// chuyển đổi thành chữ hoa 
	for(int i = 0; i < n;i++){
		
		if(toupper(names[i][0]) == searchChar){
			printf("%s\n", names[i]);
		}
	}
}
// main mau 
int main(){
char names[100][100];
    int n;
    char searchChar;
    scanf("%d", &n);
    for(int i = 0; i < n;i++){
        scanf("%s", names[i]);
    }
    scanf("%c",&searchChar);
    searchName(names,4,searchChar);
}
 

int main()
{ 
    displayTrianglePyramidOfPrimeNumber(6);
    return 0;
}
