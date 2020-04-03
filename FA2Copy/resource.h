//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ 生成的包含文件。
// 供 FA2Copy.rc 使用
//
#define IDD_DIALOG1                     111
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

//地形列表
namespace IDC_Terrain_Sort
{
	constexpr int ComboBox_Sub = 9975;// 子类别 
	constexpr int ComboBox_Main = 9983;//主类别
	constexpr int Button_Reload = 9984;//刷新 
}


//INI编辑器
namespace  WND_INI_Editor
{
	constexpr int Dialog = 1031;
	constexpr int Button_Search = 9971;// 查找 
	constexpr int Edit_Input = 9972;//查找输入
	constexpr int Button_Add = 9982;//添加
}

//标签 
namespace Tag
{
	constexpr int Copy_Button = 9970;//复制标签
}
/*
触发编辑器 Trigger
9987 Button 复制触发 Copy Trigger, override
9988 Button 添加事件 Add Event, override
9989 Button 添加行为 Add Action, override
9990 Button 复制事件 Copy Event
9991 Button 复制行为 Copy Action

特遣部队 Taskforce
9985 ComboBox 特遣部队输入 Input string
9986 Button 刷新（可能没啥用，但还是留个备用）Reload(maybe not necessary)
9995 Button 复制特遣部队成员  Copy Taskforce member
9998 Button 复制特遣部队 Copy Taskforce

脚本 Script
9976 Button 添加脚本 Add Script, override
9977 Button 刷新脚本模板 Reload Template
9978 ComboBox 脚本模板 Select Template
9992 Button 添加脚本成员 Add Script member
9993 CheckBox 插入模式 Insert Mode
9996 Button 复制脚本成员 Copy Script member
9999 Button 复制脚本 Copy Script

作战小队 Team
9979 Button 新建作战小队 New Team, override
9980 ComboBox 作战小队模板 Team Template
9981 Button 刷新作战小队模板 Reload Template
9997 Button 复制作战小队 Copy Team

AI触发 AI Trigger
9994 Button 复制AI触发 Copy AI Trigger

Object Viewer（废弃） Unused
9974 Button for debug use, but unused now
*/

#else


//for mo.dat
//使用的ID：9970 - 9999

namespace WND_Houses
{
	constexpr int Button = 9973;
}

//地形列表
namespace IDC_Terrain_Sort
{
	constexpr int ComboBox_Sub = 9975;// 子类别 
	constexpr int ComboBox_Main = 9983;//主类别
	constexpr int Button_Reload = 9984;//刷新 
}


//INI编辑器
namespace  WND_INI_Editor
{
	constexpr int Button_Search=9971;// 查找 
	constexpr int Edit_Input = 9972;//查找输入
	constexpr int Button_Add = 9982;//添加
}

//标签 
namespace Tag
{
	constexpr int Copy_Button = 9970;//复制标签
}
/*
触发编辑器 Trigger
9987 Button 复制触发 Copy Trigger, override
9988 Button 添加事件 Add Event, override
9989 Button 添加行为 Add Action, override
9990 Button 复制事件 Copy Event
9991 Button 复制行为 Copy Action

特遣部队 Taskforce
9985 ComboBox 特遣部队输入 Input string
9986 Button 刷新（可能没啥用，但还是留个备用）Reload(maybe not necessary)
9995 Button 复制特遣部队成员  Copy Taskforce member
9998 Button 复制特遣部队 Copy Taskforce

脚本 Script
9976 Button 添加脚本 Add Script, override
9977 Button 刷新脚本模板 Reload Template
9978 ComboBox 脚本模板 Select Template
9992 Button 添加脚本成员 Add Script member
9993 CheckBox 插入模式 Insert Mode
9996 Button 复制脚本成员 Copy Script member
9999 Button 复制脚本 Copy Script

作战小队 Team
9979 Button 新建作战小队 New Team, override
9980 ComboBox 作战小队模板 Team Template
9981 Button 刷新作战小队模板 Reload Template
9997 Button 复制作战小队 Copy Team

AI触发 AI Trigger
9994 Button 复制AI触发 Copy AI Trigger

Object Viewer（废弃） Unused
9974 Button for debug use, but unused now
*/
#endif


// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NO_MFC                     1
#define _APS_NEXT_RESOURCE_VALUE        113
#define _APS_NEXT_COMMAND_VALUE         40014
#define _APS_NEXT_CONTROL_VALUE         1013
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
