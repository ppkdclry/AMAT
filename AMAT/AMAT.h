// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� AMAT_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// AMAT_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef AMAT_EXPORTS
#define AMAT_API __declspec(dllexport)
#else
#define AMAT_API __declspec(dllimport)
#endif

// �����Ǵ� AMAT.dll ������
class AMAT_API CAMAT {
public:
	CAMAT(void);
	// TODO:  �ڴ�������ķ�����
	int add(int a, int b);
};

extern AMAT_API int nAMAT;

AMAT_API int fnAMAT(void);
