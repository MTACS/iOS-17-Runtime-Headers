
@interface ATXDuetKnowledgeStoreManager : NSObject {
    NSObject<OS_dispatch_source> * _expirationSource;
    NSDate * _lastUsedDate;
    NSObject<OS_dispatch_source> * _pressureSource;
    unsigned long long  _previousPressure;
    NSObject<OS_dispatch_queue> * _queue;
    <_DKKnowledgeSaving> * _savingStore;
    <_DKKnowledgeQuerying> * _store;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clear;
- (void)_handleMemoryPressure;
- (void)dealloc;
- (id)init;
- (void)runBlock:(id /* block */)arg1;
- (void)saveEventsAsynchronously:(id)arg1 responseQueue:(id)arg2 completion:(id /* block */)arg3;

@end
