#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <iterator>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num;
	bool check = true;
	string word, word2;



	cin >> num;
	for (int i = 0; i < num; i++) {
		int a[26] = {};
		cin >> word >> word2;

		for (auto c : word) {
			a[c - 'a']++;

		}
		for (auto d : word2) {
			a[d - 'a']--;
		}
		for (int i : a) {
			if (i != 0) {
				check = false;
			}
		}
		if (check) {
			cout << "Possible" << "\n";
		}
		else {
			cout << "Impossible" << "\n";
		}

		check = true;

	}
}