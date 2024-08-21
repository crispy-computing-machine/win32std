// 					See: https://github.com/php/php-src/blob/master/Zend/zend_API.h

// ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(name, return_reference, required_num_args, MAY_BE_STRING|MAY_BE_BOOL)
// ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(name, return_reference, required_num_args, type, allow_null)

//		ZEND_ARG_TYPE_INFO(pass_by_ref, name, type_hint, allow_null)
// 		ZEND_ARG_TYPE_MASK(pass_by_ref, name, MAY_BE_STRING|MAY_BE_BOOL, default_value)

//		ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(pass_by_ref, name, type_hint, allow_null, default_value)
// 		ZEND_ARG_INFO_WITH_DEFAULT_VALUE(pass_by_ref, name, default_value)

// ZEND_END_ARG_INFO()

// function res_get($res_rc, $type, $name, $lang){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_res_get, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, res_rc, IS_RESOURCE, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, lang, IS_STRING, 0)
ZEND_END_ARG_INFO()

//function res_list($res_rc, $type){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_res_list, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, res_rc, IS_RESOURCE, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

//function res_list_type($res_rc, $as_string){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_res_list_type, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, res_rc, IS_RESOURCE, 0)
	ZEND_ARG_TYPE_INFO(0, as_string, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

//function res_open($module){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_res_open, 0, 1, MAY_BE_RESOURCE|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, module, IS_STRING, 0)
ZEND_END_ARG_INFO()

//function res_close($res_rc){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_res_close, 0, 1, _IS_BOOL)
	ZEND_ARG_TYPE_INFO(0, res_rc, IS_RESOURCE, 0)
ZEND_END_ARG_INFO()

//function res_set($module, $type, $mnameodule, $data){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_res_set, 0, 1, _IS_BOOL)
	ZEND_ARG_TYPE_INFO(0, module, IS_RESOURCE, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

//function win_play_wav(){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_win_play_wav, 0, 1, _IS_BOOL)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, loop, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

//function win_beep(){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_win_beep, 0, 1, _IS_BOOL)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

//function win_message_box(){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_win_message_box, 0, 1, IS_LONG)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, caption, IS_STRING, 0)
ZEND_END_ARG_INFO()

//function win_create_link(){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_win_create_link, 0, 1, _IS_BOOL)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, link, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, args, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, descr, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, workingdir, IS_STRING, 0)
ZEND_END_ARG_INFO()

//function win_browse_folder(){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_win_browse_folder, 0, 1, IS_STRING)
	ZEND_ARG_TYPE_INFO(0, dir, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, caption, IS_STRING, 0)
ZEND_END_ARG_INFO()

//function win_browse_file(){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_win_browse_file, 0, 1, MAY_BE_STRING|MAY_BE_NULL)
	ZEND_ARG_TYPE_INFO(0, open, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ext, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, zfilter, MAY_BE_STRING|MAY_BE_ARRAY, 0)
ZEND_END_ARG_INFO()