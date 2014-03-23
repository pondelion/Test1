#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	size_t size;
	wstring url;
	char str[256] = "senddata";
	mbstowcs_s(&size, NULL, 0, str, 0);
	vector<WCHAR> wbuf(size);
	mbstowcs_s(&size, wbuf.data(), wbuf.size(), str, strlen(str));

	url = L"http://127.0.0.1/";

	url = url + wbuf.data();

	wcout << url << endl;
	cout << wbuf.size()*sizeof(wbuf[0]);

	return 0;
}

	