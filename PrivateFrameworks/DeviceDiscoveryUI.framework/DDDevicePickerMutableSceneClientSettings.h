
@interface DDDevicePickerMutableSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (nonatomic, retain) NSUUID *agentUUID;
@property (nonatomic, retain) NSUUID *endpointUUID;

- (id)agentUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endpointUUID;
- (void)setAgentUUID:(id)arg1;
- (void)setEndpointUUID:(id)arg1;

@end
