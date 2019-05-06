#include <iostream>
using namespace std;

int main() {
	//auto a = 10;
	//cout << typeid(a).name() << endl;
	//auto b = 1.2;
	//cout << typeid(b).name() << endl;
	//auto c = (int *)20;
	//cout << typeid(c).name() << endl;
	////定义指针变量
	//auto p = &a;
	//cout << typeid(p).name() << endl;
	//auto* ptr = &a;
	//cout << typeid(ptr).name() << endl;
	//定义引用
	//auto r = a;
	//cout << typeid(r).name() << endl;
	//auto& ra = a;
	//cout << typeid(ra).name() << endl;
	//
	//cout << "a的地址：" << &a << endl;
	//cout << "r的地址：" << &r << endl;
	//cout << "ra的地址：" << &ra << endl;

	//int* p = nullptr;cout << p << endl;
	/*int*pp = NULL;
	int a = NULL;
	
	cout << pp << endl;
	cout << a << endl;*/

	//cout << sizeof(nullptr) << endl;
	
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
	//	cout << arr[i] << "  ";
	//}
	//cout << endl;

	//for (int i : arr) {
	//	cout << i << "  ";
	//}
	//cout << endl;


	//struct A {
	//	void print() {
	//		cout << "struct hehe!!!" << endl;
	//	}
	//	int a;
	//};

	//A aa;
	//aa.a = 10;
	//aa.print();

	class B {
		void print() {
			cout << "class hehe!!!" << endl;
		}
		int a;
	};

	//B aaa;
	//aaa.print();
	//aaa.a = 10;

	system("pause");
	return 0;
}