#include <iostream>

using namespace std;

//Global Scope for testing purposes
int values [] = {5, -8, 9, 3, 0, 1, 6, 7, -8, 4};
int SIZE = sizeof(values)/sizeof(values[0]);

int sumEle(int a[]){
	int result = a[0];
	for(int i = 1; i < SIZE; i++){
	result += a[i];
	}
	return result;
}

int sumEvenIndex(int a[]){
	int result = 0;
	for(int i = 0; i < SIZE; i+= 2){
	result += a[i];
	}
	return result;
}

int countNeg(int a[]){
	int count = 0;
	for(int i = 0; i < SIZE; i++){
	if(a[i] < 0){count++;}
	}
	return count;
}

int countEvenEle(int a[]){
	int count = 0;
	for(int i = 0; i < SIZE; i++){
	if(a[i] % 2 == 0){count++;}
	}
	return count;
}

int countPosOdd(int a[]){
	int count = 0;
	for(int i = 0; i < SIZE; i++){
	if(a[i] % 2 == 1 && a[i] > 0){count++;}
	}
	return count;
}

int max(int a[]){
	int result = a[0];
	for(int i = 1; i < SIZE; i++){
	if(a[i] > result){result = a[i];}
	}
	return result;
}

int min(int a[]){
	int result = a[0];
	for(int i = 1; i < SIZE; i++){
	if(a[i] < result){result = a[i];}
	}
	return result;
}

int range(int a[]){
	return max(a) - min(a);
}

int indexMatchEle(int a[]){
	int count = 0;
	for(int i = 0; i < SIZE; i++){
	if(a[i] == i){count++;}
	} 
	return count;
}

int main(){
	cout << "Size of the Array: " << SIZE << endl;
	cout << "Sum Ele: " << sumEle(values) << endl;
	cout << "Sum Even Index: " << sumEvenIndex(values) << endl;
	cout << "Count Neg: " << countNeg(values) << endl;
	cout << "Count Even: " << countEvenEle(values) << endl;
	cout << "Count Positive Odd: " << countPosOdd(values) << endl;
	cout << "Max: " << max(values) << endl;
	cout << "Min: " << min(values) << endl;
	cout << "Range: " << range(values) << endl;
	cout << "Index == Ele: " << indexMatchEle(values) << endl;
	
}