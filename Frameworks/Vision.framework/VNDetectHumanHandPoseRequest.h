
@interface VNDetectHumanHandPoseRequest : VNImageBasedRequest

@property unsigned long long maximumHandCount;
@property (readonly, copy) NSArray *results;

+ (id)_supportedJointNamesRevision1;
+ (id)_supportedJointsGroupNamesRevision1;
+ (Class)configurationClass;
+ (bool)revision:(unsigned long long)arg1 mayAcceptResultsProducedByRevision:(unsigned long long)arg2;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;
+ (id)supportedJointNamesForRevision:(unsigned long long)arg1 error:(id*)arg2;
+ (id)supportedJointsGroupNamesForRevision:(unsigned long long)arg1 error:(id*)arg2;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maximumHandCount;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (void)setMaximumHandCount:(unsigned long long)arg1;
- (void)setProcessedResults:(id)arg1;
- (id)supportedJointNamesAndReturnError:(id*)arg1;
- (id)supportedJointsGroupNamesAndReturnError:(id*)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
