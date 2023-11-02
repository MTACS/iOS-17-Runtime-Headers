
@interface VNEspressoModelFileBasedDetector : VNDetector {
    VNEspressoResources * _espressoResources;
    unsigned long long  _inputImageAspectRatioHandling;
    unsigned long long  _networkRequiredInputImageHeight;
    unsigned long long  _networkRequiredInputImageWidth;
}

@property (nonatomic, readonly) VNEspressoResources *espressoResources;
@property (nonatomic, readonly) unsigned long long inputImageAspectRatioHandling;
@property (nonatomic, readonly) unsigned long long networkRequiredInputImageHeight;
@property (nonatomic, readonly) unsigned long long networkRequiredInputImageWidth;

+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelPathForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)_bindBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 bindPtr:(int)arg4 error:(id*)arg5;
- (bool)_bindBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 bindPtr:(int)arg4 forModel:(id)arg5 error:(id*)arg6;
- (bool)_bindBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 error:(id*)arg4;
- (bool)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id*)arg2;
- (bool)bindBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 toNetworkInputBlobName:(id)arg2 error:(id*)arg3;
- (bool)bindBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 toNetworkInputBlobName:(id)arg2 forModel:(id)arg3 error:(id*)arg4;
- (bool)bindBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 toNetworkOutputBlobName:(id)arg2 error:(id*)arg3;
- (bool)bindBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 toNetworkOutputBlobName:(id)arg2 forModel:(id)arg3 error:(id*)arg4;
- (bool)bindClientBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 toNetworkInputBlobName:(id)arg2 error:(id*)arg3;
- (bool)bindClientBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 toNetworkInputBlobName:(id)arg2 forModel:(id)arg3 error:(id*)arg4;
- (bool)bindLockedPixelBuffer:(struct __CVBuffer { }*)arg1 toNetworkInputBlobName:(id)arg2 error:(id*)arg3;
- (bool)bindLockedPixelBuffer:(struct __CVBuffer { }*)arg1 toNetworkInputBlobName:(id)arg2 forModel:(id)arg3 error:(id*)arg4;
- (bool)bindPixelBuffer:(struct __CVBuffer { }*)arg1 toNetworkBlobName:(id)arg2 error:(id*)arg3;
- (bool)bindPixelBuffer:(struct __CVBuffer { }*)arg1 toNetworkBlobName:(id)arg2 forModel:(id)arg3 error:(id*)arg4;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;
- (id)espressoResources;
- (bool)executePlanAndReturnError:(id*)arg1;
- (bool)executePlanForModel:(id)arg1 error:(id*)arg2;
- (bool)getWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id*)arg4;
- (unsigned long long)inputImageAspectRatioHandling;
- (unsigned long long)networkRequiredInputImageHeight;
- (unsigned long long)networkRequiredInputImageWidth;

@end
