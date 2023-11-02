
@interface GCSystemGestureXPCProxyServerEndpoint : NSObject <GCSystemGestureXPCProxyRemoteServerEndpointInterface, _GCIPCEndpointServer> {
    <GCSystemGestureXPCProxyRemoteClientEndpointInterface> * _clientEndpoint;
    <_GCIPCEndpointConnection> * _connection;
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    <GCSystemGestureXPCProxyServerEndpointDelegate> * _delegate;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    bool  _isSystemGestureObserver;
    unsigned long long  _pendingUpdates;
    GCSystemGesturesState * _systemGesturesState;
    id  _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GCSystemGestureXPCProxyServerEndpointDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, readonly) bool isSystemGestureObserver;
@property (nonatomic, readonly) <_GCControllerComponentDescription> *receiverDescription;
@property (readonly) Class superclass;
@property (nonatomic, retain) GCSystemGesturesState *systemGesturesState;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (void)disableSystemGestureForInput:(id)arg1;
- (void)enableSystemGestureForInput:(id)arg1;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (void)fetchSystemGesturesStateWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)initSystemGestureObserverWithIdentifier:(id)arg1 initialValue:(id)arg2;
- (id)initSystemGestureObserverWithInitialValue:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidateClient;
- (void)invalidateConnection;
- (bool)isSystemGestureObserver;
- (id)receiverDescription;
- (void)setDelegate:(id)arg1;
- (void)setSystemGesturesState:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)systemGesturesState;
- (id)userInfo;

@end
