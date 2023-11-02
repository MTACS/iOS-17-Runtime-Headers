
@interface SNDSPGraphBox : NSObject {
    void * _box;
    struct shared_ptr<DSPGraph::Graph> { 
        struct Graph {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _graph;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
