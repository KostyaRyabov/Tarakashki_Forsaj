
// Tarakashki_Forsaj.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CTarakashkiForsajApp:
// Сведения о реализации этого класса: Tarakashki_Forsaj.cpp
//

class CTarakashkiForsajApp : public CWinApp
{
public:
	CTarakashkiForsajApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CTarakashkiForsajApp theApp;
