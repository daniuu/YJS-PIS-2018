#if !defined(AFX_BQLBSHOW_H__4020E53F_B5E0_4674_98E1_A39BC315F3EA__INCLUDED_)
#define AFX_BQLBSHOW_H__4020E53F_B5E0_4674_98E1_A39BC315F3EA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BqlbShow.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBqlbShow dialog
#include "YQJLGrid.h"

class CYQJL : public CXTResizeDialog
{
// Construction
public:
	CYQJL(CWnd* pParent = NULL);   // standard constructor

	CYQJLGrid m_grid;
// Dialog Data
	//{{AFX_DATA(CYQJL)
	enum { IDD = IDD_DIALOG_YQJL };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYQJL)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CYQJL)
	virtual BOOL OnInitDialog();
	afx_msg void OnButtonClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BQLBSHOW_H__4020E53F_B5E0_4674_98E1_A39BC315F3EA__INCLUDED_)
