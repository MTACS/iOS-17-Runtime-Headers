
@interface SNLogMelSpectrogramExtractor : NSObject <SNFeaturePrintExtractorProtocol> {
    unsigned int  _blockSize;
    struct shared_ptr<DSPGraph::Graph> { 
        struct Graph {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _graph;
}

@property (nonatomic, readonly) unsigned int blockSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; } graph;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*resultsBox;
@property (readonly) Class superclass;

+ (id)createWithSampleRate:(double)arg1 windowDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 overlapFactor:(float)arg3 error:(id*)arg4;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultWindowDuration;
+ (id)resultsBoxName;
+ (unsigned int)sampleRate;
+ (id)windowDurationConstraint;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)blockSize;
- (struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; })graph;
- (id)initWithOverlapFactor:(float)arg1 error:(id*)arg2;
- (void*)resultsBox;

@end
