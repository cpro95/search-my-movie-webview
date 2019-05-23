searchmymovie.exe :
	windres my.rc my.o
	gcc main.c -DWEBVIEW_WINAPI=1 -lole32 -lcomctl32 -loleaut32 -luuid -mwindows -o searchmymovie.exe -I. my.o

