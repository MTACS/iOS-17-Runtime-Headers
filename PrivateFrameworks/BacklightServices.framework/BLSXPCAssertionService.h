
@interface BLSXPCAssertionService : NSObject <BLSAssertionService, BLSXPCAssertionServiceClientInterface, BSInvalidatable> {
    BSServiceConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_invalidated;
    NSMapTable * _queue_assertions;
    NSMutableSet * _queue_assertionsToReacquire;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultEndpoint;

- (void).cxx_destruct;
- (oneway void)acquireAssertion:(id)arg1;
- (oneway void)assertion:(id)arg1 failedToAcquireWithError:(id)arg2;
- (oneway void)assertionAcquired:(id)arg1;
- (oneway void)assertionDidCancel:(id)arg1 withError:(id)arg2;
- (oneway void)assertionPaused:(id)arg1;
- (oneway void)assertionResumed:(id)arg1;
- (oneway void)assertionWillCancel:(id)arg1;
- (oneway void)cancelAssertion:(id)arg1 withError:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (void)invalidate;
- (void)replaceWithService:(id)arg1;
- (oneway void)restartAssertionTimeoutTimer:(id)arg1;

@end
