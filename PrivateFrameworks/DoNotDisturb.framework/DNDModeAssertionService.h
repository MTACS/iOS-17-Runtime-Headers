
@interface DNDModeAssertionService : NSObject <DNDRemoteServiceConnectionEventListener> {
    DNDModeAssertion * _activeAssertion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activeAssertionLock;
    bool  _activeAssertionQueried;
    NSHashTable * _assertionUpdateListeners;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSString * _clientIdentifier;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _registeredForUpdates;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_handleChangeActiveModeAssertion:(id)arg1 invalidation:(id)arg2;
- (id)_initWithClientIdentifier:(id)arg1;
- (void)_registerForAssertionUpdatesIfRequiredWithCompletionHandler:(id /* block */)arg1;
- (id)activeModeAssertionWithError:(id*)arg1;
- (bool)addAssertionUpdateListener:(id)arg1 error:(id*)arg2;
- (void)addAssertionUpdateListener:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)allModeAssertionsWithError:(id*)arg1;
- (id)clientIdentifier;
- (id)invalidateActiveModeAssertionWithError:(id*)arg1;
- (id)invalidateActiveModeAssertionWithInvalidationDetails:(id)arg1 reasonOverride:(unsigned long long)arg2 error:(id*)arg3;
- (bool)invalidateAllActiveModeAssertionsWithError:(id*)arg1;
- (id)latestModeAssertionInvalidationWithError:(id*)arg1;
- (void)remoteService:(id)arg1 didChangeActiveModeAssertion:(id)arg2 invalidation:(id)arg3;
- (void)removeAssertionUpdateListener:(id)arg1;
- (bool)removeAssertionUpdateListener:(id)arg1 error:(id*)arg2;
- (id)takeModeAssertionWithDetails:(id)arg1 error:(id*)arg2;

@end
