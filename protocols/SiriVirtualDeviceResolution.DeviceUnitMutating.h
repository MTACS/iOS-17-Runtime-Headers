
@protocol SiriVirtualDeviceResolution.DeviceUnitMutating

@required

- (NSString *)homeKitAccessoryIdentifier;
- (bool)isCommunalDevice;
- (NSString *)mediaRouteIdentifier;
- (NSString *)name;
- (long long)proximity;
- (NSString *)roomName;
- (void)setHomeKitAccessoryIdentifier:(NSString *)arg1;
- (void)setIsCommunalDevice:(bool)arg1;
- (void)setMediaRouteIdentifier:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setProximity:(long long)arg1;
- (void)setRoomName:(NSString *)arg1;

@end
