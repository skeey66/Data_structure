#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A, B, C, D;
	int a[10] = {};
	cin >> A >> B >> C;
	D = A * B*C;

	while (D > 0) {
		a[D % 10]++;
		D /= 10;

	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << "\n";
	}

}