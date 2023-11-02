
@interface SNSoundPrintKExtractor : SNSoundPrintExtractorBase <SNFeaturePrintExtractorProtocol>

@property (nonatomic, readonly) unsigned int blockSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; } graph;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*resultsBox;
@property (readonly) Class superclass;

+ (id)createWithSampleRate:(double)arg1 windowDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 overlapFactor:(float)arg3 error:(id*)arg4;

- (id)initWithSampleRate:(double)arg1 windowDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 overlapFactor:(float)arg3 error:(id*)arg4;

@end
