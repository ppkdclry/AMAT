// AMAT.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "AMAT.h"


// ���ǵ���������һ��ʾ��
AMAT_API int nAMAT=0;

// ���ǵ���������һ��ʾ����
AMAT_API int fnAMAT(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� AMAT.h
CAMAT::CAMAT()
{
    return;
}

int CAMAT::add(int a, int b)
{
	return a + b;
}
