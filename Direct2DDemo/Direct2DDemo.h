
// Direct2DDemo.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDirect2DDemoApp: 
// �йش����ʵ�֣������ Direct2DDemo.cpp
//

class CDirect2DDemoApp : public CWinApp
{
public:
	CDirect2DDemoApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDirect2DDemoApp theApp;