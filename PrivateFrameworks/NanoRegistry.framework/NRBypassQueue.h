
@interface NRBypassQueue : NSObject {
    NSObject<OS_dispatch_queue> * _bypassQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _suspendableQueue;
    bool  _suspended;
}

- (void).cxx_destruct;
- (void)enqueueBlock:(id /* block */)arg1;
- (void)enqueueBlockAsync:(id /* block */)arg1;
- (void)enqueueBypassBlock:(id /* block */)arg1;
- (void)enqueueBypassBlockAsync:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)resume;
- (void)suspend;

@end
