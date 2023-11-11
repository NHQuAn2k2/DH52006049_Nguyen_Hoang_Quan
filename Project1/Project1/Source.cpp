#include "iostream";
using namespace std;
void kiemTraSoChinhPhuong() {}
void kiemTraSoHoanThien(int s) {
	int so1 = s - 1;
	int so2 = s - 2;
	if ((so1 + so2) == s) {
		cout<<s<<" la so hoan thien";
	}
	else {
		cout<<s<<" khong phai so hoan thien";
	};
}
int main() {
	int n;
	cout << "nhap so nguyen: ";
	cin >> n;
	kiemTraSoHoanThien(n);
}