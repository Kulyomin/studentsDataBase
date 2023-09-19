#pragma once
struct Student {
    std::string name;
    int age;
    std::string major;
    double gpa;
};

// ������� ��� ���������� �������� � ���� ������
void addStudent(std::vector<Student>& database) {
    Student student;

    // ����������� ��� ��������
    std::cout << "������� ��� ��������: ";
    std::cin.ignore(); // ������� ����� �����
    std::getline(std::cin, student.name);

    // ����������� ������� �������� � ���������� ������
    while (true) {
        std::cout << "������� ������� ��������: ";
        if (std::cin >> student.age && student.age > 0) {
            break; // ���� ���������, ������� �� �����
        }
        else {
            std::cout << "������: ������� ���������� ������� (����� ����� > 0).\n";
            std::cin.clear(); // ���������� ���� ������
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ������� ����� �����
        }
    }

    // ����������� ������������� ��������
    std::cout << "������� ������������� ��������: ";
    std::cin.ignore(); // ������� ����� �����
    std::getline(std::cin, student.major);

    // ����������� ������� ���� �������� � ���������� ������
    while (true) {
        std::cout << "������� ������� ���� ��������: ";
        if (std::cin >> student.gpa && student.gpa > 0) {
            break; // ���� ���������, ������� �� �����
        }
        else {
            std::cout << "������: ������� ���������� ������� ���� (�����).\n";
            std::cin.clear(); // ���������� ���� ������
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ������� ����� �����
        }
    }

    database.push_back(student);
    std::cout << "������� �������� � ���� ������.\n";
}

// ������� ��� ������ ���� ��������� �� ���� ������
void displayStudents(const std::vector<Student>& database) {
    std::cout << "������ ���������:\n";
    for (const Student& student : database) {
        std::cout << "���: " << student.name << "\n";
        std::cout << "�������: " << student.age << "\n";
        std::cout << "�������������: " << student.major << "\n";
        std::cout << "������� ����: " << student.gpa << "\n\n";
    }
}

// ������� ��� ������� �������� �������� ���������
double averageAgeStudents(const std::vector<Student>& database) {
    double averageAge = 0.0;
    if (!database.empty()) {
        for (const Student& student : database) {
            averageAge += student.age;
        }
        averageAge /= database.size();
    }
    return averageAge;
}