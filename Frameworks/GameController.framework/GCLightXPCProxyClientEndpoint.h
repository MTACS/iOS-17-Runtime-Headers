
@interface GCLightXPCProxyClientEndpoint : NSObject <GCDeviceLightComponent, GCLightXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointClient> {
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    GCController * _controller;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    GCDeviceLight * _light;
    <GCLightXPCProxyRemoteServerEndpointInterface> * _serverEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, readonly) GCDeviceLight *light;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_remoteEndpointHasSetLight:(id)arg1;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialLight:(id)arg2;
- (void)invalidateConnection;
- (id)light;
- (void)newLight:(id)arg1;
- (void)observeChangesForLight:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)refreshLight;
- (void)setController:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;
- (void)stopObservingChangesForLight:(id)arg1;

@end
