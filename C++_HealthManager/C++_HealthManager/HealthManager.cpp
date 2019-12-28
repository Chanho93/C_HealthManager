#include <string>
#include <iostream>
#include <fstream>
using namespace std;


class Biman {

private:
	string name;
	int age;

public:
	string sex;
	double height, weight;
	double height2;
	double bmi;
	double grade;
	string state;
	int cal;
	int i = 1;
	string food;
	string exercise;
	string answer;
	string answer1;
	string answer2;

	void introduction(void)
	{
		cout << "-----------------welcome----------------------" << endl;
		cout << "�� ���� ���α׷��� ���Ű� ȯ���մϴ�." << endl;
		cout << "--------------------------------------------" << endl;
		cout << "                                                      " << endl;
		cout << "���� ���α׷������� �Ĵܰ���, ��Ӹ��ƴ϶� ������ ���� �պ����� ���� �����ص帮�� �ֽ��ϴ�." << endl;

		cout << "                                                      " << endl;
		cout << "--------------------------------------------" << endl;

		cout << "�ش�Ǵ� ������ �����ϼ���.(�ߺ�����)" << endl;
		cout << "                                                      " << endl;


		cout << "�索 " << endl;
		cout << "������" << endl;
		cout << "������" << endl;
		cout << "��������" << endl;
		cout << "����" << endl;

		cout << "                                                      " << endl;

		cin >> answer1;
		cin >> answer2;

		try {
			if (answer1 == "����" && answer2 == "����") {
				throw answer1;
			}
			else {

				cout << "                                                      " << endl;

				cout << "--------------------------------------------" << endl;


				cout << "���� " << answer1 << "��  " << answer2 << "���� �����ص帮�ڽ��ϴ�." << endl;
			}
		}
		catch (string e)
		{
			cout << "                                       " << endl;
			cout << "������ ��:  " << answer1 << endl;
			cout << "�պ����� ������ �����ε� ������ �ʵ��� ���� ���͵帮�ڽ��ϴ�." << endl;
		}


		cout << "--------------------------------------------" << endl;



	}


	void enter(void)
	{
		cout << "����� �̸��� �Է��ϼ���: " << endl;
		cin >> name;

		cout << "����� ������ �Է��ϼ���(����,����): " << endl;
		cin >> sex;

		cout << "���̸� �Է��ϼ���: " << endl;
		cin >> age;

		cout << "Ű�� �Է��ϼ���: " << endl;
		cin >> height;

		cout << "�����Ը� �Է��ϼ���: " << endl;
		cin >> weight;

		cout << "--------------------------------------------" << endl;

		cout << "                                                      " << endl;


	}

