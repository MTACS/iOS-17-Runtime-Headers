
@interface MRAVConcreteOutputContext : MRAVOutputContext {
    bool  _attemptingLogicalDeviceRecovery;
    AVOutputContext * _avOutputContext;
    NSArray * _concreteOutputDevices;
    bool  _handlingAirPlayDevicesTimeOut;
    bool  _isVolumeControlAvailable;
    NSMutableDictionary * _notifications;
    MRAVOutputDeviceSourceInfo * _outputDeviceSourceInfo;
    MRAVConcreteOutputDevice * _predictedOutputDevice;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned int  _type;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) AVOutputContext *avOutputContext;
@property (nonatomic, copy) NSArray *concreteOutputDevices;
@property (nonatomic) bool isVolumeControlAvailable;

+ (id)createOutputContextWithUniqueIdentifier:(id)arg1;
+ (id)iTunesContext;
+ (id)outputContextForLocalDevice;
+ (id /* block */)outputContextForLocalDeviceDataSource;
+ (void)setOutputContextForLocalDeviceDataSource:(id /* block */)arg1;
+ (id)sharedAudioPresentationContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;

- (void).cxx_destruct;
- (void)_handleCanMuteDidChangeNotification:(id)arg1;
- (void)_handleClusterMemberCanMuteDidChangeNotification:(id)arg1;
- (void)_handleClusterMemberMutedDidChangeNotification:(id)arg1;
- (void)_handleClusterMemberRoomVolumeDidChangeNotification:(id)arg1;
- (void)_handleClusterMemberVolumeControlTypeDidChangeNotification:(id)arg1;
- (void)_handleClusterMemberVolumeDidChangeNotification:(id)arg1;
- (void)_handleLocalDeviceDidChangeOutputContextNotification:(id)arg1;
- (void)_handleMutedDidChangeNotification:(id)arg1;
- (void)_handleOutputContextSupportsVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDevicesDidChangeNotification:(id)arg1;
- (void)_handlePredictedOutputDeviceDidChangeNotification:(id)arg1;
- (void)_outputContextChangeInitiatedNotification:(id)arg1;
- (void)_reloadOutputDevices;
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 fadeAudio:(bool)arg3 withCallbackQueue:(id)arg4 block:(id /* block */)arg5;
- (void)adjustVolume:(long long)arg1 details:(id)arg2;
- (void)attemptLogicalDeviceRecovery;
- (id)avOutputContext;
- (id)concreteOutputDevices;
- (id)contextID;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithAVOutputContext:(id)arg1 type:(unsigned int)arg2;
- (bool)isVolumeControlAvailable;
- (bool)isVolumeMuted;
- (id)predictedOutputDevice;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(id /* block */)arg2;
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 fadeAudio:(bool)arg3 withCallbackQueue:(id)arg4 block:(id /* block */)arg5;
- (void)resetPredictedOutputDevice;
- (void)setAvOutputContext:(id)arg1;
- (void)setConcreteOutputDevices:(id)arg1;
- (void)setIsVolumeControlAvailable:(bool)arg1;
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 password:(id)arg3 fadeAudio:(bool)arg4 withCallbackQueue:(id)arg5 block:(id /* block */)arg6;
- (void)setVolume:(float)arg1 details:(id)arg2;
- (void)setVolumeMuted:(bool)arg1 details:(id)arg2;
- (bool)supportsMultipleBluetoothOutputDevices;
- (bool)supportsVolumeControl;
- (unsigned int)type;
- (id)uniqueIdentifier;
- (float)volume;
- (unsigned int)volumeControlCapabilities;

@end
