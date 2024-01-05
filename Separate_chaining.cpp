// simple implementation of separate chaining
#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int n = 10;
vector <vector <string>> table(n);

int Hash(string value, int size) {
	int IntKey = value.size() % size;
	return IntKey;
}

void Insert(string value, int key) {
	table[key].push_back(value);
}

void GetValue(int key) {
	cout << key << ":" << " ";
	for (int i = 0; i < table[key].size(); i++) {
		if (i == table[key].size() - 1) {
			cout << table[key][i];
		}
		else {
			cout << table[key][i] << "--->";
		}
	}
	cout << "\n";
}

int main() {

	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		Insert(value, Hash(value, n));
		GetValue(Hash(value, n));
	}

	return 0;
}
