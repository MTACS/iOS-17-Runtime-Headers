
@interface VNStatefulRequest : VNImageBasedRequest

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameAnalysisSpacing;
@property (readonly) long long minimumLatencyFrameCount;
@property (readonly) NSUUID *requestUUID;

+ (Class)configurationClass;

- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameAnalysisSpacing;
- (id)initWithFrameAnalysisSpacing:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (long long)minimumLatencyFrameCount;
- (id)newDuplicateInstance;
- (id)requestUUID;
- (bool)wantsSequencedRequestObservationsRecording;

@end
