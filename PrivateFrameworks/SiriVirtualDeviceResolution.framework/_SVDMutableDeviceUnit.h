
@interface _SVDMutableDeviceUnit : NSObject <SVDDeviceUnitMutating> {
    NSString * _homeKitAccessoryIdentifier;
    bool  _isCommunalDevice;
    NSString * _mediaRouteIdentifier;
    NSString * _name;
    long long  _proximity;
    NSString * _roomName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *homeKitAccessoryIdentifier;
@property (nonatomic) bool isCommunalDevice;
@property (nonatomic, copy) NSString *mediaRouteIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long proximity;
@property (nonatomic, copy) NSString *roomName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
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
