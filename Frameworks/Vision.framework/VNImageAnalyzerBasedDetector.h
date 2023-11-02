
@interface VNImageAnalyzerBasedDetector : VNDetector {
    NSArray * _cachedSupportedClassificationIdentifiers;
    struct shared_ptr<vision::mod::ImageAnalyzer> { 
        struct ImageAnalyzer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _imageAnalyzer;
    struct _Geometry2D_size2D_ { 
        float height; 
        float width; 
    }  _networkRequiredInputImageSize;
    bool  _networkUsesAnisotropicScaling;
}

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)inputImageBlobNameForConfiguration:(id)arg1;
+ (id)modelPathForConfiguration:(id)arg1 error:(id*)arg2;
+ (bool)providesSceneLabelsForConfiguration:(id)arg1;
+ (bool)providesSegmentationLabelsForConfiguration:(id)arg1;
+ (id)sceneLabelsFilePathForConfiguration:(id)arg1 error:(id*)arg2;
+ (id)segmentationLabelsFilePathForConfiguration:(id)arg1 error:(id*)arg2;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)configureImageAnalyzerOptions:(void*)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (unsigned long long)defaultImageCropAndScaleOption;
- (struct CGSize { double x1; double x2; })inputImageSize;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void*)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id*)arg5;
- (id)observationsForSceneLabelsFromLastAnalysisOfImageAnalyzer:(void*)arg1 identifierAcceptingBlock:(id /* block */)arg2 operationPointsProvider:(id)arg3 originatingRequestSpecifier:(id)arg4 qosClass:(unsigned int)arg5 error:(id*)arg6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)supportedClassificationIdentifiersAcceptedByBlock:(id /* block */)arg1 error:(id*)arg2;

@end
