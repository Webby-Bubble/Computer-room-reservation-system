#pragma once
#include<iostream>
#include"orderFile.h"
#include<vector>
using namespace std;
#include"identity.h"
class Teacher :
    public Identity
{
public:
    //Ĭ�Ϲ���
    Teacher();
    //�вι���
    Teacher(int empId, string name, string pwd);
    //�˵�����
    virtual void openMenu();
    //�鿴����ԤԼ
    void showAllOrder();
    //���ԤԼ
    void validOrder();
    //ְ����
    int m_EmpId;
};

