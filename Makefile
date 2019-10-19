ChangeWallpaper.dll: wallpaper.c
	gcc wallpaper.c lua53.dll -shared -s -O2 -DNDEBUG -o ChangeWallpaper.dll
