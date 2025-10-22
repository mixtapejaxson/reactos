#ifndef __NETSH_UNDOC_H__
#define __NETSH_UNDOC_H__

VOID
WINAPI
FreeQuotedString(
    _In_ LPWSTR pszQuotedString);

LPWSTR
WINAPI
MakeQuotedString(
    _In_ LPWSTR pszString);

DWORD
WINAPI 
NsGetFriendlyNameFromIfName(
    _In_ DWORD dwParam1,
    _In_ PWSTR pszIfName, 
    _Inout_ PWSTR pszFriendlyName,
    _Inout_ PDWORD pdwFriendlyName);

#endif /* __NETSH_UNDOC_H__ */
