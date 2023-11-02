
@interface VNGuidedUpsamplingGenerator : VNDetector

+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;

- (bool)_renderCIImage:(id)arg1 toBuffer:(void*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 rowBytes:(unsigned long long)arg5 format:(unsigned int)arg6 vnciContextManager:(id)arg7 error:(id*)arg8;
- (struct __CVBuffer { }*)_renderCIImage:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(unsigned int)arg4 vnciContextManager:(id)arg5 error:(id*)arg6;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;

@end
