
@interface ADMetalUtils : NSObject

+ (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { }*)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5 metalDevice:(id)arg6 error:(id*)arg7;
+ (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 metalDevice:(id)arg2;
+ (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(struct CGSize { double x1; double x2; })arg3 plane:(unsigned long long)arg4 metalDevice:(id)arg5 error:(id*)arg6;
+ (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 plane:(unsigned long long)arg2 metalDevice:(id)arg3 error:(id*)arg4;
+ (unsigned long long)bytesPerPixelForTextureFormat:(unsigned long long)arg1;
+ (void)dispatchCommandEncoder:(id)arg1 pipeline:(id)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4;
+ (unsigned long long)getMTLPixelFormat:(unsigned int)arg1;
+ (id)textureForSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned int)arg2 metalDevice:(id)arg3;

@end
