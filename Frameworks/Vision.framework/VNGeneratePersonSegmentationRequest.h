
@interface VNGeneratePersonSegmentationRequest : VNStatefulRequest {
    unsigned long long  _previousImageHeight;
    unsigned long long  _previousImageWidth;
    NSArray * _previousObservations;
}

@property (nonatomic) float minimumConfidence;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) unsigned long long qualityLevel;
@property (readonly, copy) NSArray *results;
@property (nonatomic) bool useTiling;

+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)new;
+ (id)privateRevisionsSet;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (long long)dependencyProcessingOrdinality;
- (id)description;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (float)minimumConfidence;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (unsigned int)outputPixelFormat;
- (unsigned long long)qualityLevel;
- (void)setMinimumConfidence:(float)arg1;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (void)setQualityLevel:(unsigned long long)arg1;
- (void)setUseTiling:(bool)arg1;
- (bool)useTiling;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
