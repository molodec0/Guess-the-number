#include <iostream>
#include <vector>
#include <random>

using namespace std;

//Код функций рандома.
int random(int min, int max) {
	random_device rd;

	mt19937 gen(rd());

	uniform_int_distribution <int> distrib(min, max);

	return distrib(gen);
}

//Код главной функций.
int main() {
	system("chcp 1251 > nul");

	int round = 3, choice, reply;
	string res;

	choice = random(1, 10);

	cout << "Привет, это игра угадай число!" << endl;
	cout << "Если угадаешь, дам печеньку!" << endl;
	cout << "Ну что, поехали?" << endl;

	cin >> res;

	if (res == "да") {
		cout << "Ну тогда поехали!";
	}

	else {
		cout << "Ошибка! Некорректный ввод в консоль!";
		return 1;
	}

	for (; round > 0; round--) {

		cout << "Ну давай, ебашь!" << endl;

		cin >> reply;

		if (reply == choice) {
			cout << "Поздравляю! Ты выиграл печеньку!" << endl;
			return 0;
		}
		else {
			cout << "Оуу, к сожалению ты не угадал. Давай ещё раз!" << endl;
		}
	}

	cout << "Загаданное число: " << choice << endl;

	system("pause > nul");

	return 0;
}