
// DateDlg.h : ͷ�ļ�
//

#pragma once


// CDateDlg �Ի���
class CDateDlg : public CDialogEx
{
// ����
public:
	CDateDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_DATE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBexit();
	afx_msg void OnBnClickedBupdate();
};

int JudgeYear(int year);//�ж�ƽ����
int JudgeMonth(int year,int month);//�ж�ĳ���ж�����
int CalculuteDay(int startyear,int startmonth,int startday,int endyear,int endmonth,int endday);//������������������
int CalculuteDayInOneYear(int year,int month,int day);//����ĳһ����Ϊ����ĵڼ���
int JudgeWeek(int year,int month,int day);//�ж�ĳһ�������ڼ�
void CalculuteEndDate(int startyear,int startmonth,int startday,int days,int* endyear,int* endmonth,int* endday);//�������ʱ��������ʱ��