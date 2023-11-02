
@interface VNCSUDetectionprintGenerator : VNDetector

+ (bool)_getCSUDetectionprintNetworkConfiguration:(id*)arg1 forConfigurationOptions:(id)arg2 error:(id*)arg3;
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id*)arg2;

- (id)_observationsFromNetworkOutput:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(id*)arg3;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (bool)needsMetalContext;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;

@end
