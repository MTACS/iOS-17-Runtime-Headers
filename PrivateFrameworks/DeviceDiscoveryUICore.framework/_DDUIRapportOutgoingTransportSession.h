
@interface _DDUIRapportOutgoingTransportSession : NSObject <DDUIEndpointPairingTransportSession> {
    RPCompanionLinkClient * _client;
    id /* block */  _messageHandler;
    NSString * _serviceIdentifier;
    NSString * _sessionID;
}

@property (nonatomic, retain) RPCompanionLinkClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ messageHandler;
@property (nonatomic, readonly) <DDUIDevice> *remoteDevice;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic, retain) NSString *sessionID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateWithErrorHandler:(id /* block */)arg1 messageHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)client;
- (void)generateNetworkEndpointIdentifierForRemoteDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)handleIncomingMessage:(id)arg1 withMessageID:(id)arg2;
- (id)initWithServiceIdentifier:(id)arg1;
- (void)invalidate;
- (id /* block */)messageHandler;
- (id)remoteDevice;
- (void)sendMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 withTimeout:(double)arg2 completion:(id /* block */)arg3;
- (id)serviceIdentifier;
- (id)sessionID;
- (void)setClient:(id)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setSessionID:(id)arg1;

@end
