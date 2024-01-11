#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n = 10;
vector <vector <string>> table(n);

int HashF1(string KeyStr) {
	return KeyStr.size() % 7;
}

void Insert(int key, string KeyStr, string value) {
	if (table[key][0] == "") {
		table[key][1] = value;
		table[key][0] = KeyStr;
	}
	else {
		key += 1;
		while (table[key][0] != "") {
			key++;
		}
		table[key][1] = value;
		table[key][0] = KeyStr;
	}
}

int main() {
	for (int i = 0; i < 4; i++) {
		string key, value;
		cin >> key >> value;
		Insert(HashF1(key), key, value);
	}
	for (int i = 0; i < n; i++) {
		cout << table[i][0] << " " << table[i][1];
	}
	return 0;
}
