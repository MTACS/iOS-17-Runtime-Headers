
@interface IHKImageUtils : NSObject

+ (struct CGImage { }*)CopyCGImageTosRGB:(struct CGImage { }*)arg1;
+ (struct CGImage { }*)convertCGImageToBGRA_sRGB:(struct CGImage { }*)arg1;
+ (struct __CVBuffer { }*)convertCGImageToBGRA_sRGB_PixelBuffer:(struct CGImage { }*)arg1;
+ (void)rescaleCVPixelBuffers:(struct __CVBuffer { }*)arg1 dest:(struct __CVBuffer { }*)arg2;

@end
