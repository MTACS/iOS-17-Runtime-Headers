
@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest

@property (nonatomic) unsigned long long computationAccuracy;
@property (nonatomic) bool keepNetworkOutput;
@property (nonatomic) unsigned int outputPixelFormat;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)_createGeneratorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 images:(id)arg3 previousTargetImageIsCurrentRefImage:(bool)arg4 previousObservation:(id)arg5;
- (bool)_internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 previousObservation:(id)arg3 error:(id*)arg4;
- (bool)allowsCachingOfResults;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (unsigned long long)computationAccuracy;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)keepNetworkOutput;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (unsigned int)outputPixelFormat;
- (void)setComputationAccuracy:(unsigned long long)arg1;
- (void)setKeepNetworkOutput:(bool)arg1;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (bool)wantsSequencedRequestObservationsRecording;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
