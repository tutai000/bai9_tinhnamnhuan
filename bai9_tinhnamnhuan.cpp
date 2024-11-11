#include <iostream>
using namespace std;
bool isNamNhuan(int sonam);
int main()
{

	int nam;
	cout << "Nhap nam: ";
	cin >> nam;

	if (isNamNhuan(nam))
	{
		cout << "Nam nhuan";
	}
	return 0;

}
/// <summary>
/// Ham dung de xac dinh nam nhuan hay ko
/// Neu nhuan = tru
/// neu ko nhuan = false
/// </summary>
/// <param name="sonam"></param>
/// <returns></returns>
bool isNamNhuan(int sonam) {
	if (sonam % 4 == 0 && sonam % 100 != 0 || sonam % 400 == 0)
	{
		return true;
	}
	else {
		return false;
	}
}