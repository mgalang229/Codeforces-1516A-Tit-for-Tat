#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// decrease the value of every element from 'i' to 'n - 2' and add it to 'n - 1'-th element
		// repeat this process until 'k' is equal to 0
		for (int i = 0; i < n - 1; i++) {
			if (a[i] < k) {
				// if the current element is STRICTLY less than 'k', then subtract
				// this current element from 'k', and add it to the last element
				// afterwards, set it equal to 0
				k -= a[i];
				a[n - 1] += a[i];
				a[i] = 0;
			} else {
				// otherwise, subtract 'k' from the current element and add 'k' to the last element
				// don't forget to set 'k' to 0
				a[i] -= k;
				a[n - 1] += k;
				k = 0;
			}
		}
		// print the sequence
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
