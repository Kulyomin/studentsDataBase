#include <iostream>
#include <vector>
#include <string>
#include "DataBase.h"

class Test {
	private:
		// ���� #1: ������ �������� �������� ��� ������ ���� ������
		void Test1() {
			std::vector<Student> database;
			std::cout << "������ ����� 1: ������ �������� �������� ��� ������ ���� ������...\n";
			double averageAge1 = averageAgeStudents(database);
			if (averageAge1 == 0.0) {
				std::cout << "���� 1 ������� �������. ���������: " << averageAge1 << "\n\n";
			}
			else {
				std::cout << "���� 1 �� �������. ���� ������ ����� ����������: " << averageAge1 << "\n\n";
			}
		};

		// ���� #2: ������ �������� �������� ��� ���������� ���������
		void Test2() {
			std::vector<Student> database;
			std::cout << "������ ����� 2: ������ �������� �������� ��� ���������� ���������...\n";
			Student student1 = { "������", 20, "����������", 4.5 };
			Student student2 = { "������", 22, "������", 3.8 };
			Student student3 = { "��������", 21, "��������", 4.2 };
			database.push_back(student1);
			database.push_back(student2);
			database.push_back(student3);
			double averageAge2 = averageAgeStudents(database);
			double expectedAverage2 = (20.0 + 22.0 + 21.0) / 3;
			if (averageAge2 == expectedAverage2) {
				std::cout << "���� 2 ������� �������. ���������: " << averageAge2 << "\n\n";
			}
			else {
				std::cout << "���� 2 �� �������. ��������� �������� " << expectedAverage2 << ", �� ��������: " << averageAge2 << "\n\n";
			}

		};

		// ���� #3: ������������ ������ ������� ���������� ��������
		void Test3() {
			std::vector<Student> database;
			std::cout << "������ ����� 3: ���������� ��������...\n";
			size_t initialSize = database.size();
			addStudent(database);
			if (database.size() == initialSize + 1) {
				std::cout << "���� 3 ������� �������. ������ ���� ������ ��������.\n\n";
			}
			else {
				std::cout << "���� 3 �� �������. ��������� ���������� ������� ���� ������.\n\n";
			}

		};

		// ���� #4: ������� ������� ���� ������
		void Test4() {
			std::vector<Student> database;
			std::cout << "������ ����� 4: ����� ������ ���������...\n";
			// ����� ���� �������������� ����� ���������� �������� ������, ��� ��� ��� assert
			displayStudents(database);
		};

		// ���� #5: ������� �������� �������� � ������������� �������������
		void Test5() {
			std::vector<Student> database;
			size_t initialSize = database.size();
			std::cout << "������ ����� 6: ������� ���������� �������� � ������������� ���������...\n";
			Student student4 = { "�������", 15, "�������", -3.0 };
			database.push_back(student4);
			if (database.size() == initialSize) {
				std::cout << "���� 6 ������� �������. ������� � ������������� ������������� �� ��������.\n\n";
			}
			else {
				std::cout << "���� 6 �� �������. ���������, ��� ������� � ������������� ������������� �� ����� ��������.\n\n";
			}
		};

		// ���� 6: ������� ���������� �������� � ������������� ���������
		void Test6() {
			std::vector<Student> database;
			size_t initialSize = database.size();
			std::cout << "������ ����� 6: ������� ���������� �������� � ������������� ���������...\n";
			Student student4 = { "�������", -1, "�������", 3.0 };
			database.push_back(student4);
			if (database.size() == initialSize) {
				std::cout << "���� 6 ������� �������. ������� � ������������� ��������� �� ��������.\n\n";
			}
			else {
				std::cout << "���� 6 �� �������. ���������, ��� ������� � ������������� ��������� �� ����� ��������.\n\n";
			}
		}
	public:
		// �������� ������� ��� ������� ���� ��������� ������ ���������
		void runAllTest() { Test1(); Test2(); Test3(); Test4(); Test5(); Test6(); };
};

int main() {
	Test test;
	test.runAllTest();
	return 0;
}