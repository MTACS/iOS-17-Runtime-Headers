
@interface GCPlayerIndicatorXPCProxyServerEndpoint : NSObject <GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface, _GCIPCEndpointServer> {
    <GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface> * _clientEndpoint;
    <_GCIPCEndpointConnection> * _connection;
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    <GCPlayerIndicatorXPCProxyServerEndpointDelegate> * _delegate;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    unsigned long long  _pendingUpdates;
    long long  _playerIndex;
    id  _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GCPlayerIndicatorXPCProxyServerEndpointDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic) long long playerIndex;
@property (nonatomic, readonly) <_GCControllerComponentDescription> *receiverDescription;
@property (readonly) Class superclass;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (void)fetchPlayerIndexWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 initialValue:(long long)arg2;
- (id)initWithInitialValue:(long long)arg1;
- (void)invalidateClient;
- (void)invalidateConnection;
- (void)newPlayerIndex:(long long)arg1;
- (long long)playerIndex;
- (id)receiverDescription;
- (void)setDelegate:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
