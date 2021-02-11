from building import *
import rtconfig

# get current directory
cwd     = GetCurrentDir()

# The set of source files associated with this SConscript file.

src    = Glob('lwlog_demo.c')

LOCAL_CCFLAGS = ''
path   =  [cwd]

group = DefineGroup('lwlog', src, CPPPATH = path, depend = ['PKG_USING_LWLOG'], LOCAL_CCFLAGS = LOCAL_CCFLAGS)

Return('group')
