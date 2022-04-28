#include <iostream>

using namespace std;

int countVowels(char lowerCaseVowel, char upperCaseVowel, string txt){
	int counter = 0;
	
	for(int i = 0; i <= txt.length(); i++){
		if(txt[i] == lowerCaseVowel || txt[i] == upperCaseVowel){
			counter++;
		}
	}
	
	return counter;
}

void position(char lowerCaseVowel, char upperCaseVowel, string txt){
	for(int i = 0; i <= txt.length(); i++){
		if(txt[i] == lowerCaseVowel || txt[i] == upperCaseVowel){
			cout << i << ", ";
		}
	}
}

void printAll(string txt){
	char vowels[5][2] = {{'a', 'A'}, {'e', 'E'}, {'i', 'I'}, {'o', 'O'}, {'u', 'U'}};
	int count = 0;
	
	for(int i = 0; i < 5; i++){
		count = countVowels(vowels[i][0], vowels[i][1], txt);
		if(count != 0){
			cout << "La letra " << vowels[i][1] << " esta: " << count << " vez/veces. Posicion(es): ";
			position(vowels[i][0], vowels[i][1], txt);
			cout << endl;
		}		
	}

}

int main(){
	string txt = "";
	cout << "Ingrese su texto: ";
	getline(cin, txt);
	cout << "El texto ingresado es: " << txt << endl;
	
	printAll(txt);
	
	return 0;
}
