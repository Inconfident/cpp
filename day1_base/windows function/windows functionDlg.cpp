
// windows functionDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "windows function.h"
#include "windows functionDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CwindowsfunctionDlg �Ի���



CwindowsfunctionDlg::CwindowsfunctionDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_WINDOWSFUNCTION_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CwindowsfunctionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CwindowsfunctionDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CwindowsfunctionDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CwindowsfunctionDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON26, &CwindowsfunctionDlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON4, &CwindowsfunctionDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CwindowsfunctionDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CwindowsfunctionDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CwindowsfunctionDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CwindowsfunctionDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CwindowsfunctionDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CwindowsfunctionDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CwindowsfunctionDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CwindowsfunctionDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CwindowsfunctionDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CwindowsfunctionDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CwindowsfunctionDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CwindowsfunctionDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CwindowsfunctionDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CwindowsfunctionDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CwindowsfunctionDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CwindowsfunctionDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CwindowsfunctionDlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CwindowsfunctionDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &CwindowsfunctionDlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &CwindowsfunctionDlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &CwindowsfunctionDlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON27, &CwindowsfunctionDlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON28, &CwindowsfunctionDlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON29, &CwindowsfunctionDlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON30, &CwindowsfunctionDlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON31, &CwindowsfunctionDlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON32, &CwindowsfunctionDlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON33, &CwindowsfunctionDlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &CwindowsfunctionDlg::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON35, &CwindowsfunctionDlg::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON36, &CwindowsfunctionDlg::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON37, &CwindowsfunctionDlg::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON3, &CwindowsfunctionDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON45, &CwindowsfunctionDlg::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON46, &CwindowsfunctionDlg::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON47, &CwindowsfunctionDlg::OnBnClickedButton47)
	ON_BN_CLICKED(IDC_BUTTON48, &CwindowsfunctionDlg::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON49, &CwindowsfunctionDlg::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON50, &CwindowsfunctionDlg::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON38, &CwindowsfunctionDlg::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &CwindowsfunctionDlg::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON40, &CwindowsfunctionDlg::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON41, &CwindowsfunctionDlg::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON42, &CwindowsfunctionDlg::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON43, &CwindowsfunctionDlg::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON44, &CwindowsfunctionDlg::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON51, &CwindowsfunctionDlg::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON52, &CwindowsfunctionDlg::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON53, &CwindowsfunctionDlg::OnBnClickedButton53)
	ON_BN_CLICKED(IDC_BUTTON54, &CwindowsfunctionDlg::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON55, &CwindowsfunctionDlg::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON56, &CwindowsfunctionDlg::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON57, &CwindowsfunctionDlg::OnBnClickedButton57)
	ON_BN_CLICKED(IDC_BUTTON58, &CwindowsfunctionDlg::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON59, &CwindowsfunctionDlg::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON60, &CwindowsfunctionDlg::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON61, &CwindowsfunctionDlg::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON62, &CwindowsfunctionDlg::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON63, &CwindowsfunctionDlg::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON64, &CwindowsfunctionDlg::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON65, &CwindowsfunctionDlg::OnBnClickedButton65)
	ON_BN_CLICKED(IDC_BUTTON66, &CwindowsfunctionDlg::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON67, &CwindowsfunctionDlg::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON68, &CwindowsfunctionDlg::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON69, &CwindowsfunctionDlg::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON70, &CwindowsfunctionDlg::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON71, &CwindowsfunctionDlg::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON72, &CwindowsfunctionDlg::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON73, &CwindowsfunctionDlg::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON74, &CwindowsfunctionDlg::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON75, &CwindowsfunctionDlg::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON76, &CwindowsfunctionDlg::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON77, &CwindowsfunctionDlg::OnBnClickedButton77)
END_MESSAGE_MAP()


// CwindowsfunctionDlg ��Ϣ�������

BOOL CwindowsfunctionDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	ShowWindow(SW_MINIMIZE);

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CwindowsfunctionDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CwindowsfunctionDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CwindowsfunctionDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CwindowsfunctionDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("calc");
}


void CwindowsfunctionDlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("appwiz.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton26()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("dvdplay");
}


void CwindowsfunctionDlg::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("charmap");
}


void CwindowsfunctionDlg::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("chkdsk.exe");
}


void CwindowsfunctionDlg::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
	system("cleanmgr");
}


void CwindowsfunctionDlg::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("cliconfg");
}


void CwindowsfunctionDlg::OnBnClickedButton8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("cmstp");
}


void CwindowsfunctionDlg::OnBnClickedButton9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("shutdown -s -t 600");
}


void CwindowsfunctionDlg::OnBnClickedButton10()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("shutdown -r -t 600");
}


void CwindowsfunctionDlg::OnBnClickedButton11()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("shutdown -a");
}


