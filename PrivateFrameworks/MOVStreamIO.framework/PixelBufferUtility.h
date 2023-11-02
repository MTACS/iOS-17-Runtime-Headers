
@interface PixelBufferUtility : NSObject

+ (bool)concatPixelBuffer:(struct __CVBuffer { }*)arg1 withPixelBuffer:(struct __CVBuffer { }*)arg2 targetPixelBuffer:(struct __CVBuffer { }*)arg3;
+ (bool)copyAlphaChannelOfBuffer:(struct __CVBuffer { }*)arg1 toMonochromeBuffer:(struct __CVBuffer { }*)arg2;
+ (bool)copyAlphaChannelOfBuffer:(struct __CVBuffer { }*)arg1 touint16Data:(unsigned short*)arg2;
+ (bool)copyData:(id)arg1 toNonPlanarPixelBuffer:(struct __CVBuffer { }*)arg2;
+ (bool)copyData:(id)arg1 toPlanarPixelBuffer:(struct __CVBuffer { }*)arg2 toPlane:(unsigned long long)arg3;
+ (bool)copyFromPixelBuffer:(struct __CVBuffer { }*)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2 andShiftBits:(int)arg3;
+ (bool)copyMonochromeBuffer:(struct __CVBuffer { }*)arg1 toAlphaChannelOfBuffer:(struct __CVBuffer { }*)arg2;
+ (id)copyNonPlanarPixelBufferData:(struct __CVBuffer { }*)arg1;
+ (bool)copyPixelBuffer:(struct __CVBuffer { }*)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2 bytesPerPixel:(unsigned long long)arg3;
+ (id)copyPixelBufferData:(struct __CVBuffer { }*)arg1 ofPlane:(unsigned long long)arg2;
+ (bool)copyuint16Data:(unsigned short*)arg1 toAlphaChannelOfBuffer:(struct __CVBuffer { }*)arg2;
+ (struct __CVBuffer { }*)create4444AYpCbCr16PixelBufferFillAlphaWithData:(struct __CFData { }*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
+ (struct __CVPixelBufferPool { }*)createNewL008PixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer { }*)arg1 minimumBufferCount:(unsigned long long)arg2;
+ (struct __CVPixelBufferPool { }*)createNewL010PixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer { }*)arg1 minimumBufferCount:(unsigned long long)arg2;
+ (struct __CFDictionary { }*)createPixelBufferAttributesWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 extendedPixelsPerRow:(unsigned int)arg3 pixelFormat:(int)arg4 bytesPerRowAlignment:(unsigned int)arg5 planeAlignment:(unsigned int)arg6;
+ (struct __CFDictionary { }*)createPixelBufferAttributesWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 pixelFormat:(int)arg3 bytesPerRow:(unsigned int)arg4;
+ (struct __CFDictionary { }*)createPixelBufferAttributesWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 pixelFormat:(int)arg3 bytesPerRows:(id)arg4;
+ (struct __CVPixelBufferPool { }*)createPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 bytesPerRow:(unsigned long long)arg4 minBufferCount:(unsigned long long)arg5;
+ (struct __CVPixelBufferPool { }*)createPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 bytesPerRows:(id)arg4 minBufferCount:(unsigned long long)arg5;
+ (struct __CVPixelBufferPool { }*)createPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 extendedPixelsPerRow:(unsigned long long)arg4 minBufferCount:(unsigned long long)arg5;
+ (struct __CVBuffer { }*)createRawPixelBufferWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 extendedRows:(unsigned int)arg3 extendedPixelsPerRow:(unsigned int)arg4 pixelFormat:(int)arg5 bytesPerRowAlignment:(unsigned int)arg6 planeAlignment:(unsigned int)arg7 bufferCacheMode:(unsigned int)arg8;
+ (struct __CVBuffer { }*)createRawPixelBufferWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 pixelFormat:(int)arg3 bytesPerRow:(unsigned int)arg4;
+ (unsigned long long)extendedPixelsPerRowOfPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (long long)extendedPixelsRightForPlanarBufferWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 format:(unsigned int)arg4;
+ (bool)fillPlaneOfPixelBuffer:(struct __CVBuffer { }*)arg1 planeIndex:(int)arg2 withValue:(unsigned short)arg3;
+ (id)histogramOf8BitBuffer:(struct __CVBuffer { }*)arg1;
+ (bool)isPixelBufferCompandedRawBayer:(struct __CVBuffer { }*)arg1;
+ (bool)isPixelBufferRawBayer:(struct __CVBuffer { }*)arg1;
+ (bool)isPixelFormatCompandedRawBayer:(unsigned int)arg1;
+ (bool)isPixelFormatRawBayer:(unsigned int)arg1;
+ (bool)joinCompandedWarholBuffer:(struct __CVBuffer { }*)arg1 intoCompandedBayerBuffer:(struct __CVBuffer { }*)arg2;
+ (bool)joinWarholBuffer:(struct __CVBuffer { }*)arg1 intoBayerBuffer:(struct __CVBuffer { }*)arg2 shiftBitsRightBy:(int)arg3 msbReplication:(bool)arg4;
+ (bool)joinYUVBuffer:(struct __CVBuffer { }*)arg1 intoRawBayerPixelBuffer:(struct __CVBuffer { }*)arg2 shiftBitsLeftBy:(int)arg3 msbReplication:(bool)arg4;
+ (struct __CVBuffer { }*)newPixelBufferRefCopy:(struct __CVBuffer { }*)arg1;
+ (struct __CVBuffer { }*)newPixelBufferRefCopy:(struct __CVBuffer { }*)arg1 attachmentKeysToCopy:(id)arg2;
+ (struct __CVBuffer { }*)newRawBayerBufferFromYUVPixelBuffer:(struct __CVBuffer { }*)arg1 withPixelBufferPool:(struct __CVPixelBufferPool { }*)arg2 msbReplication:(bool)arg3;
+ (struct __CVBuffer { }*)newWarholBufferFromCompandedRawBayerPixelBuffer:(struct __CVBuffer { }*)arg1 withPixelBufferPool:(struct __CVPixelBufferPool { }*)arg2;
+ (struct __CVBuffer { }*)newWarholBufferFromRawBayerPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (struct __CVBuffer { }*)newWarholBufferFromRawBayerPixelBuffer:(struct __CVBuffer { }*)arg1 withPixelBufferPool:(struct __CVPixelBufferPool { }*)arg2;
+ (struct __CVBuffer { }*)newYUVBufferFromRawBayerPixelBuffer:(struct __CVBuffer { }*)arg1 withPixelBufferPool:(struct __CVPixelBufferPool { }*)arg2;
+ (long long)numberOfPlanesForPixelFormatType:(unsigned int)arg1;
+ (struct __CVBuffer { }*)pixelBufferFromPool:(struct __CVPixelBufferPool { }*)arg1;
+ (unsigned long long)pixelBufferSizeWithPadding:(struct __CVBuffer { }*)arg1;
+ (id)rangesOf8BitBuffer:(struct __CVBuffer { }*)arg1;
+ (struct __CVBuffer { }*)readFrameFromFile:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 pixelFormat:(unsigned int)arg4;
+ (id)sharedBytesPerPixelLookUp;
+ (bool)splitBayerBuffer:(struct __CVBuffer { }*)arg1 intoWarholPixelBuffer:(struct __CVBuffer { }*)arg2 shiftBitsLeftBy:(int)arg3;
+ (bool)splitBayerBuffer:(struct __CVBuffer { }*)arg1 intoYUVPixelBuffer:(struct __CVBuffer { }*)arg2 shiftBitsLeftBy:(int)arg3;
+ (bool)splitCompandedBayerBuffer:(struct __CVBuffer { }*)arg1 intoCompandedWarholPixelBuffer:(struct __CVBuffer { }*)arg2;
+ (bool)verticallySplitPixelBuffer:(struct __CVBuffer { }*)arg1 intoTopPixelBuffer:(struct __CVBuffer { }*)arg2 bottomPixelBuffer:(struct __CVBuffer { }*)arg3;
+ (void)writeBuffer:(const char *)arg1 ofSize:(unsigned long long)arg2 toFile:(id)arg3;
+ (bool)writeBuffer:(struct __CVBuffer { }*)arg1 toFile:(id)arg2;

@end
