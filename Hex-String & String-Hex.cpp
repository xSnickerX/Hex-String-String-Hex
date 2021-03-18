#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	
	int cMode;
	string stringa;
	
	stringstream sas;
	string fareshi;
	
	cout << "premi 1 per STRING-to-HEX, 2 per HEX-to-STRING  ";
	cin >> cMode;
	cout << endl << endl;
	cout << "INPUT: ";
	cin >> stringa;
	cout << endl << endl;
	
	if(cMode == 1){
		sas.str("");
		for (unsigned int i = 0; i < stringa.length(); i++) {
			sas << hex << (int)stringa[i];
		}

		fareshi = sas.str();
	}
	else if(cMode == 2){
		sas.str("");
		for(unsigned int i = 0; i < stringa.length(); i+=2){
			sas << (char)strtoul(stringa.substr(i, 2).c_str(),NULL,16);
		}	
		
		fareshi = sas.str();
	}
	
	cout << "OUTPUT: " << fareshi << endl;
	return 0;
}

