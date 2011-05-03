// PuzzleSolveDlg.h : header file
//

#pragma once
#include "JPuzzleWnd.h"

// CPuzzleSolveDlg dialog
class CPuzzleSolveDlg : public CDialog
{
// Construction
public:
	CPuzzleSolveDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_PUZZLESOLVE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	bool	m_bCreated;

	void	RelocateControls();

	CJPuzzleWnd m_TheWnd;
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
