
@interface GCAdaptiveTriggersXPCProxyServerEndpoint : NSObject <GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface, _GCIPCEndpointServer> {
    <GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface> * _clientEndpoint;
    <_GCIPCEndpointConnection> * _connection;
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    <GCAdaptiveTriggersXPCProxyServerEndpointDelegate> * _delegate;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    GCDeviceAdaptiveTriggersPayload * _leftTrigger;
    unsigned long long  _pendingUpdates;
    GCDeviceAdaptiveTriggersPayload * _rightTrigger;
    NSArray * _statuses;
    id  _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GCAdaptiveTriggersXPCProxyServerEndpointDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, retain) GCDeviceAdaptiveTriggersPayload *leftTrigger;
@property (nonatomic, readonly) <_GCControllerComponentDescription> *receiverDescription;
@property (nonatomic, retain) GCDeviceAdaptiveTriggersPayload *rightTrigger;
@property (nonatomic, retain) NSArray *statuses;
@property (readonly) Class superclass;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (void)fetchStatusesWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 initialStatuses:(id)arg2;
- (id)initWithInitialStatuses:(id)arg1;
- (void)invalidateClient;
- (void)invalidateConnection;
- (id)leftTrigger;
- (void)newAdaptiveTriggerPayload:(id)arg1 index:(int)arg2;
- (id)receiverDescription;
- (id)rightTrigger;
- (void)setDelegate:(id)arg1;
- (void)setLeftTrigger:(id)arg1;
- (void)setRightTrigger:(id)arg1;
- (void)setStatuses:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)statuses;
- (id)userInfo;

@end
