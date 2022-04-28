#include <iostream>

using namespace std;

void readNumbers(int &num1, int &num2){
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	cout << "Los numeros ingresados son: " << num1 << " y "<< num2 << endl;
}

int countDivisors(int num){
	int quantity = 0;
	for(int i = 1; i <= num; i++){
		if(num%i == 0){
			quantity++;
		}	
	}
	return quantity;
}

void printDivisors(int num){
	for(int i = 1; i <= num; i++){
		if(num%i == 0){
			cout << i << ", ";
		}	
	}
	cout << endl;
}

int main(){
	int quantityDivisorsNumber1 = 0, quantityDivisorsNumber2 = 0;
	int num1 = 0, num2 = 0, maxDivisors = 0;
	
	readNumbers(num1, num2);
	quantityDivisorsNumber1 = countDivisors(num1);
	quantityDivisorsNumber2 = countDivisors(num2);
	cout << "El numero " << num1 << " tiene " << quantityDivisorsNumber1 << " divisores y son: ";
	printDivisors(num1);
	cout << "El numero " << num2 << " tiene " << quantityDivisorsNumber2 << " divisores y son: ";
	printDivisors(num2);
	maxDivisors = num2;
	if(quantityDivisorsNumber1 > quantityDivisorsNumber2){
		maxDivisors = num1;
	}
	cout << "El numero con mas divisores es: " << maxDivisors << endl;
	return 0;
}
