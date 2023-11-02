
@interface VNTorsoprintUpgradeDetector : VNEspressoprintUpgradeDetector

+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (Class)espressoprintClass;
+ (bool)isSupportedUpgradeFromPreviousEspressoprint:(id)arg1 toNewLowResolutionEspressoprint:(id)arg2;

- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;

@end
