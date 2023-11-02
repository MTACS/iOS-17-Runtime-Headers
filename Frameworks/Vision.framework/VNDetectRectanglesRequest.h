
@interface VNDetectRectanglesRequest : VNImageBasedRequest

@property (nonatomic) float maximumAspectRatio;
@property (nonatomic) unsigned long long maximumObservations;
@property (nonatomic) float minimumAspectRatio;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) float minimumSize;
@property (nonatomic) float quadratureTolerance;
@property (nonatomic) unsigned long long requiredVersion;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (long long)dependencyProcessingOrdinality;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (float)maximumAspectRatio;
- (unsigned long long)maximumObservations;
- (float)minimumAspectRatio;
- (float)minimumConfidence;
- (float)minimumSize;
- (float)quadratureTolerance;
- (unsigned long long)requiredVersion;
- (void)setMaximumAspectRatio:(float)arg1;
- (void)setMaximumObservations:(unsigned long long)arg1;
- (void)setMinimumAspectRatio:(float)arg1;
- (void)setMinimumConfidence:(float)arg1;
- (void)setMinimumSize:(float)arg1;
- (void)setProcessedResults:(id)arg1;
- (void)setQuadratureTolerance:(float)arg1;
- (void)setRequiredVersion:(unsigned long long)arg1;
- (id)supportedImageSizeSet;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
