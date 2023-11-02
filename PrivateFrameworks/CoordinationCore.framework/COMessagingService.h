
@interface COMessagingService : COService <COMessageChannelServiceInterface, COMessagingAddOnDelegate> {
    NSMutableDictionary * _connectedClients;
    _COMessagingServiceMeter * _meter;
    NSMutableDictionary * _outstandingActivateCompletionHandlers;
    NSMutableDictionary * _requestHandlers;
}

@property (nonatomic, retain) NSMutableDictionary *connectedClients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _COMessagingServiceMeter *meter;
@property (nonatomic, retain) NSMutableDictionary *outstandingActivateCompletionHandlers;
@property (nonatomic, retain) NSMutableDictionary *requestHandlers;
@property (readonly) Class superclass;

+ (id)serviceWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)_addOnAdded:(id)arg1;
- (void)_addOnRemoved:(id)arg1;
- (bool)_applicableToCluster:(id)arg1;
- (void)_clientLost:(id)arg1;
- (void)_completeActivationForClient:(id)arg1;
- (void)_configureServiceInterfacesOnConnection:(id)arg1;
- (void)activateMessageChannelForTopic:(id)arg1 cluster:(id)arg2 handlers:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)addOn:(id)arg1 receivedRequest:(id)arg2 callback:(id /* block */)arg3;
- (id)connectedClients;
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;
- (id)meter;
- (id)outstandingActivateCompletionHandlers;
- (id)requestHandlers;
- (void)sendRequestWithPayload:(id)arg1 payloadType:(id)arg2 requestType:(long long)arg3 requestID:(unsigned int)arg4 members:(id)arg5 activityToken:(id)arg6;
- (void)sessionEndedForSubTopic:(id)arg1;
- (void)sessionStartedForSubTopic:(id)arg1 withMember:(id)arg2 produced:(bool)arg3;
- (void)setConnectedClients:(id)arg1;
- (void)setOutstandingActivateCompletionHandlers:(id)arg1;
- (void)setRequestHandlers:(id)arg1;

@end
