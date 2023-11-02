
@interface FINodeTask : NSObject {
    struct shared_ptr<TNodeTask> { 
        struct TNodeTask {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _nodeTask;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init:(const void*)arg1;

@end
