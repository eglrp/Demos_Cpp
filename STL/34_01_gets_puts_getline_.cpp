// 34_01_io��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>  //����geiline(istream,string)
#include <stdio.h>
#include <cstring>
#include <vector>
#include <sstream>

using namespace std;

int main()
{

	////string�Ķ��룬����:>>��getline()
	//{
	//	string temp;
	//	cin >> temp; //cin��Ϊ����Ļ���������ܿհ��ַ�
	//	cout << "�������" << temp << endl;
	//	getline(cin, temp); //���԰����հ��ַ����Իس�����

	//}
	//
	////get,put����
	//{
	//	char arr[7];
	//	//����EOF(CTRL+Z)�������
	//	//cin.get(arr,6); //ָ���������6���ַ�
	//	cin.get(arr, 6,'\n'); //ָ���������6���ַ���������'\n'����,Ĭ��Ҳ������'\n'����

	//	cout << arr << endl; 

	//}


	//char c[10];
	//cin.getline(&c[0], 5, 'g'); //ָ������5-1���ַ�����Ϊ���һ����\0

	//

	//{
	//	char str[20];
	//	//gets(str); //C++11�б�ɾ���ˣ���fgets���
	//	char * str1 = fgets(str, 200, stdin); //gets�����scanf�ĺô��ǵ���ĩ�Ż�ֹͣ����˿��Խ��տհ��ַ�

	//	//���ǲ���˵scanf����ȫû�����ܿհ��ַ�������scanf("%s %s")������Ҳ�Ǻܿ��Խ��������ַ����ģ�ֻ��˵����%s�в��ܴ��ڿհ�

	//	//fgets�Ļ��������»��з���ĩβ��gets����
	//	std::cout << str1 << std::endl;
	//}

	//����1,-2,3,-4�����Զ��ŷָ��ַ���������
	string ss;
	cin >> ss; //��ͨ��������������ַ���������stringstream�����У���֪��Ϊɶֱ��getline�÷ָ�������

	stringstream sstr(ss);
	std::string tmp;
	std::vector<int> v;
	//while (!std::getline(std::cin, tmp, ',').eof())
	while (std::getline(sstr, tmp, ','))
	{
		v.push_back(stoi(tmp));
	}



	system("pause");
	return 0;
}
