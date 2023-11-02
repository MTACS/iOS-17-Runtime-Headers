
@interface VNCreateSmartCamprintRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;
@property (nonatomic) bool returnAllResults;

+ (Class)configurationClass;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)returnAllResults;
- (void)setReturnAllResults:(bool)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
