
@interface GCAdaptiveTriggersXPCProxyClientEndpoint : NSObject <GCAdaptiveTriggers, GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointClient> {
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    GCController * _controller;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    GCDeviceAdaptiveTriggersStatusPayload * _leftStatus;
    GCDeviceAdaptiveTriggersPayload * _leftTrigger;
    GCDeviceAdaptiveTriggersStatusPayload * _rightStatus;
    GCDeviceAdaptiveTriggersPayload * _rightTrigger;
    <GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface> * _serverEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, retain) GCDeviceAdaptiveTriggersStatusPayload *leftStatus;
@property (nonatomic, retain) GCDeviceAdaptiveTriggersPayload *leftTrigger;
@property (nonatomic, retain) GCDeviceAdaptiveTriggersStatusPayload *rightStatus;
@property (nonatomic, retain) GCDeviceAdaptiveTriggersPayload *rightTrigger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_remoteEndpointHasSetStatuses:(id)arg1;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialStatuses:(id)arg2;
- (void)invalidateConnection;
- (id)leftStatus;
- (id)leftTrigger;
- (void)newStatuses:(id)arg1;
- (void)refreshStatuses;
- (id)rightStatus;
- (id)rightTrigger;
- (void)setController:(id)arg1;
- (void)setLeftStatus:(id)arg1;
- (void)setLeftTrigger:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;
- (void)setRightStatus:(id)arg1;
- (void)setRightTrigger:(id)arg1;

@end
