//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ ���ɵİ����ļ���
// �� FA2Copy.rc ʹ��
//
#define IDD_DIALOG1                     111
#define IDR_ACCELERATOR1                113
#define IDC_LIST2                       1007
#define IDC_LIST3                       1008
#define IDC_BUTTON1                     1009
#define IDC_BUTTON2                     1010
#define IDC_EDIT1                       1011
#define IDC_EDIT2                       1012

//FA2 Uses:
#define COMMON_FA2

//for usual FA2:
#ifdef COMMON_FA2
namespace WND_Houses
{
	constexpr int Button = 9973;
}

//�����б�
namespace IDC_Terrain_Sort
{
	constexpr int ComboBox_Sub = 9975;// ����� 
	constexpr int ComboBox_Main = 9983;//�����
	constexpr int Button_Reload = 9984;//ˢ�� 
}


//INI�༭��
namespace  WND_INI_Editor
{
	constexpr int Dialog = 1031;
	constexpr int Button_Search = 9971;// ���� 
	constexpr int Edit_Input = 9972;//��������
	constexpr int Button_Add = 9982;//���
}

//��ǩ 
namespace Tag
{
	constexpr int Copy_Button = 9970;//���Ʊ�ǩ
}
/*
�����༭�� Trigger
9987 Button ���ƴ��� Copy Trigger, override
9988 Button ����¼� Add Event, override
9989 Button �����Ϊ Add Action, override
9990 Button �����¼� Copy Event
9991 Button ������Ϊ Copy Action

��ǲ���� Taskforce
9985 ComboBox ��ǲ�������� Input string
9986 Button ˢ�£�����ûɶ�ã��������������ã�Reload(maybe not necessary)
9995 Button ������ǲ���ӳ�Ա  Copy Taskforce member
9998 Button ������ǲ���� Copy Taskforce

�ű� Script
9976 Button ��ӽű� Add Script, override
9977 Button ˢ�½ű�ģ�� Reload Template
9978 ComboBox �ű�ģ�� Select Template
9992 Button ��ӽű���Ա Add Script member
9993 CheckBox ����ģʽ Insert Mode
9996 Button ���ƽű���Ա Copy Script member
9999 Button ���ƽű� Copy Script

��սС�� Team
9979 Button �½���սС�� New Team, override
9980 ComboBox ��սС��ģ�� Team Template
9981 Button ˢ����սС��ģ�� Reload Template
9997 Button ������սС�� Copy Team

AI���� AI Trigger
9994 Button ����AI���� Copy AI Trigger

Object Viewer�������� Unused
9974 Button for debug use, but unused now
*/

#else


//for mo.dat
//ʹ�õ�ID��9970 - 9999

namespace WND_Houses
{
	constexpr int Button = 9973;
}

//�����б�
namespace IDC_Terrain_Sort
{
	constexpr int ComboBox_Sub = 9975;// ����� 
	constexpr int ComboBox_Main = 9983;//�����
	constexpr int Button_Reload = 9984;//ˢ�� 
}


//INI�༭��
namespace  WND_INI_Editor
{
	constexpr int Button_Search=9971;// ���� 
	constexpr int Edit_Input = 9972;//��������
	constexpr int Button_Add = 9982;//���
}

//��ǩ 
namespace Tag
{
	constexpr int Copy_Button = 9970;//���Ʊ�ǩ
}
/*
�����༭�� Trigger
9987 Button ���ƴ��� Copy Trigger, override
9988 Button ����¼� Add Event, override
9989 Button �����Ϊ Add Action, override
9990 Button �����¼� Copy Event
9991 Button ������Ϊ Copy Action

��ǲ���� Taskforce
9985 ComboBox ��ǲ�������� Input string
9986 Button ˢ�£�����ûɶ�ã��������������ã�Reload(maybe not necessary)
9995 Button ������ǲ���ӳ�Ա  Copy Taskforce member
9998 Button ������ǲ���� Copy Taskforce

�ű� Script
9976 Button ��ӽű� Add Script, override
9977 Button ˢ�½ű�ģ�� Reload Template
9978 ComboBox �ű�ģ�� Select Template
9992 Button ��ӽű���Ա Add Script member
9993 CheckBox ����ģʽ Insert Mode
9996 Button ���ƽű���Ա Copy Script member
9999 Button ���ƽű� Copy Script

��սС�� Team
9979 Button �½���սС�� New Team, override
9980 ComboBox ��սС��ģ�� Team Template
9981 Button ˢ����սС��ģ�� Reload Template
9997 Button ������սС�� Copy Team

AI���� AI Trigger
9994 Button ����AI���� Copy AI Trigger

Object Viewer�������� Unused
9974 Button for debug use, but unused now
*/
#endif


// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NO_MFC                     1
#define _APS_NEXT_RESOURCE_VALUE        114
#define _APS_NEXT_COMMAND_VALUE         40018
#define _APS_NEXT_CONTROL_VALUE         1013
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
