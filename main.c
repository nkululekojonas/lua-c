#include <lua.h>
#include <lauxlib.h>
#include <lualib.h> 

#include <stdlib.h>                            
#include <stdio.h>  

int main(int argc, char **argv) {

    // Create a lua state variable
    lua_State *L;
    L = luaL_newstate();

    // load libs
    luaL_openlibs(L);

    //load file
    luaL_loadfile(L, "helloworld.lua");

    // Alert change
    printf("In C, calling Lua\n");

    // In lua
    lua_pcall(L, 0, 0, 0);

    lua_close(L);

    return 0;
}