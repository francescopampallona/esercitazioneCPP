
#include <iostream>
#include <string>
#include<fstream>
#include <vector>
using namespace std;

void menu(bool* execution) {
	char choice;
	cout << "Inserire q per uscire o qualsiasi altro tasto per rieseguire il programma!" << endl;
	cin >> choice;
	choice == 'q' ? (*execution) = false : (*execution) = true;

}

int main()
{
	bool execution = true;
	while (execution) {
		vector<string> words;
		ifstream in("provaParole.txt");
		string word;
		while (in >> word) {
			words.push_back(word);
		}
		for (int i = 0; i < words.size(); i++) {
			cout << words[i] << endl;
		}

		menu(&execution);
	}
}



