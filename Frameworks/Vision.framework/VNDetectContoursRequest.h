
@interface VNDetectContoursRequest : VNImageBasedRequest

@property (nonatomic) float contrastAdjustment;
@property (nonatomic, retain) NSNumber *contrastPivot;
@property (nonatomic) bool detectDarkOnLight;
@property (nonatomic) bool detectsDarkOnLight;
@property (nonatomic) bool forceUseInputCVPixelBufferDirectly;
@property (nonatomic) bool inHierarchy;
@property (nonatomic) unsigned long long maximumImageDimension;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (float)contrastAdjustment;
- (id)contrastPivot;
- (bool)detectDarkOnLight;
- (bool)detectsDarkOnLight;
- (bool)forceUseInputCVPixelBufferDirectly;
- (bool)inHierarchy;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (unsigned long long)maximumImageDimension;
- (void)setContrastAdjustment:(float)arg1;
- (void)setContrastPivot:(id)arg1;
- (void)setDetectDarkOnLight:(bool)arg1;
- (void)setDetectsDarkOnLight:(bool)arg1;
- (void)setForceUseInputCVPixelBufferDirectly:(bool)arg1;
- (void)setInHierarchy:(bool)arg1;
- (void)setMaximumImageDimension:(unsigned long long)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
