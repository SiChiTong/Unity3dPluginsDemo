// UnityPluginsNative.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "stdlib.h"
#include "malloc.h"

extern "C" __declspec(dllexport) char *UnityCallCppNativeAdd(int a, int b)
{
	/* nativeΪ���з���Ŀ��� */
	/*char *c = (char *)malloc(sizeof(char) * 20);

	memcpy(c, "helloworld", sizeof("helloworld"));*/

	/* nativeΪ�ֲ����������� */
	//char c[20] = "helloworld";

	return "helloworld" ;
}

