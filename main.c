#define WEBVIEW_IMPLEMENTATION
#include <webview.h>

#ifdef WIN32
int WINAPI WinMain(HINSTANCE hInt, HINSTANCE hPrevInst, LPSTR lpCmdLine,
                   int nCmdShow) {
#else
int main() {
#endif
  /* Open in resizable window */
  webview("Search My Movie - webview version",
	  "https://movies-cpro95.netlify.com", 700, 990, 1);
  return 0;
}
