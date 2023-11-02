
@interface VNE5RTBasedDetector : VNDetector {
    VisionCoreE5RTExecutionContext * _executionContext;
    VisionCoreE5RTInferenceFunctionDescriptor * _functionDescriptor;
}

+ (id)E5RTFunctionDescriptorForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)E5RTProgramLibraryCompilationOptionsForModelSource:(id)arg1 error:(id*)arg2;
+ (id)E5RTProgramLibraryForModelURL:(id)arg1 error:(id*)arg2;
+ (id)classificationIdentifiersForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (unsigned long long)defaultImageCropAndScaleOption;
- (id)newE5RTExecutionContextForFunctionDescriptor:(id)arg1 configurationOptions:(id)arg2 error:(id*)arg3;
- (id)newE5RTExecutionInputsForFunctionDescriptor:(id)arg1 croppedPixelBuffer:(struct __CVBuffer { }*)arg2 options:(id)arg3 error:(id*)arg4;
- (id)observationsFromE5RTExecutionOutputs:(id)arg1 forFunctionDescriptor:(id)arg2 originatingRequestSpecifier:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;

@end
