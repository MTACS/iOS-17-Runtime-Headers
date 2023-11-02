
@interface GCBatteryXPCProxyClientEndpoint : NSObject <GCBatteryXPCProxyRemoteClientEndpointInterface, GCDeviceBatteryComponent, _GCIPCEndpointClient> {
    GCDeviceBattery * _battery;
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    GCController * _controller;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    <GCBatteryXPCProxyRemoteServerEndpointInterface> * _serverEndpoint;
}

@property (nonatomic, readonly) GCDeviceBattery *battery;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_remoteEndpointHasSetBattery:(id)arg1;
- (id)battery;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialBattery:(id)arg2;
- (void)invalidateConnection;
- (void)newBattery:(id)arg1;
- (void)refreshBattery;
- (void)setController:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;

@end
