
@interface PBFPosterExtensionDataStoreAssertionManager : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    NSMapTable * _internalLock_inUseAssertionsByIdentity;
    bool  _internalLock_invalidated;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_appendAssertion:(id)arg1 forServerPosterPath:(id)arg2;
- (bool)_internalLock_appendAssertion:(id)arg1 forServerPosterPath:(id)arg2;
- (long long)_internalLock_numberOfInUseAssertionsForPath:(id)arg1;
- (bool)_internalLock_removeAssertion:(id)arg1 forServerPosterPath:(id)arg2;
- (void)_invalidateInUseAssertion:(id)arg1 forServerPosterPath:(id)arg2;
- (long long)_numberOfInUseAssertionsForPath:(id)arg1;
- (bool)_removeAssertion:(id)arg1 forServerPosterPath:(id)arg2;
- (id)acquireInUseAssertionForPath:(id)arg1 reason:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)description;
- (void)enumerateObservers:(id /* block */)arg1;
- (id)inUseAssertionForIdentity:(id)arg1 reason:(id)arg2;
- (id)inUseAssertionForPath:(id)arg1 reason:(id)arg2;
- (id)inUsePosterPathIdentitiesForReason:(id)arg1;
- (id)init;
- (void)invalidate;
- (bool)isPosterInUse:(id)arg1;
- (long long)numberOfAssertionsForReason:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
