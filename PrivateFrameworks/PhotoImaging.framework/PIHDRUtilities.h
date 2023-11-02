
@interface PIHDRUtilities : NSObject

+ (struct __CVBuffer { }*)_newHLGPixelBufferOfSize:(struct CGSize { double x1; double x2; })arg1;
+ (bool)_renderImage:(id)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2;
+ (struct __CVBuffer { }*)newHLGPixelBufferFromSDRImage:(struct CGImage { }*)arg1;
+ (void)recycleHLGPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
