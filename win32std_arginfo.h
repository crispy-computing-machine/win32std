// ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(name, return_reference, required_num_args, MAY_BE_STRING|MAY_BE_BOOL)
// ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(name, return_reference, required_num_args, type, allow_null)

//		ZEND_ARG_TYPE_INFO(pass_by_ref, name, type_hint, allow_null)
// 		ZEND_ARG_TYPE_MASK(pass_by_ref, name, MAY_BE_STRING|MAY_BE_BOOL, default_value)

//		ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(pass_by_ref, name, type_hint, allow_null, default_value)
// 		ZEND_ARG_INFO_WITH_DEFAULT_VALUE(pass_by_ref, name, default_value)

// ZEND_END_ARG_INFO()

// function res_get($res_rc, $type, $name, $lang){}
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_res_get, 0, 4, MAY_BE_STRING|MAY_BE_BOOL, 0)
ZEND_END_ARG_INFO()

// function res_list($res_rc, $type){}
ZEND_BEGIN_ARG_INFO_EX(arginfo_res_list, 0, 0, 2)
ZEND_END_ARG_INFO()

// function res_list_type($res_rc, $as_string){}
ZEND_BEGIN_ARG_INFO_EX(arginfo_res_list_type, 0, 0, 2)
ZEND_END_ARG_INFO()

// function res_open($module){}
ZEND_BEGIN_ARG_INFO_EX(arginfo_res_open, 0, 0, 1)
ZEND_END_ARG_INFO()

// function res_close($res_rc){}
ZEND_BEGIN_ARG_INFO_EX(arginfo_res_close, 0, 0, 1)
ZEND_END_ARG_INFO()

// function res_set($module, $type, $name, $data){}
ZEND_BEGIN_ARG_INFO_EX(arginfo_res_set, 0, 0, 4)
ZEND_END_ARG_INFO()

// function win_play_wav($file, $loop){}
ZEND_BEGIN_ARG_INFO_EX(arginfo_win_play_wav, 0, 0, 2)
ZEND_END_ARG_INFO()

// function win_beep($str){}
ZEND_BEGIN_ARG_INFO_EX(arginfo_win_beep, 0, 0, 1)
ZEND_END_ARG_INFO()

// function win_message_box($text, $type, $caption){}
ZEND_BEGIN_ARG_INFO_EX(arginfo_win_message_box, 0, 0, 3)
ZEND_END_ARG_INFO()

// function win_create_link($file, $link, $args, $descr, $workingdir){}
ZEND_BEGIN_ARG_INFO_EX(arginfo_win_create_link, 0, 0, 5)
ZEND_END_ARG_INFO()

// function win_browse_folder($dir, $caption){}
ZEND_BEGIN_ARG_INFO_EX(arginfo_win_browse_folder, 0, 0, 2)
ZEND_END_ARG_INFO()

// function win_browse_file($open, $path, $file, $ext, $zfilter){}
ZEND_BEGIN_ARG_INFO_EX(arginfo_win_browse_file, 0, 0, 5)
ZEND_END_ARG_INFO()

// function res_exists($type, $name, $lang){}
ZEND_BEGIN_ARG_INFO_EX(arginfo_res_exists, 0, 0, 3)
ZEND_END_ARG_INFO()