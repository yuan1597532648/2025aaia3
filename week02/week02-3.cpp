#include <iostream>/// cin cout Ū�J��ơB�L�X���
#include <string>/// string �r�ꪺ�\��
using namespace std;/// �ϥΡu�R�W�Ŷ��v�зǪ�std
int main()
{
	string a;/// �ŧi�r��
	cin >> a;/// Ū�J�r��

	string ans;/// �ŧi�r��ans�񵪮ץΪ�
	int N = a.length();/// �r��a������
	for(int i=N-1; i>=0; i--){/// ��L�Ӫ��j��
		ans +=a[i];/// �b�j��̡A��a[i]���ans���᭱
	}
	cout << a << '+' << stoi(ans) << '=' << stoi(a)+stoi(ans) << endl;
}/// stio() is "storing to int" ��r���ܦ��u��ơv
