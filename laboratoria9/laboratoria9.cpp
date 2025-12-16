#include <iostream>
using namespace std;
int pole_prostokata(struct prostokat);
void przepisanie(struct trojkat* tmp1, struct trojkat* tmp2);
struct wspolrzedne {
	int x = 0;
	int y = 0;
};

struct prostokat {
	int a = 0;
	int b = 0;
};
struct trojkat {
	int a = 0;
	int b = 0;
	int c = 0;
};

int main(){
	
	/*wspolrzedne punkt;									//zad 1.
	punkt.x = 15;
	punkt.y = 20;
	cout << "punkt x = " << punkt.x << "	punkt y = " << punkt.y << endl;*/

	/*struct prostokat prostok¹t1;
	cout << "podaj dlugosc boku a " << endl;
	cin >> prostok¹t1.a;
	cout << "podaj dlugosc boku b " << endl;
	cin >> prostok¹t1.b;
	cout << "pole tego prostokata = " << pole_prostokata(prostok¹t1) << endl;*/

	struct trojkat trojkat1;
	cout << "podaj dlugosc boku a 1 trojkata " << endl;
	cin >> trojkat1.a;
	cout << "podaj dlugosc boku b 1 trojkata " << endl;
	cin >> trojkat1.b;
	cout << "podaj dlugosc boku c 1 trojkata " << endl;
	cin >> trojkat1.c;
	struct trojkat trojkat2;
	cout << "podaj dlugosc boku a 2 trojkata " << endl;
	cin >> trojkat2.a;
	cout << "podaj dlugosc boku b 2 trojkata " << endl;
	cin >> trojkat2.b;
	cout << "podaj dlugosc boku c 2 trojkata " << endl;
	cin >> trojkat2.c;
	przepisanie(&trojkat1 , &trojkat2);
	cout << " nowe boki trojkata 2 " << endl << trojkat2.a << endl << trojkat2.b << endl << trojkat2.c << endl;

}

int pole_prostokata( prostokat tmp) {
	return tmp.a * tmp.b;
}

void przepisanie( trojkat* tmp1, trojkat* tmp2) {
	tmp2->a = tmp1->a;
	tmp2->b = tmp1->b;
	tmp2->c = tmp1->c;
}