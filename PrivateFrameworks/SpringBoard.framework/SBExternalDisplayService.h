
@interface SBExternalDisplayService : NSObject <SBDisplayManagerObserver, _SBExternalDisplayServiceConnectionListenerDelegate> {
    SBSConnectedDisplayInfoFactory * _connectedDisplayInfoFactory;
    SBExternalDisplayDefaults * _defaults;
    SBDisplayManager * _displayManager;
    <BSInvalidatable> * _displayManagerObserverToken;
    NSHashTable * _observers;
    <_SBExternalDisplayServiceConnectionListening> * _serviceConnectionListener;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_displayInfoForDisplayIdentity:(id)arg1 configuration:(id)arg2;
- (id)_extendedModeDisplayConfigurationForHardwareIdentifier:(id)arg1 error:(out id*)arg2;
- (void)_notifyOfPropertyChangesForDisplayConfiguration:(id)arg1 requestingClient:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)client:(id)arg1 getConnectedDisplayInfoWithCompletion:(id /* block */)arg2;
- (void)client:(id)arg1 setDisplayArrangement:(id)arg2 forDisplay:(id)arg3;
- (void)client:(id)arg1 setDisplayMirroringEnabled:(id)arg2 forDisplay:(id)arg3;
- (void)client:(id)arg1 setDisplayModeSettings:(id)arg2 forDisplay:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)dealloc;
- (void)displayManager:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayManager:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)initWithDisplayManager:(id)arg1;
- (id)initWithDisplayManager:(id)arg1 serviceListenerFactory:(id)arg2 connectedDisplayInfoFactory:(id)arg3;
- (id)preferredArrangementOfDisplay:(id)arg1 relativeTo:(id)arg2;
- (id)preferredArrangementOfExternalDisplay:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
