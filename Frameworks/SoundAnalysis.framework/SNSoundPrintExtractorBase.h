
@interface SNSoundPrintExtractorBase : NSObject {
    unsigned int  _blockSize;
    struct shared_ptr<DSPGraph::Graph> { 
        struct Graph {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _graph;
}

@property (nonatomic, readonly) unsigned int blockSize;
@property (nonatomic, readonly) struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; } graph;
@property (nonatomic, readonly) void*resultsBox;

+ (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultWindowDuration;
+ (id)resultsBoxName;
+ (unsigned int)sampleRate;
+ (id)windowDurationConstraint;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)blockSize;
- (struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; })graph;
- (id)initWithSoundPrintModel:(id)arg1 sampleRate:(double)arg2 windowDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 overlapFactor:(float)arg4 error:(id*)arg5;
- (void*)resultsBox;

@end
