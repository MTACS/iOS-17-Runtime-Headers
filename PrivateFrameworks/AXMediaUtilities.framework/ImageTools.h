
@interface ImageTools : NSObject

+ (long long)create420YCbCr8BufferFromPlanar8Buffer:(void*)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 toLumaBuffer:(void*)arg5 withBytesPerRowLuma:(unsigned long long)arg6 andToChromaBuffer:(void*)arg7 withBytesPerRowChroma:(unsigned long long)arg8;
+ (long long)create420YCbCr8BufferFromRGB8Buffer:(void*)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 andAlphaFirst:(bool)arg5 toLumaBuffer:(void*)arg6 withBytesPerRowLuma:(unsigned long long)arg7 andToChromaBuffer:(void*)arg8 withBytesPerRowChroma:(unsigned long long)arg9;
+ (struct CGContext { }*)createARGBBitmapContextWithImage:(struct CGImage { }*)arg1;
+ (long long)createRGB8BufferFrom420Y8BiPlanarBuffer:(void*)arg1 withBytesPerRowLuma:(unsigned long long)arg2 andFrom420CbCr8Buffer:(void*)arg3 withBytesPerRowChroma:(unsigned long long)arg4 andWithWidth:(int)arg5 andWithHeight:(int)arg6 andAlphaFirst:(bool)arg7 toRGB8Buffer:(void*)arg8 withBytesPerRowDst:(unsigned long long)arg9;
+ (long long)createRGB8BufferFrom420Y8PlanarBuffer:(void*)arg1 withBytesPerRowY:(unsigned long long)arg2 andFrom420Cb8Buffer:(void*)arg3 withBytesPerRowCb:(unsigned long long)arg4 andFrom420Cr8Buffer:(void*)arg5 withBytesPerRowCr:(unsigned long long)arg6 andWithWidth:(int)arg7 andWithHeight:(int)arg8 andAlphaFirst:(bool)arg9 toRGB8Buffer:(void*)arg10 withBytesPerRowDst:(unsigned long long)arg11;
+ (long long)extractLumaFromBGRA8Buffer:(void*)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 toBuffer:(void*)arg5 withBytesPerRow:(unsigned long long)arg6;
+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })getVImageBufferFromCGImage:(struct CGImage { }*)arg1 error:(id*)arg2;
+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })getVImageBufferFromCGImageLuma:(struct CGImage { }*)arg1 error:(id*)arg2;
+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })getVImageBufferFromCVPixelBuffer:(struct __CVBuffer { }*)arg1 channel:(int)arg2 error:(id*)arg3;
+ (id)getValueForTag:(id)arg1 inObject:(id)arg2;
+ (id)getValueForTag:(id)arg1 inObject:(id)arg2 depth:(int)arg3 parent:(id)arg4;
+ (struct __CFString { }*)guessType:(id)arg1;
+ (struct CGImage { }*)loadCGImageEXIFRotatedFromData:(id)arg1 error:(id*)arg2;
+ (struct CGImage { }*)loadCGImageEXIFRotatedFromSource:(struct CGImageSource { }*)arg1 error:(id*)arg2;
+ (struct CGImage { }*)loadCGImageEXIFRotatedFromURL:(id)arg1 error:(id*)arg2;
+ (struct CGImage { }*)loadCGImageFromURL:(id)arg1 error:(id*)arg2;
+ (struct __CVBuffer { }*)loadCVPixelBuffer420YpCbCr8FromURL:(id)arg1 error:(id*)arg2;
+ (struct __CVBuffer { }*)loadCVPixelBufferARGB8FromURL:(id)arg1 error:(id*)arg2;
+ (void*)loadRawBufferFromData:(id)arg1 width:(unsigned int*)arg2 height:(unsigned int*)arg3 rowBytes:(unsigned int*)arg4 error:(id*)arg5;
+ (void*)loadRawBufferFromURL:(id)arg1 width:(unsigned int*)arg2 height:(unsigned int*)arg3 rowBytes:(unsigned int*)arg4 error:(id*)arg5;
+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)loadVImageBufferEXIFRotatedFromData:(id)arg1 error:(id*)arg2;
+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)loadVImageBufferEXIFRotatedFromURL:(id)arg1 error:(id*)arg2;
+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)loadVImageBufferFromData:(id)arg1 isRaw:(bool)arg2 lumaOnly:(bool)arg3 error:(id*)arg4;
+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)loadVImageBufferFromURL:(id)arg1 lumaOnly:(bool)arg2 error:(id*)arg3;
+ (struct CGImage { }*)newCGImageFromPlanar8VImageBuffer:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 error:(id*)arg2;
+ (struct CGImage { }*)newCGImageFromRGBA8VImageBuffer:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 error:(id*)arg2;
+ (id)numberOfChannelsInImageData:(id)arg1 error:(id*)arg2;
+ (struct CGImage { }*)rotateImage:(struct CGImage { }*)arg1 accordingToEXIFOrientation:(int)arg2;
+ (struct CGImage { }*)rotateImage:(struct CGImage { }*)arg1 withAngle:(float)arg2 andXFlip:(bool)arg3 andYFlip:(bool)arg4;
+ (id)saveCGImage:(const struct CGImage { }*)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id*)arg4;
+ (id)saveCVPixelBuffer420YpCbCr8:(struct __CVBuffer { }*)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id*)arg4;
+ (id)saveCVPixelBufferPlane8:(int)arg1 from:(struct __CVBuffer { }*)arg2 withName:(id)arg3 inFolder:(id)arg4 error:(id*)arg5;
+ (id)saveCVPixelBufferRGBA8:(struct __CVBuffer { }*)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id*)arg4;
+ (id)saveRawBuffer:(void*)arg1 withWidth:(unsigned int)arg2 andHeight:(unsigned int)arg3 andRowBytes:(unsigned int)arg4 withName:(id)arg5 inFolder:(id)arg6 error:(id*)arg7;
+ (id)saveVImageBufferPlanar8:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id*)arg4;
+ (id)saveVImageBufferPlanar8ToData:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 deriveTypeFromFileName:(id)arg2 error:(id*)arg3;
+ (id)saveVImageBufferPlanar8ToJPEGData:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 withCompressionQuality:(float)arg2 error:(id*)arg3;
+ (id)saveVImageBufferRGBA8:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id*)arg4;
+ (id)saveVImageBufferRGBA8ToData:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 deriveTypeFromFileName:(id)arg2 error:(id*)arg3;
+ (id)saveVImageBufferRGBA8ToJPEGData:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 withCompressionQuality:(float)arg2 error:(id*)arg3;
+ (bool)writeImage:(struct CGImage { }*)arg1 toFile:(id)arg2 error:(id*)arg3;
+ (id)writeImageToData:(struct CGImage { }*)arg1 type:(struct __CFString { }*)arg2 error:(id*)arg3;

@end
