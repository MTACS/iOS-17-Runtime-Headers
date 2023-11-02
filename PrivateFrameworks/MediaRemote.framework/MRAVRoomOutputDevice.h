
@interface MRAVRoomOutputDevice : MRAVOutputDevice {
    NSArray * _clusterComposition;
    MRAVConcreteOutputDevice * _concreteOutputDevice;
    NSString * _label;
    MRAVOutputDevice * _outputDevice;
    NSArray * _roomMemberOutputDevices;
    NSString * _uid;
}

@property (nonatomic, readonly) MRAVConcreteOutputDevice *concreteOutputDevice;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) MRAVOutputDevice *outputDevice;
@property (nonatomic, readonly) MRAVOutputDevice *roomMemberOutputDevice;
@property (nonatomic, readonly) NSArray *roomMemberOutputDevices;

+ (id)calculateOutputDeviceIDFromOutputDeviceID:(id)arg1 withRoomID:(id)arg2;

- (void).cxx_destruct;
- (void)adjustVolume:(long long)arg1 details:(id)arg2;
- (id)clusterComposition;
- (unsigned int)clusterType;
- (id)concreteOutputDevice;
- (bool)containsUID:(id)arg1;
- (id)debugName;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (id)initWithOutputDevice:(id)arg1 memberOutputDevices:(id)arg2;
- (bool)isPickable;
- (bool)isVolumeMuted;
- (id)label;
- (id)localizedName;
- (id)modelID;
- (id)name;
- (id)outputDevice;
- (id)parentUID;
- (id)primaryID;
- (id)roomID;
- (id)roomMemberOutputDevice;
- (id)roomMemberOutputDevices;
- (id)roomName;
- (void)setVolume:(float)arg1 details:(id)arg2;
- (void)setVolumeMuted:(bool)arg1 details:(id)arg2;
- (id)uid;
- (float)volume;
- (unsigned int)volumeCapabilities;

@end
