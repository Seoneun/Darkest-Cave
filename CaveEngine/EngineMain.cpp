/*!
 * Copyright (c) 2021 SWTube. All rights reserved.
 * Licensed under the GPL-3.0 License. See LICENSE file in the project root for license information.
 */

//#include "Graphics.h"

//import Renderer;

//--------------------------------------------------------------------------------------
// Entry point to the program. Initializes everything and goes into a message processing 
// loop. Idle time is used to render the scene.
//--------------------------------------------------------------------------------------
//int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
//{
//    UNREFERENCED_PARAMETER(hPrevInstance);
//    UNREFERENCED_PARAMETER(lpCmdLine);
//
//    if (FAILED(cave::Renderer::Init(hInstance, nCmdShow, L"CaveEngine", L"CaveEngineDemo")))
//    {
//        return 0;
//    }
//
//    // Main message loop
//    MSG msg = {0};
//    while (WM_QUIT != msg.message)
//    {
//        if (PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE))
//        {
//            TranslateMessage(&msg);
//            DispatchMessage(&msg);
//        }
//        else
//        {
//            cave::Renderer::Render();
//        }
//    }
//
//    cave::Renderer::Destroy();
//
//    return static_cast<int>(msg.wParam);
//}

#include <stdio.h>
#include <stdlib.h>

#include <crtdbg.h>
#include <cstdlib>
#if _DEBUG
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define malloc(s) _malloc_dbg(s, _NORMAL_BLOCK, __FILE__, __LINE__)
#endif // _DEBUG

#include "Gameplay/Public/Game.h"

using namespace cave;

int main()
{
	Game::Init();
	Game::Loop();
	Game::ShutDown();

	_CrtDumpMemoryLeaks();

	return 0;
}