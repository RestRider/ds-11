#include <iostream> 
#include <Windows.h> 

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	double procint = 0;
	int rub = 0;
	double dollar = 0.010822;
	double evro = 0.009691;
	double uani = 0.076074;
	double farit = 37;
	double ien = 1.56;
	double tenge = 5.17;
	int vibor = 0;

	int povtor = 0;
	std::cout << "����������� � ����� ��������\n ���� ������ �������� ������ ������� 1 , ���� ��� ������� 0\n";
	std::cin >> povtor;
	while (povtor == 1)
	{
		std::cout << "�� ������ �������� ������ �������� ��� ���������� \n 1)����� >> ������\n 2)����� >> ����\n 3)����� >> ����\n 4)����� >> �����\n 5)����� >> ����\n 6)����� >> �����\n";
		std::cin >> vibor;
		std::cout << "����� � ��� ������?\n";
		std::cin >> rub;
		if (vibor == 1)
		{
			procint = (rub * dollar) / 100 * 5;
			std::cout << "�� ������� ������: " <<(rub * dollar) - procint << " �������� �������� ����������: " << procint / dollar <<"���";

		}
		if (vibor == 2)
		{
			procint = (rub * evro) / 100 * 5;
			std::cout << "�� ������� ������: " <<(rub * evro) - procint << " ���� �������� ����������: " << procint / evro << "���";

		}
		if (vibor == 3)
		{
			procint = (rub * uani) / 100 * 5;
			std::cout << "�� ������� ������: " <<(rub * uani) - procint << " ����� �������� ����������: " << procint / uani << "���";

		}
		if (vibor == 4)
		{
			procint = (rub * farit) / 100 * 5;
			std::cout << "�� ������� ������: " <<(rub * farit) - procint << " ������ �������� ����������: " << procint / farit << "���";

		}
		if (vibor == 5)
		{
			procint = (rub * ien) / 100 * 5;
			std::cout << "�� ������� ������: " <<(rub * ien) - procint << " ��� �������� ����������: " << procint / ien << "���";

		}
		if (vibor == 6)
		{
			procint = (rub * tenge) / 100 * 5;
			std::cout << "�� ������� ������: " <<(rub * tenge) - procint << " ����� �������� ����������: " << procint / tenge << " �����";

		}
		povtor = 0;
		std::cout << "\n���������� ��������� �������� 1 , ���� ��� �� �������� 0 \n";
		std::cin >> povtor;

	}









}