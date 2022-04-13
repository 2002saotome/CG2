#include <Windows.h>
// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	// コンソールへの文字出力
	OutputDebugStringA("Loop!!\n");
	return 0;
}