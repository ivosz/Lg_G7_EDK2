/** @file
  This file defines the hob structure for board related information from acpi table
  
  Copyright (c) 2014, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef __ACPI_BOARD_INFO_GUID_H__
#define __ACPI_BOARD_INFO_GUID_H__

///
/// Board information GUID
///
extern EFI_GUID gUefiAcpiBoardInfoGuid;

typedef struct {
  UINT64             PmEvtBase;
  UINT64             PmGpeEnBase;
  UINT64             PmCtrlRegBase;
  UINT64             PmTimerRegBase;
  UINT64             ResetRegAddress;
  UINT8              ResetValue;      
} ACPI_BOARD_INFO;
  
#endif