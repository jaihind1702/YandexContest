// ()
// (()), ()()
// ((())), (()()), (())(), ()(()), ()()()

#include <string>
#include <iostream>

using namespace std;

void genb(int n, int ob, int cb, string st) {
	if (st.length() == 2 * n) {
		cout << st << endl;
		return;
	}
	if (ob < n)
		genb(n, ob + 1, cb, st + '(');
	if (cb < ob)
		genb(n, ob, cb + 1, st + ')');
}

int main() {
	int n;
	int ob = 0, cb = 0;
	cin >> n;
	string st;
	genb(n, ob, cb, st);
}
