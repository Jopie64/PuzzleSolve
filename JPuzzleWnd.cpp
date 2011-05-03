// JPuzzleWnd.cpp : implementation file
//

#include "stdafx.h"
#include "PuzzleSolve.h"
#include "JPuzzleWnd.h"


// CJPuzzleWnd

IMPLEMENT_DYNAMIC(CJPuzzleWnd, CWnd)

CJPuzzleWnd::CJPuzzleWnd()
{

}

CJPuzzleWnd::~CJPuzzleWnd()
{
}


BEGIN_MESSAGE_MAP(CJPuzzleWnd, CWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()



// CJPuzzleWnd message handlers



void CJPuzzleWnd::OnPaint()
{
	CPaintDC dc(this);
	Paint(&dc);

}

void CJPuzzleWnd::Paint(CDC* P_DcPtr)
{
	CRect W_Rect;
	GetClientRect(W_Rect);
	P_DcPtr->FillSolidRect(W_Rect,RGB(0,255,0));

	CPen W_Pen(PS_SOLID,1,RGB(0,0,0));

	CPen* W_OldPenPtr=P_DcPtr->SelectObject(&W_Pen);


	W_Rect.DeflateRect(60,60,1,1);
	double W_XDiff=(W_Rect.Width()-1.0)/PUZZGRIDX;
	for(int x=0;x<PUZZGRIDX+1;++x)
	{
		int W_rx=(int)(W_XDiff*x+W_Rect.left);
		P_DcPtr->MoveTo(W_rx,W_Rect.top);
		P_DcPtr->LineTo(W_rx,W_Rect.bottom);
	}

	double W_YDiff=(W_Rect.Height()-1.0)/PUZZGRIDY;
	for(int y=0;y<PUZZGRIDY+1;++y)
	{
		int W_ry=(int)(W_YDiff*y+W_Rect.top);
		P_DcPtr->MoveTo(W_Rect.left,W_ry);
		P_DcPtr->LineTo(W_Rect.right,W_ry);
	}

	P_DcPtr->SelectObject(W_OldPenPtr);
	
}
