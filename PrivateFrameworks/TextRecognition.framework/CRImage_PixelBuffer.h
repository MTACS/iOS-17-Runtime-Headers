
@interface CRImage_PixelBuffer : CRImage

+ (struct __CVBuffer { }*)_convertPixelBuffer:(struct __CVBuffer { }*)arg1 toFormat:(unsigned int)arg2 iosurfaceBacking:(bool)arg3;
+ (void)drawVerticalLineAtXOffset:(double)arg1 image:(id)arg2;

- (struct __CVBuffer { }*)_pixelBufferFromUrl:(id)arg1;
- (struct CGImage { }*)cgImage;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })createFloatBuffer;
- (void)dealloc;
- (unsigned long long)height;
- (id)imageByApplyingBinaryMask:(id)arg1;
- (id)imageByConvertingToColorSpace:(int)arg1;
- (id)imageByConvertingToColorSpace:(int)arg1 forceDataCopy:(bool)arg2;
- (id)imageByCorrectingFromOrientation:(unsigned int)arg1;
- (id)imageByCroppingRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageByDilating;
- (id)imageByInvertingIntensity;
- (id)imageByOverlayingRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(long long)arg2;
- (id)imageByOverlayingRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(long long)arg2 lineWidth:(double)arg3 red:(double)arg4 green:(double)arg5 blue:(double)arg6 alpha:(double)arg7;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 paddingMode:(unsigned long long)arg3;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 paddingMode:(unsigned long long)arg3 alignCenter:(bool)arg4;
- (id)imageByRotating180;
- (id)imageByRotating90CW;
- (id)imageByScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithContentsOfURL:(id)arg1 toColorSpace:(int)arg2;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct __CVBuffer { }*)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize { double x1; double x2; })arg2;
- (struct __CVBuffer { }*)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize { double x1; double x2; })arg2 adjustedToSize:(struct CGSize { double x1; double x2; }*)arg3;
- (struct __CVBuffer { }*)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize { double x1; double x2; })arg2 adjustedToSize:(struct CGSize { double x1; double x2; }*)arg3 paddingMode:(unsigned long long)arg4;
- (struct __CVBuffer { }*)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize { double x1; double x2; })arg2 adjustedToSize:(struct CGSize { double x1; double x2; }*)arg3 paddingMode:(unsigned long long)arg4 format:(unsigned int)arg5;
- (struct __CVBuffer { }*)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize { double x1; double x2; })arg2 adjustedToSize:(struct CGSize { double x1; double x2; }*)arg3 paddingMode:(unsigned long long)arg4 format:(unsigned int)arg5 hardwareAcceleration:(bool)arg6 iosurfaceBacking:(bool)arg7;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })vImage;
- (unsigned long long)width;
- (void)writeToFile:(id)arg1;

@end
