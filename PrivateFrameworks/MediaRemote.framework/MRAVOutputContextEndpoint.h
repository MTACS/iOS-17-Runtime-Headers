
@interface MRAVOutputContextEndpoint : MRAVEndpoint <NSSecureCoding> {
    MROrigin * _origin;
    MRAVConcreteOutputContext * _outputContext;
    MROutputContextController * _outputContextController;
    NSArray * _outputDevices;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) MROrigin *origin;
@property (nonatomic, retain) MRAVConcreteOutputContext *outputContext;
@property (nonatomic, retain) MROutputContextController *outputContextController;
@property (nonatomic, copy) NSArray *outputDevices;
@property (getter=isRealized, nonatomic, readonly) bool realized;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_adjustOutputDeviceVolume:(long long)arg1 outputDevice:(id)arg2 details:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (id)_externalOutputContext;
- (void)_muteOutputDeviceVolume:(bool)arg1 outputDevice:(id)arg2 details:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)_setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 details:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(id /* block */)arg4;
- (bool)canModifyGroupMembership;
- (void)connectToExternalDeviceWithOptions:(unsigned int)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (long long)connectionType;
- (void)dealloc;
- (id)designatedGroupLeader;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutputContext:(id)arg1 uniqueIdentifier:(id)arg2;
- (bool)isConnected;
- (bool)isProxyGroupPlayer;
- (bool)isRealized;
- (id)origin;
- (id)outputContext;
- (id)outputContextController;
- (void)outputContextDataSourceReloaded:(id)arg1;
- (id)outputDevices;
- (id)personalOutputDevices;
- (id)predictedOutputDevice;
- (void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)resetPredictedOutputDevice;
- (void)setAllowsHeadTrackedSpatialAudio:(bool)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setConversationDetectionEnabled:(bool)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setHeadTrackedSpatialAudioMode:(id)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setListeningMode:(id)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setOrigin:(id)arg1;
- (void)setOutputContext:(id)arg1;
- (void)setOutputContextController:(id)arg1;
- (void)setOutputDevices:(id)arg1;
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 fadeAudio:(bool)arg3 withReplyQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)uniqueIdentifier;

@end
