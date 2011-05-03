#pragma once


// CJPuzzleWnd
#define PUZZGRIDX	20
#define PUZZGRIDY	20

class CJPuzzleWnd : public CWnd
{
	DECLARE_DYNAMIC(CJPuzzleWnd)

public:
	CJPuzzleWnd();
	virtual ~CJPuzzleWnd();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();

	void	Paint(CDC* P_DcPtr);
};


