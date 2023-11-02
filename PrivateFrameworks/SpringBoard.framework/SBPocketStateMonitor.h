
@interface SBPocketStateMonitor : NSObject <CMPocketStateDelegate> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSHashTable * _observers;
    long long  _pocketState;
    CMPocketStateManager * _pocketStateManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long pocketState;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCMPocketStateManager:(id)arg1 calloutQueue:(id)arg2;
- (long long)pocketState;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (void)removeObserver:(id)arg1;

@end
