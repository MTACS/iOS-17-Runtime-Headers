
@interface VNCoreSceneUnderstandingDetector : VNDetector

+ (id)_newSaliencyHeatmapBoundingBoxGeneratorOptionsForOptions:(id)arg1;
+ (id)_specialCaseRecognizedObjectsDuplicationsForOriginatingRequestSpecifier:(id)arg1;
+ (id)allCityNatureIdentifiersWithConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)allClassificationIdentifiersWithConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)allRecognizedObjectIdentifiersWithConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)allSignificantEventIdentifiersWithConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (bool)handlesRequestClass:(Class)arg1 revision:(unsigned long long)arg2;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id*)arg2;

- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;
- (bool)needsMetalContext;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;

@end
