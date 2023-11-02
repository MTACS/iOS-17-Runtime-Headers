
@interface _DDUIRapportIncomingTransportSession : NSObject <DDUIEndpointPairingTransportSession> {
    _DDUIRapportDevice * _cachedDevice;
    RPCompanionLinkClient * _client;
    NSString * _destinationID;
    id /* block */  _messageHandler;
    NSString * _sessionID;
    unsigned long long  _sessionType;
}

@property (nonatomic, retain) _DDUIRapportDevice *cachedDevice;
@property (nonatomic, retain) RPCompanionLinkClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *destinationID;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ messageHandler;
@property (nonatomic, readonly) <DDUIDevice> *remoteDevice;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned long long sessionType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateWithErrorHandler:(id /* block */)arg1 messageHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)cachedDevice;
- (id)client;
- (id)destinationID;
- (void)generateNetworkEndpointIdentifierForRemoteDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithOptions:(id)arg1;
- (void)invalidate;
- (id /* block */)messageHandler;
- (id)remoteDevice;
- (void)sendMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 withTimeout:(double)arg2 completion:(id /* block */)arg3;
- (id)sessionID;
- (unsigned long long)sessionType;
- (void)setCachedDevice:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setDestinationID:(id)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSessionType:(unsigned long long)arg1;

@end
