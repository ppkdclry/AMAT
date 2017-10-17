// AMAT.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "AMAT.h"


// 这是导出变量的一个示例
AMAT_API int nAMAT=0;

// 这是导出函数的一个示例。
AMAT_API int fnAMAT(void)
{
    return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 AMAT.h
CAMAT::CAMAT()
{
    return;
}

int CAMAT::add(int a, int b)
{
	return a + b;
}
