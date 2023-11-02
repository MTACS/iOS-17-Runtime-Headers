
@interface GCGameIntentXPCProxyServerEndpoint : NSObject <GCGameIntentXPCProxyRemoteServerEndpointInterface, _GCIPCEndpointServer> {
    <GCGameIntentXPCProxyRemoteClientEndpointInterface> * _clientEndpoint;
    <_GCIPCEndpointConnection> * _connection;
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    <GCGameIntentXPCProxyServerEndpointDelegate> * _delegate;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    id  _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GCGameIntentXPCProxyServerEndpointDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, readonly) <_GCControllerComponentDescription> *receiverDescription;
@property (readonly) Class superclass;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidateClient;
- (void)invalidateConnection;
- (id)receiverDescription;
- (void)setDelegate:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)triggerGameIntentWithEvent:(long long)arg1;
- (id)userInfo;

@end
