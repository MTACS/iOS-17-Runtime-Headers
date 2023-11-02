
@interface GCPlayerIndicatorXPCProxyClientEndpoint : NSObject <GCControllerPlayerIndicator, GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointClient> {
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    GCController * _controller;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    long long  _playerIndex;
    <GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface> * _serverEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property long long playerIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_remoteEndpointSetPlayerIndex:(long long)arg1;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialPlayerIndex:(long long)arg2;
- (void)invalidateConnection;
- (void)newPlayerIndex:(long long)arg1;
- (long long)playerIndex;
- (void)refreshPlayerIndex;
- (void)setController:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;

@end
