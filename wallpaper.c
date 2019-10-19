#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <windows.h>

static int ChangeWallpaper(lua_State *L){
    const char *path=lua_tostring(L,1);
    SystemParametersInfoA(20,0,(PVOID)path,1);
    return 0;
}

static int About(lua_State *L){
    printf("by flaribbit, for study ~\n");
    return 0;
}

static const struct luaL_Reg funcList[]=
{
    {"ChangeWallpaper", ChangeWallpaper},
    {"About", About},
    {0, 0}
};

int luaopen_ChangeWallpaper(lua_State *L)
{
    lua_newtable(L);
    luaL_setfuncs(L, funcList, 0);
    return 1;
}
