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

	int count = 0, c = 0;
	int a[26] = {};
	int b[26] = {};
	string c1, c2;
	cin >> c1 >> c2;

	for (auto c : c1) {
		a[c - 'a']++;
	}

	for (auto d : c2) {
		b[d - 'a']++;

	}

	for (int i = 0; i < 26; i++) {
		c = a[i] - b[i];
		if (c < 0) {
			count += (-c);
		}
		else {
			count += c;
		}
	}
	cout << count;

}