/* Multi-platform GUI Visual Studio module for the BeebEm emulator
  Written by Eelco Huininga 2016
*/

#include <windows.h>

namespace gui {
	int	guiMessageBox(HWND hwnd, const char *message_p, const char *title_p, int type) {
		return MessageBox (hwnd, message_p, title_p, type);
	}

	DWORD guiCheckMenuItem(HMENU hmenu, UINT uIDCheckItem, UINT uCheck) {
		return CheckMenuItem(hmenu, uIDCheckItem, uCheck);
	}
}
