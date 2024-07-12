
#include <iostream>
#include <string>
#include <sstream>
#include<fstream>
#include <vector>
#include "Pianeta.h"
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

		vector<Pianeta> pianeti;
		ifstream file("pianeti.txt");

		if (file.is_open()) {
			string line;
			while (getline(file, line)) {
				stringstream ss (line);
				string nome, massaStr, diametroStr;
				getline(ss, nome, ',');
				getline(ss, massaStr, ',');
				getline(ss, diametroStr, ',');

				double massa = stod(massaStr);
				int diametro = stoi(diametroStr);

				pianeti.push_back(Pianeta(nome, massa, diametro));
			}
			file.close();
		}
		else {
			cerr << "Impossibile aprire il file." << endl;
			return 1;
		}

		for (Pianeta pianeta : pianeti) {
			cout << pianeta.toString() << endl;
		}
		

		menu(&execution);
	}
}



