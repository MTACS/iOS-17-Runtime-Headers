
@interface SNAnalyzerHost : NSObject <SNProcessing> {
    <SNAnalyzing> * _analyzer;
    id /* block */  _completionHandler;
    struct unique_ptr<AUProcessingBlock_DSPGraph, std::default_delete<AUProcessingBlock_DSPGraph>> { 
        struct __compressed_pair<AUProcessingBlock_DSPGraph *, std::default_delete<AUProcessingBlock_DSPGraph>> { 
            struct AUProcessingBlock_DSPGraph {} *__value_; 
        } __ptr_; 
    }  _processingBlockServer;
    long long  _requestState;
    id /* block */  _resultsHandler;
    <SNTimeConverting> * _timeConverter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2;
- (struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; })graph;

@end
