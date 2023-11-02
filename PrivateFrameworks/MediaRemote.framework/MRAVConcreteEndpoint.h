
@interface MRAVConcreteEndpoint : MRConcreteEndpoint {
    AVOutputDeviceGroup * _outputDeviceGroup;
}

+ (id)errorWithChangeResult:(id)arg1 outputDevice:(id)arg2;

- (void).cxx_destruct;
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handleVolumeCapabilityChangedNotification:(id)arg1;
- (void)handleVolumeChangedNotification:(id)arg1;
- (id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2;
- (id)initWithOutputDeviceGroup:(id)arg1 groupLeader:(id)arg2 outputDevices:(id)arg3;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)registerVolumeNotifications;
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)setExternalDevice:(id)arg1;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(id /* block */)arg4;
- (float)volumeForOutputDevice:(id)arg1 error:(id*)arg2;

@end
