
@interface BLSPendingAssertionService : NSObject <BLSAssertionService> {
    NSMutableArray * _assertionsToAcquire;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <BLSAssertionService> * _replacementService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)acquireAssertion:(id)arg1;
- (oneway void)cancelAssertion:(id)arg1 withError:(id)arg2;
- (id)init;
- (void)replaceWithService:(id)arg1;
- (oneway void)restartAssertionTimeoutTimer:(id)arg1;

@end
