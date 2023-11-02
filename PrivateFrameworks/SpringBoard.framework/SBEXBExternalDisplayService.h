
@interface SBEXBExternalDisplayService : NSObject <_SBExternalDisplayServiceConnectionListenerDelegate> {
    SBSConnectedDisplayInfoFactory * _connectedDisplayInfoFactory;
    SBExternalDisplayDefaults * _defaults;
    NSHashTable * _observers;
    NSMutableDictionary * _rootToConnectedParticipants;
    <_SBExternalDisplayServiceConnectionListening> * _serviceConnectionListener;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_extendedModeDisplayConfigurationForHardwareIdentifier:(id)arg1 error:(out id*)arg2;
- (void)_notifyOfPropertyChangesForDisplayConfiguration:(id)arg1 requestingClient:(id)arg2;
- (void)activate;
- (void)addObserver:(id)arg1;
- (void)client:(id)arg1 getConnectedDisplayInfoWithCompletion:(id /* block */)arg2;
- (void)client:(id)arg1 setDisplayArrangement:(id)arg2 forDisplay:(id)arg3;
- (void)client:(id)arg1 setDisplayMirroringEnabled:(id)arg2 forDisplay:(id)arg3;
- (void)client:(id)arg1 setDisplayModeSettings:(id)arg2 forDisplay:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)dealloc;
- (void)didConnectParticipant:(id)arg1;
- (void)didUpdateParticipant:(id)arg1;
- (id)init;
- (id)initWithServiceListenerFactory:(id)arg1 connectedDisplayInfoFactory:(id)arg2 defaults:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)willDisconnectParticipant:(id)arg1;

@end
