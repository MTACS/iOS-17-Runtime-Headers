
@interface VNGenerateAnimalSegmentationRequest : VNImageBasedRequest

@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) long long qualityLevel;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (long long)dependencyProcessingOrdinality;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (unsigned int)outputPixelFormat;
- (long long)qualityLevel;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (void)setQualityLevel:(long long)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
