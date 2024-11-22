#include <iostream>
#include <string>
using namespace std;

	int countoccurrences(const string & str, char ch){
		int count = 0;
		for (char c : str) {
			if (c == ch) {
				count++;
			
		}
	}
	return count;
}
int main(){
	setlocale(LC_ALL, "uk_UA");
	string inputstring;
	char character;
	cout << "Введіть рядок: ";
	getline(cin, inputstring);
	cout << "Введіть символ для пошуку: ";
	cin >> character;
	int occurrences = countoccurrences (inputstring, character);
	cout << "Кількість входжень символу: " <<  character << "в рядок: " <<  occurrences << endl;

	return 0;

}

