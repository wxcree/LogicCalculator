#pragma once
#include<iostream>
#include <string>
#include <vector>
using namespace std;

class LogicCalculator
{
private:
	const string expression;	//���⹫ʽ
	string valGotExp;			//value-got expression,��ָ����ֵ�����⹫ʽ
	int num;					//��Ԫ����
	vector<char> names;			//��Ԫ����
	bool calculate(int);		//ָ����ֵ��ļ��㺯����������Ĳ�������Ϊ��ֵ���ٵ������¾�����㺯��
	
	//��������������㺯���໥���ã����ɵݹ飬����bool calculate(int) �е��ã�����ָ����ֵ��ı��ʽ��ֵ
	bool calculateExp();		//������ʽ
	bool calculateTerm();		//������
	bool calculatefactor();		//��������

public:
	LogicCalculator(const string&);
	void printChart();			//���㲢�����ֵ�� ������ɣ��������������룩
	void printOrExpression();	//����ɣ�����ȡ��ʽ
	void printAndExpression();	//����ɣ�����ȡ��ʽ
};


