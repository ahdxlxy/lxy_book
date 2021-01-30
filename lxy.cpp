#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int t = 1;
	while (n > t * (t + 1) / 2) {
		t++;
	}
	int sum = t * (t + 1) / 2 - n;
	if (t % 2 == 0) {
		cout << t - sum << "/" << sum + 1;
	}
	else{
			cout << sum+1 << "/" << t - sum;
		}
	return 0;
}