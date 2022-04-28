#include <iostream>

using namespace std;

void countOdd(int n1, int n2){
	int odd = 0;
	for(int i = n1; i <= n2; i++){
		if(i%2 != 0){
			odd++;
		}
	}
	cout << "Hay " << odd << " numeros impares, y son: ";
	for(int i = n1; i <= n2; i++){
		if(i%2 != 0){
			cout << i << ", ";
		}
	}
	cout << endl;
}

void countEven(int n1, int n2){
	int even = 0;
	for(int i = n1; i <= n2; i++){
		if(i%2 == 0){
			even++;
		}
	}
	cout << "Hay " << even << " numero(s) par(es), y son: ";
	for(int i = n1; i <= n2; i++){
		if(i%2 == 0){
			cout << i << ", ";
		}
	}
	cout << endl;
}

void printInfo(int n1, int n2){
	int sum = 0, count = 0;
	
	for(int i = n1; i <= n2; i++){
		sum = sum + i;
		count++;
	}
	
	cout << "Hay " << count << " numeros entre " << n1 << " y " << n2 << ", la suma total es: " << sum << endl;
	countOdd(n1, n2);
	countEven(n1, n2);
}

int main(){
	int lNumber, sNumber, aux;
	
	cout << "Ingrese el primer numero: ";
	cin >> sNumber;
	cout << "Ingrese el segundo numero: ";
	cin >> lNumber;
	if(sNumber > lNumber){
		aux = sNumber;
		sNumber = lNumber;
		lNumber = aux;
	}
	printInfo(sNumber, lNumber);
	
	return 0;
}
