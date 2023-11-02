
@interface VNNOPRequest : VNImageBasedRequest

@property (nonatomic) double detectorExecutionTimeInterval;
@property (nonatomic, copy) VNSupportedImageSize *detectorPreferredImageSize;
@property (nonatomic) bool detectorWantsAnisotropicScaling;

+ (Class)configurationClass;

- (struct CGSize { double x1; double x2; })_actualSizeForDesiredSize:(id)arg1 ofSourceImageWidth:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (struct __CVBuffer { }*)_createScaledImagePixelBufferFromCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofImageBuffer:(id)arg2 inPixelFormat:(unsigned int)arg3 forDetectorInputImageSize:(struct CGSize { double x1; double x2; })arg4 usingAnisotropicScaling:(bool)arg5 error:(id*)arg6;
- (struct __CVBuffer { }*)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 inPixelFormat:(unsigned int)arg2 forDetectorInputImageSize:(struct CGSize { double x1; double x2; })arg3 usingAnisotropicScaling:(bool)arg4 error:(id*)arg5;
- (bool)_performNOPForRevision:(unsigned long long)arg1 inContext:(id)arg2 detectorCompletionSemaphore:(id)arg3 error:(id*)arg4;
- (double)detectorExecutionTimeInterval;
- (id)detectorPreferredImageSize;
- (bool)detectorWantsAnisotropicScaling;
- (bool)hasCancellationHook;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (void)setDetectorExecutionTimeInterval:(double)arg1;
- (void)setDetectorPreferredImageSize:(id)arg1;
- (void)setDetectorWantsAnisotropicScaling:(bool)arg1;
- (id)supportedComputeStageDevicesAndReturnError:(id*)arg1;
- (id)supportedImageSizeSet;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
