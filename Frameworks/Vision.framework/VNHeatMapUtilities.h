
@interface VNHeatMapUtilities : NSObject

+ (id)boundingBoxesFromFloat32ImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 thresholds:(id)arg2 error:(id*)arg3;
+ (id)boundingBoxesFromFloat32ImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 thresholds:(id)arg2 relativeToMaximum:(bool)arg3 applySmoothing:(bool)arg4 originalImageSize:(struct CGSize { double x1; double x2; })arg5 sigmaX:(float)arg6 sigmaY:(float)arg7 nStd:(float)arg8 error:(id*)arg9;
+ (id)boundingBoxesFromFloat32PixelBuffer:(struct __CVBuffer { }*)arg1 thresholds:(id)arg2 relativeToMaximum:(bool)arg3 applySmoothing:(bool)arg4 originalImageSize:(struct CGSize { double x1; double x2; })arg5 sigmaX:(float)arg6 sigmaY:(float)arg7 nStd:(float)arg8 error:(id*)arg9;
+ (float)maximumValueFromFloat32ImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
+ (id)significantRegionsFromFloat32ImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 threshold:(float)arg2;
+ (id)significantRegionsFromFloat32ImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 threshold:(float)arg2 relativeToMaximum:(bool)arg3;
+ (id)significantRegionsFromFloat32PixelBuffer:(struct __CVBuffer { }*)arg1 threshold:(float)arg2 relativeToMaximum:(bool)arg3 error:(id*)arg4;
+ (bool)smoothedFloat32ImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 fromImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2 originalImageSize:(struct CGSize { double x1; double x2; })arg3 sigmaX:(float)arg4 sigmaY:(float)arg5 nStd:(float)arg6;

@end
