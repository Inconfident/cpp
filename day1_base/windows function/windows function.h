
// windows function.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CwindowsfunctionApp: 
// �йش����ʵ�֣������ windows function.cpp
//

class CwindowsfunctionApp : public CWinApp
{
public:
	CwindowsfunctionApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CwindowsfunctionApp theApp;