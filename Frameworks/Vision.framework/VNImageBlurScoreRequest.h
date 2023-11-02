
@interface VNImageBlurScoreRequest : VNImageBasedRequest

@property (nonatomic) unsigned long long blurDeterminationMethod;
@property (nonatomic) unsigned long long maximumIntermediateSideLength;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (unsigned long long)blurDeterminationMethod;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (unsigned long long)maximumIntermediateSideLength;
- (void)setBlurDeterminationMethod:(unsigned long long)arg1;
- (void)setMaximumIntermediateSideLength:(unsigned long long)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
