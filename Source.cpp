#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;


bool Match(string text) {

	return text.size() >= 3;
}

// using pointer to function inorder to build a counter for a vector
int CountString(vector<string>& texts, bool (*Match)(string text)) {

	int tally = 0;
	vector<string>::iterator it = texts.begin();
	for (it; it != texts.end(); it++) {

		if (Match(*it)) {
			tally++;
		}
	}
	return tally;
}

int main() {

	vector<string> Texts;
	Texts.push_back("Yek");
	Texts.push_back("Do");
	Texts.push_back("Se");
	Texts.push_back("Char");
	Texts.push_back("Panj");
	Texts.push_back("Shish");

	cout << " The built-in method " << count_if(Texts.begin(), Texts.end(), Match) << endl;

	cout << " Mine method " << CountString(Texts, Match) << endl;
	return 0;
}