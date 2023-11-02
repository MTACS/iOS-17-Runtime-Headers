
@interface VNDetectTrajectoriesRequest : VNStatefulRequest {
    float  _objectMaximumNormalizedRadius;
    VNTrajectoryRequestState * _state;
    VNTrajectoryProcessor * _trajectoryProcessor;
}

@property (nonatomic) float maximumObjectSize;
@property (nonatomic) float minimumObjectSize;
@property (nonatomic) float objectMaximumNormalizedRadius;
@property (nonatomic) float objectMinimumNormalizedRadius;
@property (readonly, copy) NSArray *results;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } targetFrameTime;
@property (readonly) long long trajectoryLength;

+ (Class)configurationClass;
+ (bool)setsTimeRangeOnResults;

- (void).cxx_destruct;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)initWithFrameAnalysisSpacing:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trajectoryLength:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (float)maximumObjectSize;
- (float)minimumObjectSize;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (id)newDuplicateInstance;
- (float)objectMaximumNormalizedRadius;
- (float)objectMinimumNormalizedRadius;
- (void)setMaximumObjectSize:(float)arg1;
- (void)setMinimumObjectSize:(float)arg1;
- (void)setObjectMaximumNormalizedRadius:(float)arg1;
- (void)setObjectMinimumNormalizedRadius:(float)arg1;
- (void)setTargetFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setobjectMaximumNormalizedRadius:(float)arg1;
- (id)supportedComputeStageDevicesAndReturnError:(id*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetFrameTime;
- (long long)trajectoryLength;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
