
@interface DNDStateService : NSObject <DNDRemoteServiceConnectionEventListener, SBDNDStateService> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSString * _clientIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForUpdates;
    NSHashTable * _stateUpdateListeners;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)arg1;
- (bool)_queue_registerForStateUpdatesIfRequired;
- (bool)addStateUpdateListener:(id)arg1 error:(id*)arg2;
- (void)addStateUpdateListener:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)clientIdentifier;
- (void)queryCurrentStateWithCompletionHandler:(id /* block */)arg1;
- (id)queryCurrentStateWithError:(id*)arg1;
- (void)remoteService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)removeStateUpdateListener:(id)arg1;
- (bool)removeStateUpdateListener:(id)arg1 error:(id*)arg2;

@end
