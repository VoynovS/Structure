#include <iostream> // ������� ����������

using namespace std; //����������� ������������ ����

struct coordinates {
	int x;
	int y;
};

void showCoordinates(coordinates &C) {
	C.x = 0;
	C.y = 0;
	//cout << &C << endl;
	//cout << "X = " << C.x << endl;
	//cout << "Y = " << C.y << endl;
}

/*coordinates inputObj() {
	coordinates newObj;
	cout << "Enter X: ";
	cin >> newObj.x;
	cout << "Enter Y: ";
	cin >> newObj.y;
	return newObj;
}*/

void fillObj(coordinates& c) { //����� ����������� 
	cout << "Enter x: ";
	cin >> c.x;
	cout << "Enter y: ";
	cin >> c.y;
}


int main() {

	setlocale(LC_ALL, "Russian");

	/*struct date
	{
		int day = 15; //�������� �� ���������
		int month = 11;
		int year;
		string note = "Hello world";
	}birthday, date1, date2 = {1,2,3,"kljh"}, date4; //����� ���������������� �� ���� ����� {}
	birthday.day = 6;
	birthday.month = 8;
	birthday.year = 1983;
	birthday.note = "Sergeys birthday";
	
	date1 = { 28, 5, 1958, "Mothers birthday" }; //������������ ���������� �����

	cout << birthday.day << "." << birthday.month << "." << birthday.year << " - " << birthday.note << endl;

	date1.day += 2;
	date1.month = 7;
	//cin >> date1.year;
	date1.year = 1600;
	date1.note += "!";

	cout << date1.day << "." << date1.month << "." << date1.year << " - " << date1.note << endl;

	cout << date2.day << "." << date2.month << "." << date2.year << " - " << date2.note << endl;

	//������ ������ ������������ �������
	date date3; //����� ���������������� �����
	date3 = { 2,3,4,"asddf" };

	cout << date3.day << "." << date3.month << "." << date3.year << " - " << date3.note << endl;

	//�������� �� ���������, ������������� ������ ���������.
	cout << date4.day << "." << date4.month << "." << date4.year << " - " << date4.note << endl;*/

	//������ ��������� ��� ���� ������ ���������
	/*struct date
	{
		int day;
		int month;
		int year;
		
	};

	struct person {
		string name;
		date birthday;
	}Tom;
	Tom.name = "Tom Smith";
	Tom.birthday = { 1,2,1980 };
	Tom.birthday.day = 20; //����� ���������� �� ������������.

	cout << Tom.name << endl;
	cout << Tom.birthday.day << "." << Tom.birthday.month << "." << Tom.birthday.year << endl;

	person Bob = { "Bob",{3,2,2000} };
	cout << Bob.name << endl;
	cout << Bob.birthday.day << "." << Bob.birthday.month << "." << Bob.birthday.year << endl;

	//�������� ���������� �� ������ ���������

	person* pB = &Bob;

	cout << pB->name << endl; //��������� ����������� ��� ���������. ������� ��� ����� ���������.

	pB->name = "Bob BBB"; //��������� ��������� ���� ������� ����� ���������.

	cout << Bob.name << endl;

	pB = &Tom; //������������� ��������� �� ������ ������.

	cout << pB->name << endl; //��������� ��� Tom Smith*/



	//������ ��������� ��� �������� �������

	coordinates pointA = { 5, 5 };
	coordinates pointB = { 6, 7 };
	coordinates pointC = { 8, 8 };
	//coordinates pointD = inputObj();
	coordinates pointE;

	fillObj(pointE);
	cout << " E.x = " << pointE.x << endl;
	cout << " E.y = " << pointE.y << endl;

	/*cout << "Point A: \n";
	showCoordinates(pointA);
	cout << "Point B: \n";
	showCoordinates(pointB);
	cout << "Point C: \n";
	showCoordinates(pointC);*/

	//cout << pointA.x << "  " << pointA.y << endl;
	//showCoordinates(pointA);
	//cout << &pointA << endl;
	
	//������ ��������� ��� ��������� ������ �������
	//cout << pointD.x << " " << pointD.y << endl;

	//cout << inputObj().x << endl;

	//������� sizeof() - ������� ����� �������� ���������� � ����������� ������.
	// int n;
	// cout << sizeof(n) ������� 4



	return 0;
}