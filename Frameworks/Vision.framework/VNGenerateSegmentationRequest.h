
@interface VNGenerateSegmentationRequest : VNImageBasedRequest

@property (nonatomic) unsigned int outputPixelFormat;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (void)applyConfigurationOfRequest:(id)arg1;
- (id)configuredCopyOfSelfWithBalancedQualityLevel;
- (id)description;
- (unsigned int)outputPixelFormat;
- (id)performAccurateSegmentationInContext:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
