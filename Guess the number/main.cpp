#include <iostream>
#include <vector>
#include <random>

using namespace std;

//��� ������� �������.
int random(int min, int max) {
	random_device rd;

	mt19937 gen(rd());

	uniform_int_distribution <int> distrib(min, max);

	return distrib(gen);
}

//��� ������� �������.
int main() {
	system("chcp 1251 > nul");

	int round = 3, choice, reply;
	string res;

	choice = random(1, 10);

	cout << "������, ��� ���� ������ �����!" << endl;
	cout << "���� ��������, ��� ��������!" << endl;
	cout << "�� ���, �������?" << endl;

	cin >> res;

	if (res == "��") {
		cout << "�� ����� �������!";
	}

	else {
		cout << "������! ������������ ���� � �������!";
		return 1;
	}

	for (; round > 0; round--) {

		cout << "�� �����, �����!" << endl;

		cin >> reply;

		if (reply == choice) {
			cout << "����������! �� ������� ��������!" << endl;
			return 0;
		}
		else {
			cout << "���, � ��������� �� �� ������. ����� ��� ���!" << endl;
		}
	}

	cout << "���������� �����: " << choice << endl;

	system("pause > nul");

	return 0;
}