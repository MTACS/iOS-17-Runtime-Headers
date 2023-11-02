
@interface JasperPointCloudUtils : NSObject

+ (int)calculateJasperPointsPositionInImage:(id)arg1 outputJasperPointArray:(double*)arg2 confidenceLogicOption:(int)arg3;
+ (void)croppedAndScaleJasperPoints:(double*)arg1 inputJasperPointArraySize:(int)arg2 cropX:(int)arg3 cropY:(int)arg4 scaleX:(double)arg5 scaleY:(double)arg6 outputVector:(void*)arg7;
+ (int)dropIllegalJasperPoints:(struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })arg1 depthMaxLimitation:(int)arg2 depthMinLimitation:(int)arg3 imageMaxWidth:(int)arg4 imageMaxHeight:(int)arg5 outputJasperPointsFloatArray:(float*)arg6 outputNumberOfUniquiePoints:(unsigned int*)arg7;

@end
