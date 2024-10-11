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
	std::cout << "приветствую в денги обменике\n если хотите обменять деньги нажмите 1 , если нет нажмите 0\n";
	std::cin >> povtor;
	while (povtor == 1)
	{
		std::cout << "вы решили обменять деньги выберите вид транзакции \n 1)рубли >> доллар\n 2)рубли >> евро\n 3)рубли >> юань\n 4)рубли >> фарит\n 5)рубли >> йена\n 6)рубли >> тенге\n";
		std::cin >> vibor;
		std::cout << "скоко у вас рублей?\n";
		std::cin >> rub;
		if (vibor == 1)
		{
			procint = (rub * dollar) / 100 * 5;
			std::cout << "вы сможете купить: " <<(rub * dollar) - procint << " делларов комиссия составляет: " << procint / dollar <<"руб";

		}
		if (vibor == 2)
		{
			procint = (rub * evro) / 100 * 5;
			std::cout << "вы сможете купить: " <<(rub * evro) - procint << " евро комиссия составляет: " << procint / evro << "руб";

		}
		if (vibor == 3)
		{
			procint = (rub * uani) / 100 * 5;
			std::cout << "вы сможете купить: " <<(rub * uani) - procint << " юаний комиссия составляет: " << procint / uani << "руб";

		}
		if (vibor == 4)
		{
			procint = (rub * farit) / 100 * 5;
			std::cout << "вы сможете купить: " <<(rub * farit) - procint << " фритов комиссия составляет: " << procint / farit << "руб";

		}
		if (vibor == 5)
		{
			procint = (rub * ien) / 100 * 5;
			std::cout << "вы сможете купить: " <<(rub * ien) - procint << " йен комиссия составляет: " << procint / ien << "руб";

		}
		if (vibor == 6)
		{
			procint = (rub * tenge) / 100 * 5;
			std::cout << "вы сможете купить: " <<(rub * tenge) - procint << " тенге комиссия составляет: " << procint / tenge << " тенге";

		}
		povtor = 0;
		std::cout << "\nеслихотите повторить напишите 1 , если нет то напишите 0 \n";
		std::cin >> povtor;

	}









}