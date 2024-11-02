#include <Windows.h>

#include "include/cef_app.h"

class SimpleApp : public CefApp, public CefClient {
public:

private:
	IMPLEMENT_REFCOUNTING(SimpleApp);
};

int main() {
	CefMainArgs main_args(GetModuleHandle(nullptr));

	CefRefPtr<SimpleApp> app(new SimpleApp);
	int exit_code = CefExecuteProcess(main_args, app, nullptr);
	if (exit_code >= 0) {
		return exit_code;
	}

	if (!CefInitialize(main_args, {}, app, nullptr)) {
		return 0;
	}

	CefWindowInfo wi;
	wi.SetAsPopup(NULL, L"Hello CEF");
	CefBrowserHost::CreateBrowser(wi, app, L"https://www.google.com", {}, nullptr, nullptr);

	CefRunMessageLoop();
	CefShutdown();

	return 0;
}