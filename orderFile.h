#pragma once
#include<iostream>
#include"globalFile.h"
#include<fstream>
using namespace std;
#include<map>
class OrderFile
{
public:
	//���캯��
	OrderFile();
	//����ԤԼ��¼
	void updateOrder();
	//��¼ԤԼ����
	int m_Size;
	//��¼����ԤԼ��Ϣ������
	//map<int,map<string,string>> key ԤԼ��¼���� value�����һ����¼��������Ϣ
	map<int, map<string, string>>m_orderData;
};

