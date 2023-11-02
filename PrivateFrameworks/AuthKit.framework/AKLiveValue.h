
@interface AKLiveValue : NSObject {
    id /* block */  _asyncProducer;
    NSMutableArray * _cleanupBlocks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _syncProducer;
    id  _value;
}

+ (id)liveValueWithAsyncProducer:(id /* block */)arg1;
+ (id)liveValueWithSyncProducer:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_onqueue_updateValue;
- (void)_setValue:(id)arg1;
- (void)_updateValue;
- (id)captureCurrentValue;
- (void)dealloc;
- (id)init;
- (id)initWithAsyncProducer:(id /* block */)arg1;
- (id)initWithSyncProducer:(id /* block */)arg1;
- (id /* block */)newTrigger;
- (id /* block */)newTriggerWithCleanup:(id /* block */)arg1;

@end
