
@interface DDDevicePickerSceneClientSettings : UIApplicationSceneClientSettings

@property (nonatomic, readonly) NSUUID *agentUUID;
@property (nonatomic, readonly) NSUUID *endpointUUID;

- (id)agentUUID;
- (id)endpointUUID;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
