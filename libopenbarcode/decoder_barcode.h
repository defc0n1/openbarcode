/**
--------------------------------------------------------------------------------
-   Module      :   decoder_barcode.cpp
-   Description :   1D and 2D C++ Barcode Library
-   Author      :   Tim Zaman, 16-AUG-2016
--------------------------------------------------------------------------------
-   Copyright (c) 2016 Tim Zaman
-   
-   Permission to use, copy, modify, distribute, and sell this software
-   for any purpose is hereby granted without fee, provided
-   that (i) the above copyright notices and this permission notice appear in
-   all copies of the software and related documentation.
-   
-   THE SOFTWARE IS PROVIDED "AS-IS" AND WITHOUT WARRANTY OF ANY KIND,
-   EXPRESS, IMPLIED OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY
-   WARRANTY OF MERCHANTABILITY OR FITNESS FOR A PAR-TICULAR PURPOSE.
 --------------------------------------------------------------------------------
*/

#ifndef LIBOPENBARCODE_DECODER_BARCODE_H_
#define LIBOPENBARCODE_DECODER_BARCODE_H_

#include <string>
#include <vector>

#include <opencv2/opencv.hpp>

#include "libopenbarcode/options.h"  
#include "libopenbarcode/decoder.h"  
#include "libopenbarcode/openbarcode_version.h"

namespace openbarcode {

class DecoderBarcode : public Decoder {

 public:
    explicit DecoderBarcode(Options *);
    virtual ~DecoderBarcode();

    int Decode(cv::Mat, openbarcode::code *) override;

 protected:
    virtual int DecodeBinary(cv::Mat, openbarcode::code *);

 private:
    DISALLOW_COPY_AND_ASSIGN(DecoderBarcode);
};

} // namespace openbarcode

#endif // LIBOPENBARCODE_DECODER_BARCODE_H_
