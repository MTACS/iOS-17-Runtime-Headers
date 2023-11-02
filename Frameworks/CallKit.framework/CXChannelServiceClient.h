
@interface CXChannelServiceClient : CXServiceClient <CXChannelProviderHostProtocol, CXChannelProviderVendorProtocol> {
    <CXChannelServiceClientDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXChannelServiceClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)actionCompleted:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)commitTransaction:(id)arg1;
- (id)delegate;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (bool)isPermittedToUsePublicAPI;
- (oneway void)registerWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)reportAudioFinishedForChannelWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)reportChannelWithUUID:(id)arg1 connectedAtDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (oneway void)reportChannelWithUUID:(id)arg1 disconnectedAtDate:(id)arg2 disconnectedReason:(id)arg3 completionHandler:(id /* block */)arg4;
- (oneway void)reportChannelWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (oneway void)reportChannelWithUUID:(id)arg1 updated:(id)arg2 completionHandler:(id /* block */)arg3;
- (oneway void)reportIncomingTransmissionEndedForChannelWithUUID:(id)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;
- (oneway void)reportIncomingTransmissionStartedForChannelWithUUID:(id)arg1 update:(id)arg2 shouldReplaceOutgoingTransmission:(id)arg3 completionHandler:(id /* block */)arg4;
- (oneway void)requestTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
