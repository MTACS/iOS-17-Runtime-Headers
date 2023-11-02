
@interface DNDModeSelectionService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSString * _clientIdentifier;
    NSHashTable * _listeners;
    DNDModeConfigurationService * _modeConfigurationService;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForUpdates;
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
- (bool)_queue_registerForUpdatesIfRequired;
- (bool)activateModeWithDetails:(id)arg1 error:(id*)arg2;
- (id)activeModeAssertionWithError:(id*)arg1;
- (void)addListener:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)allModesWithError:(id*)arg1;
- (id)availableModesWithError:(id*)arg1;
- (id)clientIdentifier;
- (bool)invalidateModeAssertionWithUUID:(id)arg1 error:(id*)arg2;
- (id)modeConfigurationForModeIdentifier:(id)arg1 error:(id*)arg2;
- (bool)promotePlaceholderWithModeIdentifier:(id)arg1 error:(id*)arg2;
- (id)promotedPlaceholderWithModeIdentifier:(id)arg1 error:(id*)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedActiveModeAssertion:(id)arg2 stateUpdate:(id)arg3;
- (void)remoteService:(id)arg1 didReceiveUpdatedAvailableModes:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedModes:(id)arg2;
- (void)removeListener:(id)arg1;

@end
