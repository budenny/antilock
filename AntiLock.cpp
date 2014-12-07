#include "stdafx.h"

int APIENTRY _tWinMain(_In_ HINSTANCE /*hInstance*/,
                     _In_opt_ HINSTANCE /*hPrevInstance*/,
                     _In_ LPTSTR    /*lpCmdLine*/,
                     _In_ int       /*nCmdShow*/)
{
	while (1)
	{
		::SetThreadExecutionState(ES_DISPLAY_REQUIRED);
		::Sleep(1000 * 60);
	}
	return 0;
}