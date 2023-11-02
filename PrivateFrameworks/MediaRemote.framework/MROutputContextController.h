
@interface MROutputContextController : MROutputContextDataSource {
    MRAVOutputDevice * _designatedGroupLeaderWhenContextEmpty;
    bool  _groupVolumeMuted;
    float  _localVolume;
    unsigned int  _localVolumeControlCapabilities;
    bool  _localVolumeControlCapabilitiesInitialized;
    bool  _localVolumeInitialized;
    bool  _localVolumeMuted;
    bool  _localVolumeMutedInitialized;
    float  _masterVolume;
    unsigned int  _masterVolumeControlCapabilities;
    MRAVOutputContext * _outputContext;
    NSMutableDictionary * _outputDeviceVolume;
    NSMutableDictionary * _outputDeviceVolumeMuted;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) MRAVOutputDevice *designatedGroupLeaderWhenContextEmpty;
@property (getter=isLocalDeviceDesignatedGroupLeader, nonatomic, readonly) bool localDeviceDesignatedGroupLeader;
@property (nonatomic) float localVolume;
@property (nonatomic) unsigned int localVolumeControlCapabilities;
@property (nonatomic) bool localVolumeMuted;
@property (getter=isOutputContextEmpty, nonatomic, readonly) bool outputContextEmpty;
@property (nonatomic, readonly) bool useLocalValues;
@property (nonatomic, readonly) bool useOutputContextValues;

+ (id)sharedOutputContextController;

- (void).cxx_destruct;
- (void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_handleLocalDeviceVolumeDidChangeNotification:(id)arg1;
- (void)_handleLocalDeviceVolumeMutedDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceAddedNotification:(id)arg1;
- (void)_handleOutputDeviceDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceRemovedNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeMutedDidChangeNotification:(id)arg1;
- (void)_handleOutputDevicesReloadedNotification:(id)arg1;
- (void)_handlePredictedOutputDeviceDidChangeNotification:(id)arg1;
- (id)adjustVolume:(long long)arg1 outputDeviceUID:(id)arg2 details:(id)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)designatedGroupLeaderWhenContextEmpty;
- (id)initWithOutputContext:(id)arg1;
- (bool)isLocalDeviceDesignatedGroupLeader;
- (bool)isOutputContextEmpty;
- (float)localVolume;
- (unsigned int)localVolumeControlCapabilities;
- (bool)localVolumeMuted;
- (id)muteVolume:(bool)arg1 outputDeviceUID:(id)arg2 details:(id)arg3;
- (id)outputDevices;
- (void)setDesignatedGroupLeaderWhenContextEmpty:(id)arg1;
- (void)setLocalVolume:(float)arg1;
- (void)setLocalVolumeControlCapabilities:(unsigned int)arg1;
- (void)setLocalVolumeMuted:(bool)arg1;
- (id)setVolume:(float)arg1 outputDeviceUID:(id)arg2 details:(id)arg3;
- (id)uniqueIdentifier;
- (bool)useLocalValues;
- (bool)useOutputContextValues;
- (float)volume;
- (unsigned int)volumeControlCapabilities;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)arg1 error:(id*)arg2;
- (float)volumeForOutputDeviceUID:(id)arg1 error:(id*)arg2;
- (bool)volumeMutedForOutputDevice:(id)arg1 error:(id*)arg2;

@end
