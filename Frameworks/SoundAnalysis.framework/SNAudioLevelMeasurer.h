
@interface SNAudioLevelMeasurer : NSObject <SNAnalyzing> {
    struct shared_ptr<DSPGraph::Graph> { 
        struct Graph {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _graph;
    float  _inputSensitivity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; } graph;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*resultsBox;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2;
- (struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; })graph;
- (void*)resultsBox;
- (id)resultsFromBox:(void*)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;

@end
