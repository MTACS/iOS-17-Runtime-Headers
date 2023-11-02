
@interface ICURLBagMonitor : NSObject <ICEnvironmentMonitorObserver> {
    ICURLBag * _bag;
    NSObject<OS_dispatch_source> * _bagExpirationTimer;
    ICUserIdentityStore * _identityStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _observers;
}

@property (readonly) ICURLBag *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedBagMonitor;

- (void).cxx_destruct;
- (void)_beginObservingBag;
- (id)_description;
- (void)_endObservingBag;
- (void)_handleBagExpirationTimerFired;
- (void)_handleUserIdentityStoreDidChange:(id)arg1;
- (id)_init;
- (void)_invalidateBagExpirationTimer;
- (void)_requestBagWithPolicy:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_scheduleBagExpirationTimerForDate:(id)arg1;
- (void)_updateWithBag:(id)arg1;
- (id)bag;
- (id)beginObservingBagWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (void)endObservingBagWithToken:(id)arg1;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;

@end
