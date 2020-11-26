#include<iostream>
#include"Header.h"
using namespace std;
int main() {
	int check = 0;
	do {
		check=_RMenu(_COMMAND(MENU()));
	} while (check != 4);
	return 1;
}