	void figure(void)
	{
		height2 = height / 100;
		bmi = weight / (height2 * height2);

		cout << "����� BMI������ " << bmi << " �Դϴ�. " << endl;
		cout << "                                                      " << endl;


		if (weight <= (height - 100) * 0.9 + 5 && weight >= (height - 100) * 0.9 - 5) {
			grade = 90;
			cout << "����� ���´� " << grade << " ���Դϴ�.  100���� ���� �޷������??" << endl;
			cout << "--------------------------------------------" << endl;
			if (sex == "����")
				cal = 2500;
			else if (sex == "����")
				cal = 2000;
		}
		else if (weight > (height - 100) * 0.9 + 5 && weight <= (height - 100) * 0.9 + 10) {
			grade = 70;
			state = "��ü��";
			cout << "����� ���´� " << state << " �̰� ������ " << grade << "���Դϴ�. 100���� ��ǥ��!" << endl;
			cout << "--------------------------------------------" << endl;

			if (sex == "����")
				cal = 2200;
			else if (sex == "����")
				cal = 1800;

		}
		else if (weight < (height - 100) * 0.9 - 5 && weight >= (height - 100) * 0.9 - 10) {
			grade = 70;
			state = "��ü��";
			cout << "����� ���´� " << state << " �̰� ������" << grade << "���Դϴ�. 100���� ��ǥ��!" << endl;
			cout << "--------------------------------------------" << endl;
			if (sex == "����")
				cal = 2700;
			else if (sex == "����")
				cal = 2200;

		}

		else if (weight > (height - 100) * 0.9 + 10 && weight <= (height - 100) * 0.9 + 15) {
			grade = 50;
			state = "��";
			cout << "����� ���´� " << state << " �̰� ������ " << grade << "���Դϴ�. ���ݾ� ������ �÷������� �ϰڽ��ϴ�.." << endl;
			cout << "--------------------------------------------" << endl;
			if (sex == "����")
				cal = 2000;
			else if (sex == "����")
				cal = 1500;
		}
		else if (weight < (height - 100) * 0.9 - 10 && weight >= (height - 100) * 0.9 - 15) {
			grade = 50;
			state = "�ɰ��� ��ü��";
			cout << "����� ���´� " << state << " �̰� ������ " << grade << " ���Դϴ�. ���ݾ� ������ �÷������� �ϰڽ��ϴ�." << endl;
			cout << "--------------------------------------------" << endl;
			if (sex == "����")
				cal = 3000;
			else if (sex == "����")
				cal = 2500;
		}
		else if (weight > (height - 100) * 0.9 + 15) {
			grade = 30;
			state = "���� ��";
			cout << "����� ���´� " << state << " �̰� ������ " << grade << " ���Դϴ�. �� �����ϼ���." << endl;
			cout << "--------------------------------------------" << endl;
			if (sex == "����")
				cal = 1800;
			else if (sex == "����")
				cal = 1300;
		}
		else if (weight < (height - 100) * 0.9 - 15) {
			grade = 30;
			state = "���";
			cout << "����� ���´� " << state << " �̰� ������ " << grade << "���Դϴ�. �� �����ϼ���." << endl;
			cout << "--------------------------------------------" << endl;
			if (sex == "����")
				cal = 3200;
			else if (sex == "����")
				cal = 2800;

		}
	}

