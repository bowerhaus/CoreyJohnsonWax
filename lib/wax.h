//  Created by ProbablyInteractive.
//  Copyright 2009 Probably Interactive. All rights reserved.

#import <Foundation/Foundation.h>
#import "lua.h"

#define WAX_VERSION 0.93

// Prototypes to keep compiler happy
void wax_setup(void);
void wax_start(char *initScript, lua_CFunction extensionFunctions, ...);
void wax_startWithServer(void);
void wax_end(void);
void uncaughtExceptionHandler(NSException*);
int wax_panic(lua_State*);

lua_State *wax_currentLuaState(void);
void wax_setCurrentLuaState(lua_State* L);

void luaopen_wax(lua_State *L);
