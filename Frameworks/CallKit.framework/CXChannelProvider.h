
@interface CXChannelProvider : NSObject <CXAbstractProvider, CXActionDelegateInternal, CXChannelPushClientProtocol> {
    CXAbstractProvider * _abstractProvider;
    CXChannelProviderConfiguration * _configuration;
    NSXPCConnection * _voipApplicationControllerConnection;
}

@property (nonatomic, readonly) CXAbstractProvider *abstractProvider;
@property (nonatomic, copy) CXChannelProviderConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXChannelProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *pendingTransactions;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *voipApplicationControllerConnection;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (void)_didReceivePushPayload:(id)arg1;
- (void)_didReceivePushPayload:(id)arg1 channelUUID:(id)arg2 reply:(id /* block */)arg3;
- (void)_didReceivePushToken:(id)arg1;
- (void)_ensureApplicationControllerConnection;
- (id)abstractProvider;
- (id)channelProviderHostDelegate;
- (oneway void)commitTransaction:(id)arg1;
- (id)configuration;
- (id)delegate;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)arg1;
- (void)handleMediaServicesWereResetNotification:(id)arg1;
- (id)hostProtocolDelegate;
- (id)initWithConfiguration:(id)arg1;
- (void)invalidate;
- (id)pendingTransactions;
- (void)performAction:(id)arg1;
- (void)registerCurrentConfiguration;
- (void)reportChannelWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (void)reportChannelWithUUID:(id)arg1 disconnectedAtDate:(id)arg2 disconnectedReason:(long long)arg3;
- (void)reportChannelWithUUID:(id)arg1 updated:(id)arg2;
- (void)reportChannelWithUUID:(id)arg1 updated:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)reportIncomingTransmissionEndedForChannelWithUUID:(id)arg1 reason:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)reportIncomingTransmissionStartedForChannelWithUUID:(id)arg1 update:(id)arg2 shouldReplaceOutgoingTransmission:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)requestChannelPushToken;
- (bool)requiresProxyingAVAudioSessionState;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setVoipApplicationControllerConnection:(id)arg1;
- (void)unregisterChannelPushToken;
- (id)voipApplicationControllerConnection;

@end
