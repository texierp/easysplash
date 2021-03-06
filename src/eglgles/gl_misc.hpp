/*
 * EasySplash - tool for animated splash screens
 * Copyright (C) 2014  O.S. Systems Software LTDA.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 */


#ifndef EASYSPLASH_GL_MISC_HPP
#define EASYSPLASH_GL_MISC_HPP

#include <string>
#include "opengl.hpp"


namespace easysplash
{


std::string egl_get_last_error_string(void);
std::string egl_get_error_string(EGLint err);
bool gles_check_gl_error(std::string const &p_category, std::string const &p_label);


} // namespace easysplash end


#endif
