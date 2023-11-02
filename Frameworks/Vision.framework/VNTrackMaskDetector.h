
@interface VNTrackMaskDetector : VNEspressoModelFileBasedDetector {
    <MTLComputePipelineState> * _applyMaskComputeState;
    BGRBilinearUpsampler * _bilinearUpsampler;
    VNMetalContext * _postProcessingMetalContext;
    struct __CVBuffer { } * highResMaskPixelBuffer;
    VNEspressoResources * initializationModel;
    VNEspressoResources * updateModel;
}

+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_loadModelFromFileName:(id)arg1 inputBlobNames:(id)arg2 outputBlobNames:(id)arg3 forComputeDevice:(id)arg4 configurationOptions:(id)arg5 error:(id*)arg6;
- (bool)_removeBackgroundFromPixelBuffer:(void *)arg1 toPixelBuffer:(void *)arg2 usingMask:(void *)arg3 offset:(void *)arg4 error:(void *)arg5; // needs 5 arg types, found 4: struct __CVBuffer { }*, struct __CVBuffer { }*, struct __CVBuffer { }*, id*
- (bool)_runInitializerModelWithLockedPixelBuffer:(struct __CVBuffer { }*)arg1 forState:(id)arg2 error:(id*)arg3;
- (bool)_runUpdateModelWithLockedPixelBuffer:(struct __CVBuffer { }*)arg1 forState:(id)arg2 outputQualityEspressoBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg3 error:(id*)arg4;
- (struct __CVBuffer { }*)_upsampleLowResMask:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 reference:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (void)dealloc;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;

@end
