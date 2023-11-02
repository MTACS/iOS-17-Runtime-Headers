
@interface BLSHLocalAssertionService : NSObject <BLSHAssertionAttributeHandlerService> {
    NSMapTable * _activeAssertions;
    BLSHAggregatedSystemActivityAssertionFactory * _aggregatedAssertionFactory;
    NSMutableDictionary * _attributeHandlers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
    <BLSHOSInterfaceProviding> * _osInterfaceProvider;
    NSMutableArray * _pausedAssertions;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _queue_deferredAcquisitionAssertions;
    NSObject<OS_dispatch_workloop> * _rootWorkloop;
    unsigned long long  _stateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BLSHOSInterfaceProviding> *osInterfaceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)acquireAssertion:(id)arg1;
- (void)addObserver:(id)arg1;
- (oneway void)cancelAssertion:(id)arg1 withError:(id)arg2;
- (id)initWithOSInterfaceProvider:(id)arg1;
- (id)osInterfaceProvider;
- (void)pauseAssertion:(id)arg1;
- (void)registerAttributeHandler:(id)arg1 forAttributeClasses:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)replaceWithService:(id)arg1;
- (oneway void)restartAssertionTimeoutTimer:(id)arg1;
- (void)resumeAssertion:(id)arg1;
- (void)willCancelAssertion:(id)arg1;

@end
