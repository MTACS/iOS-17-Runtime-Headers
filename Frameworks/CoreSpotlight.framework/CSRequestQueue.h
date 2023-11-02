
@interface CSRequestQueue : NSObject {
    id /* block */  _startBlock;
    _Atomic unsigned int  _suspended;
    NSMutableArray * _workItems;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _workItemsLock;
    unsigned int  _workItemsQoS;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_source> * _workSource;
}

+ (id)_requestQueueAttribute;

- (void).cxx_destruct;
- (void)async:(id /* block */)arg1;
- (void)enqueue:(id)arg1;
- (void)handleEvent;
- (id)initWithLabel:(char *)arg1 target:(id)arg2 startBlock:(id /* block */)arg3;
- (const char *)label;
- (void)resume;
- (void)suspend;
- (void)sync:(id /* block */)arg1;
- (void)validate;

@end
