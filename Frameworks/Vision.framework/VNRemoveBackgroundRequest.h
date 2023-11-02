
@interface VNRemoveBackgroundRequest : VNImageBasedRequest

@property (nonatomic) bool cropResult;
@property (nonatomic) bool performInPlace;
@property (readonly, copy) NSArray *results;
@property (nonatomic) bool returnMask;
@property (nonatomic) bool usesCPUOnly;

+ (Class)configurationClass;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (bool)cropResult;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (bool)performInPlace;
- (bool)returnMask;
- (void)setCropResult:(bool)arg1;
- (void)setPerformInPlace:(bool)arg1;
- (void)setReturnMask:(bool)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
