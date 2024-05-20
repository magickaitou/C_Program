// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <windows.h>


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        MessageBoxA(NULL, "Hello", "DLL_PROCESS_ATTACH!!!!", MB_OK);
        break;
    case DLL_THREAD_ATTACH:
        MessageBoxA(NULL, "Hello", "DLL_THREAD_ATTACH!!!!", MB_OK);
        break;
    case DLL_THREAD_DETACH:
        MessageBoxA(NULL, "Hello", "DLL_THREAD_DETACH!!!", MB_OK);
        break;
    case DLL_PROCESS_DETACH:
        MessageBoxA(NULL, "Hello", "DLL_PROCESS_DETACH!!!!", MB_OK);
        break;
    }
    /*
    int MessageBoxA(
        [in, optional] HWND   hWnd,
        [in, optional] LPCSTR lpText,
        [in, optional] LPCSTR lpCaption,
        [in]           UINT   uType
    );

        */

    //MessageBoxA(NULL, "Hello", "Hello World!!!!", MB_OK);


    return TRUE;
}

