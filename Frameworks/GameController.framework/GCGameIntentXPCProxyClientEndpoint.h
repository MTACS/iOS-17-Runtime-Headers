
@interface GCGameIntentXPCProxyClientEndpoint : NSObject <GCDeviceGameIntentComponent, GCGameIntentXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointClient> {
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    GCController * _controller;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    <GCGameIntentXPCProxyRemoteServerEndpointInterface> * _serverEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidateConnection;
- (void)setController:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;
- (void)triggerGestureGameIntentAppLibrary;
- (void)triggerGestureGameIntentGameCenter;

@end
