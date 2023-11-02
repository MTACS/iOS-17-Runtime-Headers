
@interface IPGlobalInstallableStateSourceXPCBehavior : NSObject <IPGlobalInstallableStateSourceBehavior, IPStateAndProgressRegistry, IPStateUpdateStreamSourceDelegate, IPXPCClientInterface> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    id /* block */  _connectionProvider;
    NSXPCConnection * _currentConnection;
    NSObject<OS_dispatch_queue> * _q;
    bool  _registeredForProgress;
    bool  _registeredForState;
    NSMutableDictionary * _registeredProgressSources;
    NSMutableDictionary * _registeredStateSources;
    <IPStateUpdateStreamSource> * _stateStreamSource;
    bool  _stateStreamSourceResumed;
    NSHashTable * _stateUpdateObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_installableStateSourcesForStates:(id)arg1;
- (id)_queue_asyncProxyWithErrorHandler:(id /* block */)arg1;
- (id)_queue_connectedConnection;
- (id)_queue_makeExtantStateSourcesForGlobalSource:(id)arg1 error:(id*)arg2;
- (id)_queue_makeInstallingStateSourcesForGlobalSource:(id)arg1 error:(id*)arg2;
- (void)_queue_noteInstallBeganForIdentity:(id)arg1;
- (void)_queue_registerAsProgressObserverIfNecessary;
- (void)_queue_resumeStateStreamSourceIfNecessary;
- (void)_queue_sendStateSourceAvailableForIdentity:(id)arg1;
- (void)_queue_sendStateSourceUnavailableForIdentity:(id)arg1;
- (id)_queue_syncProxyWithErrorHandler:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)currentProgressForIdentity:(id)arg1 error:(id*)arg2;
- (id)initWithXPCConnectionProvider:(id /* block */)arg1 stateStreamSource:(id)arg2 queue:(id)arg3;
- (void)installableForIdentity:(id)arg1 progressChanged:(id)arg2;
- (void)installableForIdentity:(id)arg1 progressEndedForReason:(unsigned long long)arg2;
- (void)makeExtantStateSourcesForGlobalSource:(id)arg1 andEnumerate:(id /* block */)arg2;
- (void)makeInstallingStateSourcesForGlobalSource:(id)arg1 andEnumerate:(id /* block */)arg2;
- (void)registerProgressSource:(id)arg1;
- (void)registerStateSource:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)serverActionBarrierForTesting;
- (void)stateUpdateStreamSource:(id)arg1 updateMessageReceived:(id)arg2;
- (void)unregisterProgressSource:(id)arg1;
- (void)unregisterStateSource:(id)arg1;

@end
