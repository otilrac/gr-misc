/* -*- c++ -*- */

#define MISC_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "misc_swig_doc.i"

%{
#include "misc/complex_to_complex_mth_power.h"
#include "misc/m_ary_slicer.h"
#include "misc/tag_share.h"
#include "misc/tag_max.h"
%}


%include "misc/complex_to_complex_mth_power.h"
GR_SWIG_BLOCK_MAGIC2(misc, complex_to_complex_mth_power);
%include "misc/m_ary_slicer.h"
GR_SWIG_BLOCK_MAGIC2(misc, m_ary_slicer);
%include "misc/tag_share.h"
GR_SWIG_BLOCK_MAGIC2(misc, tag_share);
%include "misc/tag_max.h"
GR_SWIG_BLOCK_MAGIC2(misc, tag_max);
