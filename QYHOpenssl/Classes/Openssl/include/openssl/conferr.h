/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef HEADER_CONFERR_H
# define HEADER_CONFERR_H

# ifndef HEADER_SYMHACKS_H
#  include <QYHOpenssl/symhacks.h>
# endif

# ifdef  __cplusplus
extern "C"
# endif
int ERR_load_CONF_strings(void);

/*
 * CONF function codes.
 */
# define CONF_F_CONF_DUMP_FP                              104
# define CONF_F_CONF_LOAD                                 100
# define CONF_F_CONF_LOAD_FP                              103
# define CONF_F_CONF_PARSE_LIST                           119
# define CONF_F_DEF_LOAD                                  120
# define CONF_F_DEF_LOAD_BIO                              121
# define CONF_F_GET_NEXT_FILE                             107
# define CONF_F_MODULE_ADD                                122
# define CONF_F_MODULE_INIT                               115
# define CONF_F_MODULE_LOAD_DSO                           117
# define CONF_F_MODULE_RUN                                118
# define CONF_F_NCONF_DUMP_BIO                            105
# define CONF_F_NCONF_DUMP_FP                             106
# define CONF_F_NCONF_GET_NUMBER_E                        112
# define CONF_F_NCONF_GET_SECTION                         108
# define CONF_F_NCONF_GET_STRING                          109
# define CONF_F_NCONF_LOAD                                113
# define CONF_F_NCONF_LOAD_BIO                            110
# define CONF_F_NCONF_LOAD_FP                             114
# define CONF_F_NCONF_NEW                                 111
# define CONF_F_PROCESS_INCLUDE                           116
# define CONF_F_SSL_MODULE_INIT                           123
# define CONF_F_STR_COPY                                  101

/*
 * CONF reason codes.
 */
# define CONF_R_ERROR_LOADING_DSO                         110
# define CONF_R_LIST_CANNOT_BE_NULL                       115
# define CONF_R_MISSING_CLOSE_SQUARE_BRACKET              100
# define CONF_R_MISSING_EQUAL_SIGN                        101
# define CONF_R_MISSING_INIT_FUNCTION                     112
# define CONF_R_MODULE_INITIALIZATION_ERROR               109
# define CONF_R_NO_CLOSE_BRACE                            102
# define CONF_R_NO_CONF                                   105
# define CONF_R_NO_CONF_OR_ENVIRONMENT_VARIABLE           106
# define CONF_R_NO_SECTION                                107
# define CONF_R_NO_SUCH_FILE                              114
# define CONF_R_NO_VALUE                                  108
# define CONF_R_NUMBER_TOO_LARGE                          121
# define CONF_R_RECURSIVE_DIRECTORY_INCLUDE               111
# define CONF_R_SSL_COMMAND_SECTION_EMPTY                 117
# define CONF_R_SSL_COMMAND_SECTION_NOT_FOUND             118
# define CONF_R_SSL_SECTION_EMPTY                         119
# define CONF_R_SSL_SECTION_NOT_FOUND                     120
# define CONF_R_UNABLE_TO_CREATE_NEW_SECTION              103
# define CONF_R_UNKNOWN_MODULE_NAME                       113
# define CONF_R_VARIABLE_EXPANSION_TOO_LONG               116
# define CONF_R_VARIABLE_HAS_NO_VALUE                     104

#endif
