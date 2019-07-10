/******************************************************************************
																	
                  版权所有 (C), 2019, 北京迪文科技有限公司	
																			  
*******************************************************************************
文 件 名   : dgus_config.h
版 本 号   : V1.0
作    者   : chenxianyue
生成日期   : 2019年7月9日
功能描述   : USB DEMO的DGUS应用程序配置
修改历史   :
日    期   : 
作    者   : 
修改内容   : 	
******************************************************************************/
#ifndef _DGUS_CONFIG_H_
#define _DGUS_CONFIG_H_


#define PAGE_UP			0x5A
#define PAGE_DOWN		0xA5

/********************************对外函数声明*********************************/

void DgusRegConfig(void);
void MesseageShow(void);		/* 文件属性DGUS显示 */
void PageClickAck(void);
void BackToPreviousAck(void);

#endif