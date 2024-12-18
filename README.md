This extension allow access to some Win32 usefull API.

[![Build status](https://ci.appveyor.com/api/projects/status/9lhnogatvq4aunki/branch/master?svg=true)](https://ci.appveyor.com/project/Stefan54845/win32std/branch/master)

PHP 8.4 ✅

Summary
----------
	- RES (access to resource of .exe/.dll files on Win32)
	- RES stream wrapper for reading. Compatible with the res protocol defined by MS
	- Common Win32 dialogs (open/save file, open dir, message boxes)
	- Wrapper for some standard function (win_play_wav, win_beep, win_create_link)


Reference
----------

resource res_open( module_name )
	Return a (PHP)resource that identify the (WIN)resource module handle.
	A module is either a dll file or an exe file.


bool res_close( resouce module )
	Close a module handle


string res_get( resource module, string type, string name[, int lang] )
	Get a resource. 
	lang is experimental: 0 is neutral, 1 is user default, 2 is system default (see winnt.h LANG_* & SUBLANG_*).


bool res_set( string file, string type, string name, string data[, int lang] )
	Add or modify a resource in 'file' (dll or exe)
	lang is experimental: 0 is neutral, 1 is user default, 2 is system default (see winnt.h LANG_* & SUBLANG_*).
	Fail if the file is in use.


array res_list( resource module, string type )
	return the resource list for a given type


array res_list_type( resource module [, bool as_string=true] )
	return the resource type list for a given module
	as_string specify if known type should be translated to string (but such string can't be used in res_get)


string res_exists( string type, string name[, int lang] )
	Check if resource exists in the actual module
	lang is experimental: 0 is neutral, 1 is user default, 2 is system default (see winnt.h LANG_* & SUBLANG_*).


win_play_wav( file[, loop])
	file may be either NULL to stop playback or a file name to start it
	loop can be set to loop playback (default to false)
	module may be opened by res_open a file must represent the resource id (NOT IMPL)


win_beep(string type)
    plays the system sound used by default for pre-defined events:
        '*': System Asterisk 
        '!': System Exclamation 
        'H': System Hand 
        '?': System Question 
        '1': System Default 
        '0': Standard beep using the computer speaker


int win_create_link( file, link_file, args, descr, workingdir )
   Create a MS link file (.lnk) 
   Don't forget the .lnk at the end of link_file !


int win_message_box( text[, type, caption] )
   Prompt a typical Win32 message box.
   Use the Messages Box Constants to modify the appearance of the message box


int win_browse_folder( [string dir, string caption=""] )
   Prompt a "browse for folder" message box


string win_browse_file( [open, path, filename, ext, filter] )
    open or save dialog box, starting path, default filename, default extension, filter in MS format 
    Filter exemple: "HTML File\0*.htm;*.html\0INI file\0*.ini\0All files\0*.*\0\0"

Constants for resource types
	RT_CURSOR="#1"
	RT_BITMAP="#2"
	RT_ICON="#3"
	RT_MENU="#4"
	RT_DIALOG="#5"
	RT_STRING="#6"
	RT_FONTDIR="#7"
	RT_FONT="#8"
	RT_ACCELERATOR="#9"
	RT_RCDATA="#10"
	RT_MESSAGETABLE="#11"
	RT_GROUP_CURSOR="#12"
	RT_GROUP_ICON="#14"
	RT_VERSION="#16"
	RT_DLGINCLUDE="#17"
	RT_PLUGPLAY="#19"
	RT_VXD="#20"
	RT_ANICURSOR="#21"
	RT_ANIICON="#22"
	RT_HTML="#23"


Message box type constants:
	MB_OK
	MB_OKCANCEL
	MB_RETRYCANCEL
	MB_YESNO
	MB_YESNOCANCEL


Message box icon constants
	MB_ICONEXCLAMATION
	MB_ICONWARNING
	MB_ICONINFORMATION
	MB_ICONASTERISK
	MB_ICONQUESTION
	MB_ICONSTOP
	MB_ICONERROR
	MB_ICONHAND


Message box default button constants
	MB_DEFBUTTON1
	MB_DEFBUTTON2
	MB_DEFBUTTON3
	MB_DEFBUTTON4


Message box return constants
	MB_IDABORT
	MB_IDCANCEL
	MB_IDNO
	MB_IDOK
	MB_IDYES
	MB_IDIGNORE
	MB_IDRETRY

