#include "stdafx.h"
#include "CppUnitTest.h"
#include "../AMAT/AMAT.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AMATTest
{		
	TEST_CLASS(CAMATTest)
	{
	public:
		
		TEST_METHOD(addTest)
		{
			// TODO: �ڴ�������Դ���
			CAMAT ins;
			Assert::AreEqual(5, ins.add(2, 3));
		}

	};
}