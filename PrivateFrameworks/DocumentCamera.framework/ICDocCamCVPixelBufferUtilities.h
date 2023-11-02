
@interface ICDocCamCVPixelBufferUtilities : NSObject

+ (id)coreImageForPixelBuffer:(struct __CVBuffer { }*)arg1 colorSpace:(struct CGColorSpace { }*)arg2;
+ (struct CGImage { }*)createImageWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (struct CGImage { }*)createImageWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 colorSpace:(struct CGColorSpace { }*)arg2;
+ (struct CGImage { }*)createImageWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 colorSpace:(struct CGColorSpace { }*)arg2 copyMemory:(bool)arg3;

@end
