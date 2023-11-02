
@interface HMIVisionUtilities : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applyPadding:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOriginalSize:(struct CGSize { double x1; double x2; })arg2 padding:(struct CGSize { double x1; double x2; })arg3;
+ (id)createJPEGDataFromPixelBuffer:(struct __CVBuffer { }*)arg1 scale:(float)arg2 encodeQuality:(float)arg3 error:(id*)arg4;
+ (struct __CVBuffer { }*)createPixelBufferFromImageData:(id)arg1 error:(id*)arg2;
+ (struct __CVBuffer { }*)createPixelBufferFromJPEGData:(id)arg1 error:(id*)arg2;
+ (struct __CVBuffer { }*)createPixelBufferFromJPEGDataProvider:(struct CGDataProvider { }*)arg1 error:(id*)arg2;
+ (struct __CVBuffer { }*)createPixelBufferFromJPEGPath:(id)arg1 error:(id*)arg2;
+ (struct __CVBuffer { }*)createPixelBufferWithSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned int)arg2 useIOSurface:(bool)arg3;
+ (struct __CVBuffer { }*)cropPixelBuffer:(struct __CVBuffer { }*)arg1 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imposeMinSizeFor:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOriginalSize:(struct CGSize { double x1; double x2; })arg2 minCrop:(struct CGSize { double x1; double x2; })arg3;
+ (id)logCategory;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maintainAspectRatio:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 originalSize:(struct CGSize { double x1; double x2; })arg2 ratioThreshold:(float)arg3;
+ (void)releaseCachedVisionResources;
+ (struct __CVBuffer { }*)resizePixelBuffer:(struct __CVBuffer { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 error:(id*)arg3;
+ (struct __CVBuffer { }*)resizePixelBuffer:(struct __CVBuffer { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 pixelFormat:(unsigned int)arg3 options:(long long)arg4 error:(id*)arg5;
+ (struct __CVBuffer { }*)transferPixelBuffer:(struct __CVBuffer { }*)arg1 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 pixelFormat:(unsigned int)arg4 options:(long long)arg5 error:(id*)arg6;
+ (struct __CVBuffer { }*)transferPixelBuffer:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned int)arg2 options:(long long)arg3 error:(id*)arg4;
+ (struct __CVBuffer { }*)transferPixelBuffer:(struct __CVBuffer { }*)arg1 rotationAngle:(float)arg2 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 size:(struct CGSize { double x1; double x2; })arg4 precision:(unsigned long long)arg5 error:(id*)arg6;

@end
