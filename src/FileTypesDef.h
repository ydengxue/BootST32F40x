/*****************************************************************************************************
* FileName     :    FileTypesDef.h
*
* Reference    :    NULL
*
* Description  :    �ļ�������ض���
*
* History      :
*       <Author>        <Data>        <Hardware>     <Version>        <Description>
*     YanDengxue   2011-03-29 15:30       --           1.00             Create
*****************************************************************************************************/
#ifndef _File_Types_Def_H_
#define _File_Types_Def_H_

#ifdef __cplusplus
extern "C" {
#endif

//====================================================================================================
// �궨��
//====================================================================================================
//----------------------------------------------------------------------------------------------------
// �ļ������Ϣ
//----------------------------------------------------------------------------------------------------
#define SELF_BIN_HEADER_LENGTH   0x08u
#define SELF_BIN_VERSION         1u

#define UIMAGE_HEADER_LENGTH     0x40u
#define UIMAGE_MAGIC             0x27051956u

#define MACH_TYPE_DAVINCI_DA850_EVM  2157u

#define FILE_TYPE_CPU            0x01u
#define FILE_TYPE_TAG_FPGA       0x7001u
#define FILE_TYPE_TAG_CPU        0x7002u
#define FILE_TYPE_CPU_AIS        0x41504954u// DSP/ARM/CPU ���

#define FILE_TYPE_DSP_POWERON    0xFFFFFF01u
#define FILE_TYPE_DSP_POWEROFF   0xFFFFFF02u
#define FILE_TYPE_DSP_SHUTDOWN   0xFFFFFF03u
#define FILE_TYPE_DSP_RELEASE    0xFFFFFF04u
#define FILE_TYPE_DSP_RESET      0xFFFFFF05u
#define FILE_TYPE_DSP_REBOOT     0xFFFFFF06u

#define COMMAND_SECTION_LOAD     0x58535901u
#define COMMAND_CLOSE_JUMP       0x58535906u
#define TAG_ENTRY_POINT          0xFFFFFFFFu

#ifdef __cplusplus
}
#endif

#endif
