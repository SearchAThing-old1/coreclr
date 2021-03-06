//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.
//

/******************************************************************

DO NOT MODIFY. AUTOGENERATED FILE.
This file is generated using the logic from <root>/src/inc/genXplatLttng.pl

******************************************************************/


#define TRACEPOINT_DEFINE
#define TRACEPOINT_PROBE_DYNAMIC_LINKAGE
#include "lttng/tpdotnetruntimestress.h"
extern "C" BOOL  EventXplatEnabledStressLogEvent(){ return TRUE;}
extern "C" ULONG  FireEtXplatStressLogEvent(
                  const unsigned int Facility,
                  const unsigned char LogLevel,
                  LPCSTR Message
)
{
  ULONG Error = ERROR_WRITE_FAULT;
    if (!EventXplatEnabledStressLogEvent()){ return ERROR_SUCCESS;};

                                
     tracepoint(
        DotNETRuntimeStress,
        StressLogEvent,
        Facility,
        LogLevel,
        Message
        );

        Error = ERROR_SUCCESS;

return Error;
}
extern "C" BOOL  EventXplatEnabledStressLogEvent_V1(){ return TRUE;}
extern "C" ULONG  FireEtXplatStressLogEvent_V1(
                  const unsigned int Facility,
                  const unsigned char LogLevel,
                  LPCSTR Message,
                  const unsigned short ClrInstanceID
)
{
  ULONG Error = ERROR_WRITE_FAULT;
    if (!EventXplatEnabledStressLogEvent_V1()){ return ERROR_SUCCESS;};

                                
     tracepoint(
        DotNETRuntimeStress,
        StressLogEvent_V1,
        Facility,
        LogLevel,
        Message,
        ClrInstanceID
        );

        Error = ERROR_SUCCESS;

return Error;
}
extern "C" BOOL  EventXplatEnabledCLRStackWalkStress(){ return TRUE;}
extern "C" ULONG  FireEtXplatCLRStackWalkStress(
                  const unsigned short ClrInstanceID,
                  const unsigned char Reserved1,
                  const unsigned char Reserved2,
                  const unsigned int FrameCount,
                  const void** Stack
)
{
  ULONG Error = ERROR_WRITE_FAULT;
    if (!EventXplatEnabledCLRStackWalkStress()){ return ERROR_SUCCESS;};

                                
     tracepoint(
        DotNETRuntimeStress,
        CLRStackWalkStress,
        ClrInstanceID,
        Reserved1,
        Reserved2,
        FrameCount,
        (const size_t*) Stack
        );

        Error = ERROR_SUCCESS;

return Error;
}
