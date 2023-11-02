
@interface EFCoalescer : NSObject {
    id  _coalescedValue;
    NSObject<OS_dispatch_source> * _coalescer;
    id /* block */  _coalescerAction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_handleCoalesceEvent;
- (void)coalesceValue:(id)arg1;
- (void)dealloc;
- (id)initWithCoalescingAction:(id /* block */)arg1;

@end
