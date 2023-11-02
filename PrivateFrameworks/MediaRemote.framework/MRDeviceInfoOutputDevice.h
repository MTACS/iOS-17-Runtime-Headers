
@interface MRDeviceInfoOutputDevice : MRAVOutputDevice {
    MRDeviceInfo * _deviceInfo;
    bool  _exporting;
    MRAVOutputDevice * _fallbackOutputDevice;
}

@property (nonatomic, readonly) MRDeviceInfo *deviceInfo;
@property (nonatomic) bool exporting;
@property (nonatomic, retain) MRAVOutputDevice *fallbackOutputDevice;

- (void).cxx_destruct;
- (id)avOutputDevice;
- (bool)canAccessAppleMusic;
- (bool)canAccessRemoteAssets;
- (bool)canAccessiCloudMusicLibrary;
- (id)clusterComposition;
- (id)clusterCompositionMembers;
- (id)clusterCompositionOutputDevices;
- (unsigned int)clusterType;
- (unsigned long long)configuredClusterSize;
- (id)deviceInfo;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (bool)exporting;
- (id)fallbackOutputDevice;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (long long)hostDeviceClass;
- (id)initWithDeviceInfo:(id)arg1;
- (id)initWithDeviceInfo:(id)arg1 fallbackOutputDevice:(id)arg2 forExporting:(bool)arg3;
- (id)initWithDeviceInfo:(id)arg1 forExporting:(bool)arg2;
- (bool)isGroupLeader;
- (bool)isGroupable;
- (bool)isLocalDevice;
- (bool)isProxyGroupPlayer;
- (bool)isRemoteControllable;
- (bool)isVolumeMuted;
- (id)logicalDeviceID;
- (id)modelID;
- (id)name;
- (bool)parentGroupContainsDiscoverableLeader;
- (void)setExporting:(bool)arg1;
- (void)setFallbackOutputDevice:(id)arg1;
- (bool)shouldBeLocallyHosted;
- (bool)supportsBufferedAirPlay;
- (bool)supportsMultiplayer;
- (id)uid;
- (float)volume;
- (unsigned int)volumeCapabilities;

@end
