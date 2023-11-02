
@interface VNSaliencyHeatmapBoundingBoxGenerator : VNEspressoModelFileBasedDetector

+ (id)calculateSaliencyBoundingBoxesForDetectorType:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 configurationOptions:(id)arg3 originatingRequestSpecifier:(id)arg4 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 qosClass:(unsigned int)arg6 warningRecorder:(id)arg7 error:(id*)arg8;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;

- (struct __CVBuffer { }*)_createPixelBufferOfWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 fromImageBuffer:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)_observationsForOneComponent32FloatPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 error:(id*)arg4;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;

@end
