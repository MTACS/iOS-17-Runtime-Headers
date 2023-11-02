
@interface GCBatteryXPCProxyServerEndpoint : NSObject <GCBatteryXPCProxyRemoteServerEndpointInterface, _GCIPCEndpointServer> {
    GCDeviceBattery * _battery;
    <GCBatteryXPCProxyRemoteClientEndpointInterface> * _clientEndpoint;
    <_GCIPCEndpointConnection> * _connection;
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    <GCBatteryXPCProxyServerEndpointDelegate> * _delegate;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    unsigned long long  _pendingUpdates;
    id  _userInfo;
}

@property (nonatomic, retain) GCDeviceBattery *battery;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GCBatteryXPCProxyServerEndpointDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, readonly) <_GCControllerComponentDescription> *receiverDescription;
@property (readonly) Class superclass;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3;
- (id)battery;
- (id)delegate;
- (void)fetchBatteryWithReply:(id /* block */)arg1;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 initialValue:(id)arg2;
- (id)initWithInitialValue:(id)arg1;
- (void)invalidateClient;
- (void)invalidateConnection;
- (id)receiverDescription;
- (void)setBattery:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
