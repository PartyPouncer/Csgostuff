#include "C:\Program Files\VMProtect Ultimate\Include\C\VMProtectSDK.h"


class cSecurity
{
public:
	void Check();
	void CheckAllPorcesses();
	void HideModuleFromPEB(HINSTANCE hInstance);
	void RemovePeHeader(DWORD ModuleBase);
	void HideModule(HANDLE hModule);
	void HideModuleXta(HINSTANCE hModule);
	bool DestroyModuleHeader(HMODULE hModule);
	DWORD HideMod(HMODULE mod);
};
extern cSecurity* Security;

