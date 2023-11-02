
@interface _TtC27SiriVirtualDeviceResolutionP33_74E156C9C6E4952D4B26C294E7454D5E17MutableDeviceUnit : _TtCs12_SwiftObject <SiriVirtualDeviceResolution.DeviceUnitMutating> {
    void homeKitAccessoryIdentifier;
    void isCommunalDevice;
    void mediaRouteIdentifier;
    void name;
    void proximity;
    void roomName;
}

@property (nonatomic, copy) NSString *homeKitAccessoryIdentifier;
@property (nonatomic) bool isCommunalDevice;
@property (nonatomic, copy) NSString *mediaRouteIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long proximity;
@property (nonatomic, copy) NSString *roomName;

- (id)homeKitAccessoryIdentifier;
- (bool)isCommunalDevice;
- (id)mediaRouteIdentifier;
- (id)name;
- (long long)proximity;
- (id)roomName;
- (void)setHomeKitAccessoryIdentifier:(id)arg1;
- (void)setIsCommunalDevice:(bool)arg1;
- (void)setMediaRouteIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProximity:(long long)arg1;
- (void)setRoomName:(id)arg1;

@end
