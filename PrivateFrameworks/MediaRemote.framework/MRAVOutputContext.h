
@interface MRAVOutputContext : NSObject {
    NSArray * _outputDevices;
    NSArray * _outputDevicesSnapshot;
    bool  _postChangedScheduled;
    bool  _postOutputDeviceChangedScheduled;
    bool  _postOutputDevicesChangedScheduled;
}

@property (nonatomic, readonly) bool containsLocalDevice;
@property (nonatomic, readonly) NSString *contextID;
@property (nonatomic, readonly) NSArray *outputDeviceUIDs;
@property (nonatomic, retain) NSArray *outputDevices;
@property (nonatomic, readonly) NSArray *outputDevicesSnapshot;
@property (nonatomic, readonly) NSArray *personalDeviceUIDs;
@property (nonatomic, readonly) NSArray *personalDevices;
@property (nonatomic, readonly) MRAVOutputDevice *predictedOutputDevice;
@property (nonatomic, readonly) bool supportsMultipleBluetoothOutputDevices;
@property (nonatomic, readonly) bool supportsVolumeControl;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic) float volume;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) bool volumeControlAvailable;
@property (nonatomic, readonly) unsigned int volumeControlCapabilities;
@property (getter=isVolumeMuted, nonatomic) bool volumeMuted;

+ (id)iTunesContext;
+ (id)notificationQueue;
+ (id)sharedAudioPresentationContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;

- (void).cxx_destruct;
- (void)_compareOutputDeviceList:(id)arg1 withNewOutputDeviceList:(id)arg2;
- (void)_notfiyOutputDeviceRemoved:(id)arg1;
- (void)_notifyChangesInOutputDevicesWithAdded:(id)arg1 removed:(id)arg2 updated:(id)arg3 previous:(id)arg4 newDevices:(id)arg5;
- (void)_notifyOutputDeviceAdded:(id)arg1;
- (void)_notifyOutputDeviceChanged:(id)arg1;
- (void)_reloadOutputDevices;
- (void)_reloadWithOutputDevices:(id)arg1;
- (void)_scheduleOutputContextDeviceDidChangeNotification;
- (void)_scheduleOutputContextDevicesDidChangeNotification;
- (void)_scheduleOutputContextDidChangeNotification;
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 fadeAudio:(bool)arg3 withCallbackQueue:(id)arg4 block:(id /* block */)arg5;
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(id /* block */)arg4;
- (void)addOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(id /* block */)arg3;
- (void)adjustVolume:(long long)arg1 details:(id)arg2;
- (bool)containsLocalDevice;
- (bool)containsOutputDevice:(id)arg1;
- (bool)containsOutputDeviceUID:(id)arg1;
- (id)contextID;
- (bool)isVolumeControlAvailable;
- (bool)isVolumeMuted;
- (id)outputDeviceForUID:(id)arg1;
- (id)outputDeviceUIDs;
- (id)outputDevices;
- (id)outputDevicesSnapshot;
- (id)personalDeviceUIDs;
- (id)personalDevices;
- (id)predictedOutputDevice;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(id /* block */)arg2;
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 fadeAudio:(bool)arg3 withCallbackQueue:(id)arg4 block:(id /* block */)arg5;
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(id /* block */)arg4;
- (void)removeOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(id /* block */)arg3;
- (void)resetPredictedOutputDevice;
- (void)setOutputDevices:(id)arg1;
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 password:(id)arg3 fadeAudio:(bool)arg4 withCallbackQueue:(id)arg5 block:(id /* block */)arg6;
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(id /* block */)arg4;
- (void)setOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(id /* block */)arg3;
- (void)setOutputDevices:(id)arg1 withPassword:(id)arg2 withCallbackQueue:(id)arg3 block:(id /* block */)arg4;
- (void)setVolume:(float)arg1;
- (void)setVolume:(float)arg1 details:(id)arg2;
- (void)setVolumeMuted:(bool)arg1;
- (void)setVolumeMuted:(bool)arg1 details:(id)arg2;
- (bool)shouldLog;
- (bool)supportsMultipleBluetoothOutputDevices;
- (bool)supportsVolumeControl;
- (unsigned int)type;
- (id)uniqueIdentifier;
- (float)volume;
- (unsigned int)volumeControlCapabilities;

@end
