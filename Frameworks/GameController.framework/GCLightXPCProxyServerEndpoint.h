
@interface GCLightXPCProxyServerEndpoint : NSObject <GCLightXPCProxyRemoteServerEndpointInterface, _GCIPCEndpointServer> {
    <GCLightXPCProxyRemoteClientEndpointInterface> * _clientEndpoint;
    <_GCIPCEndpointConnection> * _connection;
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    <GCLightXPCProxyServerEndpointDelegate> * _delegate;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    GCDeviceLight * _light;
    unsigned long long  _pendingUpdates;
    id  _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GCLightXPCProxyServerEndpointDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, retain) GCDeviceLight *light;
@property (nonatomic, readonly) <_GCControllerComponentDescription> *receiverDescription;
@property (readonly) Class superclass;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (void)fetchLightWithReply:(id /* block */)arg1;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 initialValue:(id)arg2;
- (id)initWithInitialValue:(id)arg1;
- (void)invalidateClient;
- (void)invalidateConnection;
- (id)light;
- (void)newLight:(id)arg1;
- (id)receiverDescription;
- (void)setDelegate:(id)arg1;
- (void)setLight:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
