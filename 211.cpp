#include<iostream>
using namespace std;
#include<string> // thu vi?n h? tr? c�c h�m thao t�c chu?i string

int main()
{
	string str;
	cout << "\nNhap chuoi: ";
	getline(cin, str); // nh?n k� t? kho?ng tr?ng
//	cout << "\nChuoi nhan duoc la: " << str;
//	cout << "\nDo dai chuoi: " << str.length(); */

	//string s1 = "lap";
	//string s2 = "trinh";
	//cout << s1 + " " + s2;
	//string s3 = s1 + ' ' + s2;
	//cout << s3;
	//stricmp((char *)s1.c_str(),(char *) s2.c_str());
	// h�m c._str(): h�m chuy?n chu?i string sang chu?i k� t?
	/*for (int i = 0; i < s1.length(); i++)
	{
		cout << s1[i] << endl;
	}*/

//	string str;
//	cout << "\nNhap chuoi: ";
//	getline(cin, str);
//	cout << "\nChuoi nhan duoc la:" << str;
//	cout << "\nDo dai chuoi : " << str.length();

	/* =============== X�A ============= */
	str.erase(2, 3); // str.erase(x, y); // X�a di y k� t? b?t d?u t?i v? tr� x.
	//cout << "\nChuoi sau khi xoa:" << str;
	//cout << "\nDo dai sau khi xoa:" << str.length();

	//str.erase(str.begin() + x); // X�a di k� t? t?i v? tr� x.
//	str.erase(str.begin() + 3);
	cout << "\nChuoi sau khi xoa:" << str;
	cout << "\nDo dai sau khi xoa:" << str.length();
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
