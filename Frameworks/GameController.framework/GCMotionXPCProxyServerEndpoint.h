
@interface GCMotionXPCProxyServerEndpoint : NSObject <GCMotionXPCProxyRemoteServerEndpointInterface, _GCIPCEndpointServer> {
    <GCMotionXPCProxyRemoteClientEndpointInterface> * _clientEndpoint;
    <_GCIPCEndpointConnection> * _connection;
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    <GCMotionXPCProxyServerEndpointDelegate> * _delegate;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    unsigned long long  _pendingUpdates;
    bool  _sensorsActive;
    id  _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GCMotionXPCProxyServerEndpointDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, readonly) <_GCControllerComponentDescription> *receiverDescription;
@property (nonatomic) bool sensorsActive;
@property (readonly) Class superclass;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (void)fetchSensorsActiveWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 initialValue:(bool)arg2;
- (id)initWithInitialValue:(bool)arg1;
- (void)invalidateClient;
- (void)invalidateConnection;
- (void)newSensorsActive:(bool)arg1;
- (id)receiverDescription;
- (bool)sensorsActive;
- (void)setDelegate:(id)arg1;
- (void)setSensorsActive:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