	void supervise(void)
	{
		cout << "                                                      " << endl;
		cout << "--------------------------------------------" << endl;
		cout << "90 �ϵ��� �Ĵܰ����� ���� �׸��� ���������� �ǽ� �ϰڽ��ϴ�." << endl;
		cout << "                                                      " << endl;
		cout << "                                                      " << endl;

		cout << "----�索�� ���� ����-----(���ý�, ������)" << endl;
		cout << "                                                      " << endl;

		while (true) {

			cout << "1.��� , 2.������ ,3.�عٶ�⾾ , 4.���� ,5.���� , 6.�׸�����" << endl;

			cin >> answer;
			if (answer == "1") {
				cout << "����� ���� ���� ��ɰ� �÷� ���� ���濡 ȿ���� ������" <<
					"��ٿ� ���Ե� ī��Ƽ���̵� ������ �索���� �����ϴ� ȿ���� �ֽ��ϴ�." <<
					"�̳׼�Ÿ���б����� 4500�� ���� ������� 15�Ⱓ ������ ������ ������ " <<
					"���� ī��Ƽ���̵� ��ġ�� ���� ������� �索�� ������ ���� ���Ϸ� �پ��� ������ ��Ÿ���ٰ� ���߽��ϴ�." << endl;
				cout << "                                                      " << endl;
				cout << "                                                      " << endl;
			}

			if (answer == "2") {
				cout << "�����ῡ�� 'Ʈ����'�� 'Ű��Ʈ����'�̶�� ȿ�Ұ� ǳ���ϰ� �����Ǿ� �ִµ�" <<
					"�̴� �ν����� �к��ϴ� ������ ����� Ȱ��ȭ������ �索�� ������ ������ ���� �� �ֽ��ϴ�." <<
					"���� ���̼����� ǳ���� ������ �ް��� �ö󰡴� ���� �����ְ� �������ִ� ȿ���� �ֽ��ϴ�." <<
					"�Ϸ� �� �� �̻� �������ִ� ���� �����ϴ�." << endl;
				cout << "                                                      " << endl;
				cout << "                                                      " << endl;
			}

			if (answer == "3") {
				cout << "�� ������ ���ϸ� '�ǰ��� ���� ����'�� �索�� ���� �� ġ�ῡ ū ȿ���� �ִ� ������ ��Ÿ�����ϴ�." <<
					"�عٶ�⾾���� �索�� ���濡 ���� ������ �����Ǿ� ������, " <<
					"�ν��� ������ �ٿ��� ������ ���������� �������ִµ� ������ �� �� �ֽ��ϴ�." << endl;

				cout << "                                                      " << endl;
				cout << "                                                      " << endl;

			}

			if (answer == "4")
			{
				cout << "���Ŀ� ǳ���ϰ� ����ִ� �˸��� ������ �ν��� �к� ���������� " <<
					"���� �絵�� ���ߴµ� ū ������ �˴ϴ�. " <<
					"	������ �����ϱ⺸�ٴ� ���� �԰ų� �ٸ� �丮�� �־�Դ� ���� �����ϴ�. " <<
					"Ư�� ���� �Բ� ������ ��� �ݷ����׷��� �������ְ� " <<
					"������ ���ߴ� ȿ���� �־� ������, ���ư�ȭ ���濡�� �����ϴ�." << endl;
				cout << "                                                      " << endl;
				cout << "                                                      " << endl;


			}

			if (answer == "5")
			{
				cout << "���� ���þ��� �������� ������ ��2�� �索���� ������ȯ ������ ���̴µ� ������ �شٴ� ���� ����� ��ǥ�߽��ϴ�." <<
					"���Ŀ� ���������� ���ÿ��� ����ִ� '�˸���' ������ ���� ��Ÿ��B6�� ���������ν�" <<
					"���� ����� Ȱ��ȭ���� �ν��� �к� ��Ȱ������ ȿ���� �� �� �ֽ��ϴ�. " <<
					"�̻Ӹ� �ƴ϶� ���׼�ȯ ������ �鿪�� ���� ���� �����ִ� ������ ����־�" <<
					"������ �����Ѵٸ� �ǰ������� ū ������ ���� �� �ֽ��ϴ�." << endl;
				cout << "                                                      " << endl;
				cout << "                                                      " << endl;
			}
			if (answer == "6")
				break;
		}


		cout << "---------�����п� ���� ����-------------(���ý� ������)" << endl;
		cout << "                                               " << endl;
		cout << "                                                   " << endl;

		while (true)
		{
			cout << "1.����,������, 2.�κ�,��ġ,����,�̿�,�ٽø�, 3.���,�丶��, 4.�׸�����" << endl;
			cin >> answer;

			cout << "                                               " << endl;
			cout << "                                                   " << endl;

			if (answer == "1") {
				cout << "	���̿��� ���� ���� HDL �ݷ����׷��� �����ָ� ���ư�ȭ�� �������ִ� ���佺�׷��� ������ �ֽ��ϴ�." <<
					"�� ���̼����Ұ� ǳ���� ���� ���� �Ұ����� ��ƿ� ǳ���� ������� ���ư�ȭ�� ��ȭ������ �����ϴ�." <<

					"������ �ܹ����Է��� ���� �ʼ��ƹ̳���� ���� ���� ��ȭ ����, ���κ� ����ȿ���� �ֽ��ϴ�." <<
					"�� ���ư�ȭ�� ����� ������ȯ, ������, �索���� �ֹ��� �ݷ����׷��� ���ߴ� " <<
					"��Ÿ�۷�ĭ�̶�� ���뼺 ���̼����� �ٷ� �����ϰ� �ֱ⵵ �մϴ�." << endl;


				cout << "                                               " << endl;
				cout << "                                                   " << endl;
			}

			else if (answer == "2")
			{
				cout << "�κο��� �ݷ����׷��� ���ߴ� ������� ǳ���� ���ư�ȭ���濡 ���� �ø������ ���� ���� ��� ��ȭ����� �����ϴ�." <<

					"��ġ�� ���� ���� ��Ǫ�������� ǳ���� ����ȭ������� ����� �ݷ����׷��� ���̰�" <<
					"	���� �ݷ����׷��� ���ߴµ� Ź���� ����� �����ǰ��� ������ �˴ϴ�." <<
					"	���� �� ����� ����ȭ������� ���� �ҽǵǱ� ������ �������� �Դ� ���� �� �����ϴ�." <<

					"�̿�, �ٽø� � ���� ������ �ִ� �̲��Ÿ��� ������ �˱���� " <<
					" �ݷ����׷Ѱ� ��������� �����ϰ� ������� �輳���� ���� �ݷ����׷� ��ġ�� �����ݴϴ�." <<
					"�� �˱���� ������ �������� ���� ������ �̵��� �������� ������ �ް��� ����� �����ݴϴ�." << endl;


				cout << "                                               " << endl;
				cout << "                                                   " << endl;

			}
			if (answer == "3") {
				cout << "�Ľ����δ� ���, �丶�並 �����غ��ʽÿ�. ����� ǳ���� ���̼�����" <<
					"������ ���̴� �����ݷ����׷��� �������� ������ �ݷ����׷��� �������� ���ư�ȭ�� �������ִ� ȿ���� �ֽ��ϴ�." <<

					"�� Į���� ���� ������ ������� �����п��濡 ������ �ݴϴ�." <<
					"���뼺���̼����� ��ƾ ���� ������ ������ ���̰� �����ݷ����׷��� ������ �ް��� ���л���� �������ݴϴ�." <<

					"�丶�䰡 �ǰ���ǰ���� �ָ�޴� ���� ū ������ ���������桯 �����Դϴ�." <<
					"�丶���� �������� ����� ���������� ������ �׻�ȭ���� ���������� ���� " <<
					"������, �ɱٰ�� ���� �����ϴµ� ȿ�����Դϴ�.�� ��ȭ�� �ֹ��� Ȱ����Ҹ� ������� ������ �����ϴµ��� ������ �˴ϴ�." <<
					"�丶�信 ǳ���� ��ƾ�� ������ ưư�ϰ� �ϰ� ������ ������ ������ �� ������ȯ�ڿ��� ���� ��ǰ�Դϴ�." << endl;

				cout << "                                               " << endl;
				cout << "                                                   " << endl;
			}
			if (answer == "4")
				break;

		}


		while (grade < 100)
		{

			cout << "---------------------" << i << "����----------------" << endl;

			cout << "                                               " << endl;
			cout << "                                                   " << endl;

			b_disease();


			cout << "                                                      " << endl;

			cout << "                                                      " << endl;

			cout << "���� ���� ������ �����ϼ���: " << endl;
			cout << "1.��ٰ� �������� �� ����(cal=600)   +2��" << endl;
			cout << "2.���Ŀ� ������ ��췯�� �ƺ�ǥ ���ö�(cal=600)  +2��" << endl;
			cout << "3.�ܹ���(cal=1000)   -2��" << endl;
			cout << "4.������(cal=400)    -1��" << endl;
			cout << "5.����(cal=600)    -2��" << endl;
			cout << "6.�Ľ�Ÿ(cal=700)    -2��" << endl;
			cout << "7.���(cal=450)   -1��" << endl;
			cout << "8.���(cal=400)    -2��" << endl;

			cin >> food;

			if (food == "1")
			{
				cal = cal - 600;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade += 2;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "--------------------------------------------" << endl;
				cout << "                                                      " << endl;
			}
			if (food == "2")
			{
				cal = cal - 600;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade += 1;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "3")
			{
				cal = cal - 1000;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "4")
			{
				cal = cal - 400;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade -= 1;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "5")
			{
				cal = cal - 600;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "6")
			{
				cal = cal - 700;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "7")
			{
				cal = cal - 450;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade -= 1;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "8")
			{
				cal = cal - 400;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}

			cout << "                                                      " << endl;

			a_disease();

			cout << "                                                      " << endl;
			cout << "���� ��� ������ �ּ���:" << endl;
			cout << "                                                      " << endl;
			cout << "                                                      " << endl;
			cout << "1.�ȱ�(30��)   +2" << endl;
			cout << "2.�޸���(20��)  +2" << endl;
			cout << "3.������(40��)   +2" << endl;
			cout << "4.�ｺ(50��)   +3" << endl;
			cout << "5.�ٳѱ�(30��)  +2" << endl;
			cout << "6.����   -2" << endl;

			cout << "                                                      " << endl;
			cin >> exercise;

			if (exercise == "1")
			{
				grade += 2;
				cout << "                                                      " << endl;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;

			}

			else if (exercise == "2")
			{
				grade += 2;
				cout << "                                                      " << endl;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;

			}

			else if (exercise == "3")
			{
				grade += 2;
				cout << "                                                      " << endl;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;

			}
			else if (exercise == "4")
			{
				grade += 3;
				cout << "                                                      " << endl;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (exercise == "5")
			{
				grade += 2;
				cout << "                                                      " << endl;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;

			}
			else if (exercise == "6")
			{
				grade -= 2;
				cout << "                                                      " << endl;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;

			}

			b_disease();

			cout << "                                     " << endl;

			cout << "���� ���� ������ �����ϼ���: " << endl;

			cout << "                                     " << endl;

			cout << "����� ���� ���뿭��: " << cal << endl;

			cout << "                                     " << endl;

			cout << "1.�عٶ�⾾�� �� ����,������(cal=600)   +2��" << endl;
			cout << "2.�κ�,��ġ,����,�̿�,�ٽø��� �� ���ö�(cal=600)   +2��" << endl;
			cout << "3.�ܹ���(cal=1000)   -2��" << endl;
			cout << "4.������(cal=400)    -1��" << endl;
			cout << "5.����(cal=600)    -2��" << endl;
			cout << "6.ġŲ(cal=700)    -2��" << endl;
			cout << "7.���(cal=450)   -1��" << endl;
			cout << "8.���(cal=400)    -2��" << endl;

			cin >> food;

			if (food == "1")
			{
				cal = cal - 600;
				cout << "                                                      " << endl;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade += 2;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "2")
			{
				cal = cal - 600;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade += 2;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "3")
			{
				cal = cal - 1000;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "4")
			{
				cal = cal - 400;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade -= 1;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "5")
			{
				cal = cal - 600;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "6")
			{
				cal = cal - 700;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "7")
			{
				cal = cal - 450;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade -= 1;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "8")
			{
				cal = cal - 400;
				cout << "���� ������" << cal << "�Դϴ�." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				cout << "                                                      " << endl;
			}

			if (sex == "����")
				cal -= 1300;
			else if (sex == "����")
				cal -= 1100;

			cout << "                                                      " << endl;
			a_disease();
			cout << "                                                      " << endl;
			cout << "                                     " << endl;

			if (cal < 0)
				cal = 0;

			cout << "���ʴ�緮 ���� ���� Į�θ�: " << cal << endl;

			cout << "                                     " << endl;


			/*
			if (state == "��ü��" || state == "��" || state == "������")
			{
				if (cal > 0) {
					cout << "Į�θ��� ������ +1��" << endl;
					grade += 1;
				}
				else {
					cout << "Į�θ��� �����ϸ� -1��" << endl;
					grade -= 1;
				}
				cout << "�׸� ��ðڽ��ϱ�?(��,�ƴϿ�) " << endl;
				cin >> answer;
				if (answer == "��") {
					grade += 0;
					cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				}
				else if (answer == "�ƴϿ�") {
					grade -= 1;
					cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				}
			}

			if (state == "��ü��" || state == "�ɰ��� ��ü��" || state == "���")
			{
				if (cal < 0) {
					cout << "Į�θ��� �����ϸ� +1��" << endl;
					grade += 1;
				}
				else
				{
					cout << "Į�θ��� ������ -1��" << endl;
					grade -= 1;
				}

				cout << "������ ��ðڽ��ϱ�?(��,�ƴϿ�) " << endl;
				cin >> answer;
				if (answer == "��") {
					grade += 1;
					cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				}
				else if (answer == "�ƴϿ�") {
					grade -= 1;
					cout << "����� ������" << grade << "�Ǿ����ϴ�." << endl;
				}
			}
			*/

			cout << "                                     " << endl;
			cout << "����� ���� ������ " << grade << "�Դϴ�." << endl;

			cout << "                                     " << endl;

			cout << "����� �����Ը� ������ּ��� " << endl;
			cout << "                                     " << endl;

			cin >> weight;
			cout << "                                     " << endl;

			fileprint();

			i++;
			if (sex == "����")
				cal = 2500;
			else if (sex == "����")
				cal = 2000;


		}



		fileread();








	}


	void a_disease(void)
	{
		cout << "        ��                 ��" << endl;
		cout << "���� 30���Դϴ�. �ν����� �����Ͻðڽ��ϱ�?!" << endl;
		cout << "        ��                 ��" << endl;
		cin >> answer;
		if (answer == "��" || answer == "��") {
			grade += 0.25;
			cout << "����� ������ " << grade << "�� �Ǿ����ϴ�." << endl;
		}
		else {

			grade -= 2;
			cout << "����� ������ " << grade << "�� �Ǿ����ϴ�." << endl;
		}
	}

	void b_disease(void)
	{
		cout << "        ��                 ��" << endl;
		cout << "���� 30���Դϴ�. ���о��� �����Ͻðڽ��ϱ�?!" << endl;
		cout << "        ��                 ��" << endl;
		cin >> answer;
		if (answer == "��" || answer == "��") {
			grade += 0.25;
			cout << "����� ������ " << grade << "�� �Ǿ����ϴ�." << endl;
		}
		else {

			grade -= 2;
			cout << "����� ������ " << grade << "�� �Ǿ����ϴ�." << endl;
		}
	}


	void fileprint(void)
	{
		cout << "                                                " << endl;
		cout << "����� �����Կ� ������ ���ϸ��� ����մϴ�." << endl;
		cout << "                                                " << endl;

		ofstream os{ "results.txt",ios::app };
		if (!os) {
			cerr << "���� ���¿� �����Ͽ����ϴ�" << endl;
			exit(1);
		}

		os << i << "����:";
		os << "������: " << weight << "kg,  ����:  " << grade << endl;
		os << "                                     " << endl;


	}

	void fileread(void)
	{

		cout << "                                                " << endl;
		cout << "����� �׵����� �����Կ� �����Դϴ�. Ȯ���� �ּ���." << endl;
		cout << "                                                " << endl;

		ifstream is{ "results.txt" };
		if (!is) {
			cerr << "���� ���¿� �����Ͽ����ϴ�" << endl;
			exit(1);
		}
		string info;
		while (is) {
			is >> info;
			cout << info << " ";
		}
		cout << endl;


	}



};


class thanks : public Biman {


public:
	void happy(void)
	{
		cout << "                                                " << endl;
		cout << "�׵��� ���α׷��� �����Ͻ� ���Բ� ����帳�ϴ�. �����ε� �ǰ��� ��Ȱ ���� ����մϴ�. " << endl;
		cout << "                                                " << endl;
	}


};

int main()
{
	Biman B;
	thanks c;
	B.introduction();
	B.enter();
	B.figure();
	B.supervise();

	c.happy();

}
