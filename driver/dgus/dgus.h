/******************************************************************************
																	
                  版权所有 (C), 2019, 北京迪文科技有限公司	
																			  
*******************************************************************************
文 件 名   : dgus.h
版 本 号   : V1.0
作    者   : chenxianyue
生成日期   : 2019年6月21日
功能描述   : 提供单片机访问DGUS变量接口 文件升级相关的接口定义
修改历史   :
日    期   : 
作    者   : 
修改内容   : 	
******************************************************************************/
#ifndef _DGUS_H_
#define _DGUS_H_

#include "driver/system/sys.h"
/********************************宏定义***************************************/


/********************************对外函数声明*********************************/

/* 读DGUS Addr地址 Len数据字节长度 存入Buf */
void ReadDGUS(UINT32 Addr, PUINT8 pBuf, UINT16 Len);
/* 写DGUS Addr地址 Len数据字节长度 发送Buf */
void WriteDGUS(UINT32 Addr, PUINT8 pBuf, UINT16 Len);
/* 系统升级 */	

#endif