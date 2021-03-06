/* -*- c++ -*- */
/* 
 * Copyright 2017 Matt Hostetter.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_MISC_TAG_SHARE_H
#define INCLUDED_MISC_TAG_SHARE_H

#include <misc/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace misc {

    /*!
     * \brief <+description of block+>
     * \ingroup misc
     *
     */
    class MISC_API tag_share : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<tag_share> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of misc::tag_share.
       *
       * To avoid accidental use of raw pointers, misc::tag_share's
       * constructor is in a private implementation
       * class. misc::tag_share::make is the public interface for
       * creating new instances.
       */
      static sptr make(size_t sizeof_stream_item1, size_t sizeof_stream_item2);
    };

  } // namespace misc
} // namespace gr

#endif /* INCLUDED_MISC_TAG_SHARE_H */

