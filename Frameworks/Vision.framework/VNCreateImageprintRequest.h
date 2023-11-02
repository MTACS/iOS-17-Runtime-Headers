
@interface VNCreateImageprintRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;
@property (nonatomic, retain) NSNumber *timeStamp;

+ (Class)configurationClass;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (void)setTimeStamp:(id)arg1;
- (id)timeStamp;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
