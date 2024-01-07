#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n = 10;
vector <string> table(n);

int HashF1(string KeyStr) {
	return KeyStr.size() % 7;
}

void Insert(int key, string value) {
	if (table[key] == "") {
		table[key] = value;
	}
	else {
		key += 1;
		while (table[key] != "") {
			key++;
		}
		table[key] = value;
	}
}

int main() {
	for (int i = 0; i < 4; i++) {
		string key, value;
		cin >> key >> value;
		Insert(HashF1(key), value);
	}
	for (int i = 0; i < n; i++) {
		cout << table[i] << " ";
	}
	return 0;
}
