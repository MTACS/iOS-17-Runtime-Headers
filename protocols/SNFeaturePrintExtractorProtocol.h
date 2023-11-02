
@protocol SNFeaturePrintExtractorProtocol <NSObject>

@required

+ (<SNFeaturePrintExtractorProtocol> *)createWithSampleRate:(double)arg1 windowDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 overlapFactor:(float)arg3 error:(id*)arg4;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultWindowDuration;
+ (SNTimeDurationConstraint *)windowDurationConstraint;

- (unsigned int)blockSize;
- (struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; })graph;
- (void*)resultsBox;

@end
