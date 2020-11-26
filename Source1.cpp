#include<iostream>
#include"Header.h"
using namespace std;
int user, pass;
int check = 0;
int MENU() {
	system("cls");
	cout << "0.Thoat" << endl;
	cout << "1. Dang nhap" << endl;
	cout << "2.In danh sach SV" << endl;
	return 3;
};
int MENU2() {
		cout << "18120551	TRAN THANH TAN" << endl;
		cout << "19120481	DAM HONG DUC" << endl;
		cout << "19120583	LE THAI BINH MINH" << endl;
		cout << "19230009	Le Huy Hoang" << endl;
		cout << "19230010	Nguyen Minh Huy" << endl;
		cout << "19230052	NGUYEN VINH HOANG" << endl;
		cout << "20120343	Tran Minh Nhut" << endl;
		cout << "20120344	Vuong Tan Phat" << endl;
		cout << "20120345	Pham Hoang Phi" << endl;
		cout << "20120346	Ho Tran Thanh Phong" << endl;
		cout << "20120347	Luong Vinh Phu" << endl;
		cout << "20120348	Pham Tran Gia Phu" << endl;
		cout << "20120349	Ngo Huu Phuc" << endl;
		cout << "20120350	Nguyen Thi Hong Phuc" << endl;
		cout << "20120351	Pham Huu Phuc" << endl;
		cout << "20120352	Vu Hoang Phuc" << endl;
		cout << "20120353	Huynh Huu Phuoc" << endl;
		cout << "20120354	Dang Huynh Cuu Quan" << endl;
		cout << "20120355	Dinh Minh Quan" << endl;
		cout << "20120356	Le Minh Quan" << endl;
		cout << "20120357	Nguyen Duc Minh Quan" << endl;
	return 2;
}
int Login() {
	system("cls");
	cout << "Username: ";
	cin >> user;
	cout << "Password: ";
	cin >> pass;
	if ((user == 1) && (pass == 1)) check=1;
	return check;
};
int _RLogin(int c) {
	if (c == 1) {
		cout << "DANG NHAP THANH CONG ! ! !" << endl;
		system("pause");
		return 5;
	}
	if ((user == 0)||(pass==0))
	{
			cout << " Dang nhap sai" << endl;
			cout << "Nhap lai";
			system("pause");
	}
	
};
int _COMMAND(int cmt) {
	bool check;
	int n;
	do {
		cout << "CHon xu li thu : ";
		cin >> n;
		check = cin.fail();
		if (check == true)
		{
			cin.clear();
			cin.ignore();
		}
	} while (check == true || n > cmt || n < 0);
	return n;
};
int _RMenu(int c) {
	int k;
	if (c == 1) {
		do {
			k = _RLogin(Login());
		} while (k != 5);
	}
	else if (c == 2) {
		if (check == 1) {
			MENU2(); system("pause");
		}
		else if (check == 0) {
			cout << "BAN CHUA DANG NHAP" << endl;
			cout << "DANG NHAP DE TIEP TUC :";
			system("pause");
			k = _RLogin(Login());
		}
	}
	else if (c==0){
		return 4;
	}
}
