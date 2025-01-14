
// Tarakashki_ForsajDlg.h: файл заголовка
//

#pragma once


// Диалоговое окно CTarakashkiForsajDlg
class CTarakashkiForsajDlg : public CDialogEx
{
// Создание
public:
	CTarakashkiForsajDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TARAKASHKI_FORSAJ_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void StartGame();
	CProgressCtrl pr1;
	CProgressCtrl pr2;
	CProgressCtrl pr3;
	CProgressCtrl pr4; 
	afx_msg void x1();
	afx_msg void x2();
	afx_msg void x3();
};
