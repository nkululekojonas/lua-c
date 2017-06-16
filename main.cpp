#include <iostream>
#include <sstream>

# include <lua.hpp>

extern "C" {
#include "lua.h"
#include "luaconf.h"
#include "lualib.h"
#include "lauxlib.h"
}

int main(int argc, char **argv) {

    // new Lua state
    std::cout << "[C++] Starting Lua state" << std::endl;
//    lua_State *lua_state = luaL_newstate();

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
