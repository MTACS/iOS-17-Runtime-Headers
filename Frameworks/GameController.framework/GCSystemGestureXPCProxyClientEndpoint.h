
@interface GCSystemGestureXPCProxyClientEndpoint : NSObject <GCSystemGestureComponent, GCSystemGestureXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointClient> {
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    GCController * _controller;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    bool  _isSystemGestureObserver;
    <GCSystemGestureXPCProxyRemoteServerEndpointInterface> * _serverEndpoint;
    GCSystemGesturesState * _systemGesturesState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GCSystemGesturesState *systemGesturesState;

- (void).cxx_destruct;
- (void)_remoteEndpointHasSetSystemGesturesState:(id)arg1;
- (void)disableSystemGestureForInput:(id)arg1;
- (void)enableSystemGestureForInput:(id)arg1;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialSystemGesture:(id)arg2 isSystemGestureObserver:(bool)arg3;
- (void)invalidateConnection;
- (bool)isSystemGestureObserver;
- (void)newSystemGesturesState:(id)arg1;
- (void)refreshSystemGesturesState;
- (void)setController:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;
- (id)systemGesturesState;

@end
