#include <iostream> // test
#include<string.h>
#include <cstdlib> /* 亂數相關函數 */
#include <ctime>   /* 時間相關函數 */
using namespace std;
struct test {
	int a;
	double b;
	string c;
};
test* justtest();
int* justtest2(int*);
int* justtest3();

class nico {
public:
	nico() { cout << "create" << endl; };
	~nico() { cout << "delete" << endl; };
	void test() { a = 4224, b = 6996; cout << a << endl; cout << b << endl; }
private:
	int a;
	int b;
};
nico* justtest4();
void main() {
	test* nick3;
	test nick4 = {
	nick4.a = 42,
	nick4.b = 69,
	};
	int** matrix = new int* [3];
	int matrix1[3][4] = { {1,3,5,7},{42,69,96,87},{10,20,30,40} };
	*matrix = matrix1[0];
	*(matrix + 1) = matrix1[1];
	*(matrix + 2) = matrix1[2];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << *(*(matrix + i) + j)<<",";
		
		}
		cout << endl;
	}
	//int* n =new int[3];
	int* n=justtest3();
	nico* check1=justtest4();
	check1->test();
	cout << "Address:" << check1 << endl;
	//cout << *n << endl;
	//cout << *(n+1) << endl;
	//cout << *(n+2) << endl;
	nick3=justtest();
	cout << nick3 << endl;
	cout << nick3->a << endl;
	cout << nick3->b << endl;
	cout << nick3->c << endl;
	int* n1 = justtest2(n);
	cout << n1 << endl;
	for (int i = 0; i < 3; i++) {
		cout << *(n1 + i)<<endl;
	}
	int *n2= justtest2(n1);
	cout << n2 << endl;
	for (int i = 0; i < 3; i++) {
		cout << *(n2 + i) << endl;
	}
	delete nick3;
	cout <<nick3 << endl;
	cout << nick3->a << endl;
	cout << nick3->b << endl;
	cout << "Complete" << endl;
	system("PAUSE");
}

nico* justtest4() {
	nico check;
	check.test();
	cout << "Address:" << &check << endl;
	return &check;
}

test* justtest(){
	test* nick= new test;
	static test nick1;
	nick1.a = 42;
	nick1.b = 69;
	nick1.c = "96";
	nick->a = 10;
	nick->b = 100;
	nick->c = "Test";
	cout << nick << endl;
	cout << &nick1 << endl;
	return &nick1;
}
int* justtest2(int* previous) {
	srand(time(NULL));
	int min = 42;
	int max = 96;
	int a[3];
	cout << a << endl;
	for (int i = 0; i < 3; i++) {
		a[i] = rand() % (max - min + 1) + min;
		cout << *(previous + i) << endl;
		cout << a[i] << endl;
	}
	return a;
}

int* justtest3() {
	 static int a[3] = { 42,69,96 };
	//int* a1 = new int[3];
	int* a1 = a;
	//*(a1) = 42;
	//*(a1+ 1) = 69;
	//*(a1 + 2) = 96;
	return a;
}