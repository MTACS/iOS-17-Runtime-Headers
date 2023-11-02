
@interface GCMotionXPCProxyClientEndpoint : NSObject <GCControllerMotionConfigurableSensors, GCMotionXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointClient> {
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    GCController * _controller;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    bool  _sensorsActive;
    <GCMotionXPCProxyRemoteServerEndpointInterface> * _serverEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic) bool sensorsActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_remoteEndpointSetSensorsActive:(bool)arg1;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialSensorsActive:(bool)arg2;
- (void)invalidateConnection;
- (void)newSensorsActive:(bool)arg1;
- (void)refreshSensorsActive;
- (bool)sensorsActive;
- (void)setController:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;
- (void)setSensorsActive:(bool)arg1;

@end
