#include <iostream>
#include <string>
#include <vector>



vector <string> readInfoToVector() {
	vector <string> vec;
	cout << "Please Enter Client Date:" << endl;
	string s = "";


	cout << "Enter Account Number ?";
	cin >> s;
	cout << endl;
	vec.push_back(s);

	cout << "Enter PinCode ?";
	cin >> s;
	cout << endl;
	vec.push_back(s);

	cout << "Enter Name ?";
	cin.ignore(1, '\n');
	getline(cin, s);
	cout << endl;
	vec.push_back(s);

	cout << "Enter Phone ?";
	cin >> s;
	cout << endl;
	vec.push_back(s);

	cout << "Enter AccountBalance ?";
	cin >> s;
	cout << endl;
	vec.push_back(s);

	return vec;
}

void printInfoInLine(vector<string> v) {
	cout << "Client Record for Saving is:" << endl;
	for (int i = 0; i < v.size() - 1; i++) {
		cout << v[i];
		if (i < v.size() - 2)
			cout << "#//#";
	}
}

int main() {

	vector<string>vec = readInfoToVector();
	printInfoInLine(vec);



}



