
@interface AVOutputDeviceGroup : NSObject {
    <AVOutputDeviceGroupImpl> * _impl;
}

@property (readonly) AVOutputDevice *groupLeader;
@property (readonly) NSArray *outputDevices;
@property (readonly) bool receivesLongFormAudioFromLocalDevice;
@property (readonly) float volume;
@property (readonly) long long volumeControlType;

+ (void)initialize;

- (void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)description;
- (id)groupLeader;
- (unsigned long long)hash;
- (id)impl;
- (id)initWithOutputDeviceGroupImpl:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)outputDeviceGroupImpl:(id)arg1 didChangeOutputDevicesWithInitiator:(id)arg2;
- (void)outputDeviceGroupImplDidChangeVolume:(id)arg1;
- (void)outputDeviceGroupImplDidChangeVolumeControlType:(id)arg1;
- (id)outputDevices;
- (bool)receivesLongFormAudioFromLocalDevice;
- (void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setVolume:(float)arg1;
- (float)volume;
- (long long)volumeControlType;

@end
