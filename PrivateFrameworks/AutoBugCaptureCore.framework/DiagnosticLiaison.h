
@interface DiagnosticLiaison : NSObject <IDSCrossDeviceTransportEndpoint> {
    bool  _allowRemoteTrigger;
    <DiagnosticLiaisonDelegate> * _delegate;
    HomeKitAgent * _homeKitAgent;
    bool  _homekitRelayTimedOut;
    NSObject<OS_dispatch_source> * _homekitRelayTimer;
    IDSCrossDeviceTransport * _idsTransport;
    PrimaryInterfaceUtils * _interfaceUtils;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DiagnosticLiaisonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)abcPayloadForIDSTransport:(bool)arg1;
- (id)basicSignatureFrom:(id)arg1;
- (id)caseSignatureForRemoteSignature:(id)arg1 groupIdentifier:(id)arg2;
- (void)checkForUIImpactScenarioForCase:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)homeKitAgent;
- (id)idsTransport;
- (id)init;
- (id /* block */)interruptionHandler;
- (id /* block */)invalidationHandler;
- (void)messageReceivedFromIDS:(id)arg1;
- (void)messageWithIdentifier:(id)arg1 didSendWithSuccess:(bool)arg2 error:(id)arg3;
- (void)messageWithIdentifierHasBeenDelivered:(id)arg1;
- (void)processPayloadFromIDSTransport:(id)arg1 incomingTime:(id)arg2;
- (void)processPayloadVersionOneFromIDSTransport:(id)arg1 incomingTime:(id)arg2;
- (void)processPayloadVersionTwoFromIDSTransport:(id)arg1 incomingTime:(id)arg2;
- (id)queue;
- (void)registerAdministrativeTransports;
- (void)registerAutoBugCaptureTransports:(id /* block */)arg1;
- (id)remoteCasePayloadForIDSTransport:(id)arg1 groupID:(id)arg2;
- (void)remotelyDisableAutoBugCapture:(id /* block */)arg1;
- (void)remotelyEnableAutoBugCapture:(id /* block */)arg1;
- (void)remotelyTriggerSessionForSignature:(id)arg1 groupIdentifier:(id)arg2 event:(id)arg3 queue:(id)arg4 reply:(id /* block */)arg5;
- (void)remotelyTriggerSessionWithSignature:(id)arg1 forDestinations:(id)arg2 groupIdentifier:(id)arg3 validFor:(double)arg4 queue:(id)arg5 reply:(id /* block */)arg6;
- (void)residentDevicesIDSIdentifiersWithReply:(id /* block */)arg1;
- (void)sendPayloadToHomeKitRelays:(id)arg1 additionalPredicate:(id)arg2 toEndpoint:(id)arg3 reply:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)startRemotelyTriggeredSessionForSignature:(id)arg1 groupIdentifier:(id)arg2 events:(id)arg3;
- (void)unregisterAllTransports:(id /* block */)arg1;
- (void)unregisterAllTransportsSync;

@end
