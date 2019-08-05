#include <bits/stdc++.h>
 using namespace std;

int mul_inv(int a, int b)
{
	int b0 = b, t, q;
	int x0 = 0, x1 = 1;
	if (b == 1) return 1;

	int counter= 0;
	while (a > 1) {
		q = a / b;
		t = b;
        b = a % b;
        a = t;
		t = x0, x0 = x1 - q * x0, x1 = t;
		counter++;
	}
	if (x1 < 0) x1 += b0;

	cout<<counter<<endl;
	return x1;
}

int main(void) {
	cout<<mul_inv(4,7)<<endl;
	return 0;
}
