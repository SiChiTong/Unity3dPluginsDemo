// UnityPluginsCLR.h

#pragma once

using namespace System;

namespace UnityPluginsCLR {

	public ref class CLR4orUnity
	{
		// TODO:  �ڴ˴���Ӵ���ķ�����
	public:
		int UnityCallCppCLRAdd(int a, int b)
		{
			return (a + b);
		}
	};
}