void CwindowsfunctionDlg::OnBnClickedButton12()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("rundll32 user32.dll,LockWorkStation");
}


void CwindowsfunctionDlg::OnBnClickedButton13()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("colorcpl");
}


void CwindowsfunctionDlg::OnBnClickedButton14()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("compmgmtlauncher");
}


void CwindowsfunctionDlg::OnBnClickedButton15()
{

	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("credwiz");
}


void CwindowsfunctionDlg::OnBnClickedButton16()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("comexp.msc");
	//dcomcnfg
}


void CwindowsfunctionDlg::OnBnClickedButton17()
{

	
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("control");
}


void CwindowsfunctionDlg::OnBnClickedButton18()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("write");

}


void CwindowsfunctionDlg::OnBnClickedButton19()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("Dccw");

}


void CwindowsfunctionDlg::OnBnClickedButton20()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("devmgmt.msc");

}


void CwindowsfunctionDlg::OnBnClickedButton21()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("desk.cpl");

}


void CwindowsfunctionDlg::OnBnClickedButton22()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("StikyNot");
}


void CwindowsfunctionDlg::OnBnClickedButton23()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("dfrgui");
}


void CwindowsfunctionDlg::OnBnClickedButton24()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("dialer");
}


void CwindowsfunctionDlg::OnBnClickedButton25()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("diskmgmt.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton27()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("dxdiag");
}


void CwindowsfunctionDlg::OnBnClickedButton28()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("eudcedit");
}


void CwindowsfunctionDlg::OnBnClickedButton29()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("eventvwr");
}


void CwindowsfunctionDlg::OnBnClickedButton30()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("explorer");
}


void CwindowsfunctionDlg::OnBnClickedButton31()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("Firewall.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton32()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("FXSCOVER");
}


void CwindowsfunctionDlg::OnBnClickedButton33()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("fsmgmt.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton34()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("gpedit.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton35()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("hdwwiz.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton36()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("inetcpl.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton37()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("intl.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("certmgr.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton45()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("magnify");
}


void CwindowsfunctionDlg::OnBnClickedButton46()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("MdSched");
}


void CwindowsfunctionDlg::OnBnClickedButton47()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("mmc");
}


void CwindowsfunctionDlg::OnBnClickedButton48()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("mobsync");
}


void CwindowsfunctionDlg::OnBnClickedButton49()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("Msconfig");
}


void CwindowsfunctionDlg::OnBnClickedButton50()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("certmgr.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton38()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("iexpress");
}


void CwindowsfunctionDlg::OnBnClickedButton39()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
	system("joy.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton40()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("logoff");
}


void CwindowsfunctionDlg::OnBnClickedButton41()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("lusrmgr.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton42()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("lpksetup");
}


void CwindowsfunctionDlg::OnBnClickedButton43()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("main.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton44()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("mmsys.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton51()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("msinfo32");
}


void CwindowsfunctionDlg::OnBnClickedButton52()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("mspaint");
}


void CwindowsfunctionDlg::OnBnClickedButton53()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("Msra");
}


void CwindowsfunctionDlg::OnBnClickedButton54()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("mstsc");
}


void CwindowsfunctionDlg::OnBnClickedButton55()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("lpksetup");
}


void CwindowsfunctionDlg::OnBnClickedButton56()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("ncpa.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton57()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("Netplwiz");
}


void CwindowsfunctionDlg::OnBnClickedButton58()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("netstat");
}


void CwindowsfunctionDlg::OnBnClickedButton59()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("notepad");
}


void CwindowsfunctionDlg::OnBnClickedButton60()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("Nslookup");
}


void CwindowsfunctionDlg::OnBnClickedButton61()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("OptionalFeatures");
}


void CwindowsfunctionDlg::OnBnClickedButton62()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("osk");
}


void CwindowsfunctionDlg::OnBnClickedButton63()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("perfmon.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton64()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("PowerShell");
}


void CwindowsfunctionDlg::OnBnClickedButton65()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("powercfg.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton66()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("psr");
}


void CwindowsfunctionDlg::OnBnClickedButton67()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("Recdisc");
}


void CwindowsfunctionDlg::OnBnClickedButton68()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("Resmon");
}


void CwindowsfunctionDlg::OnBnClickedButton69()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("Rstrui");
}


void CwindowsfunctionDlg::OnBnClickedButton70()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("regedt32");
}


void CwindowsfunctionDlg::OnBnClickedButton71()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("rsop.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton72()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("snippingtool");
}


void CwindowsfunctionDlg::OnBnClickedButton73()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("soundrecorder");
}


void CwindowsfunctionDlg::OnBnClickedButton74()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("winver");
}


void CwindowsfunctionDlg::OnBnClickedButton75()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("wscui.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton76()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("wscript");
}


void CwindowsfunctionDlg::OnBnClickedButton77()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("sysdm.cpl");
}
