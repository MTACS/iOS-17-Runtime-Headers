
@interface MPAVOutputDeviceRoute : MPAVRoute {
    NSArray * _clusterCompositionMembers;
    NSArray * _clusterMemberRoutes;
    void * _logicalLeaderOutputDevice;
    NSArray * _outputDevices;
    NSArray * _roomRoutes;
}

@property (nonatomic, readonly) NSArray *clusterMemberRoutes;
@property (nonatomic, readonly) NSArray *dnsNames;
@property (getter=isGroupLeader, nonatomic, readonly) bool groupLeader;
@property (nonatomic, readonly) void*logicalLeaderOutputDevice;
@property (nonatomic, readonly) MRAVOutputDevice *outputDevice;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (getter=isPhoneLocalRoute, nonatomic, readonly) bool phoneLocalRoute;
@property (nonatomic, readonly) NSArray *roomRoutes;

+ (id)localDeviceUID;
+ (void*)logicalLeaderFromOutputDevices:(id)arg1;
+ (long long)pickableRouteTypeForOutputDevice:(void*)arg1;

- (void).cxx_destruct;
- (bool)_anyOutputDeviceObjPassesTest:(id /* block */)arg1;
- (bool)_anyOutputDevicePassesMRFunction:(int (*)arg1;
- (bool)_anyOutputDevicePassesTest:(id /* block */)arg1;
- (bool)canAccessRemoteAssets;
- (bool)canFetchMediaDataFromSender;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (id)clusterComposition;
- (id)clusterCompositionRoutes;
- (id)clusterMemberRoutes;
- (long long)clusterType;
- (id)description;
- (id)designatedGroupLeaderRouteUID;
- (id)dnsNames;
- (id)groupUID;
- (bool)headTrackedSpatialAudioEnabled;
- (id)initWithOutputDevices:(id)arg1;
- (id)initWithOutputDevices:(id)arg1 parentRoute:(id)arg2;
- (bool)isAirPlayRoute;
- (bool)isAppleAccessory;
- (bool)isAppleTVRoute;
- (bool)isB520Route;
- (bool)isCarplayRoute;
- (bool)isClusterRoute;
- (bool)isDeviceRoute;
- (bool)isDeviceSpeakerPhoneRoute;
- (bool)isDeviceSpeakerRoute;
- (bool)isGroupLeader;
- (bool)isHomePodRoute;
- (bool)isHomeTheaterRoute;
- (bool)isKnown;
- (bool)isLowFidelityRoute;
- (bool)isLowLatencyRoute;
- (bool)isMacRoute;
- (bool)isNearby;
- (bool)isPhoneLocalRoute;
- (bool)isPhoneRoute;
- (bool)isPickable;
- (bool)isPicked;
- (bool)isPickedOnPairedDevice;
- (bool)isProxyGroupPlayer;
- (bool)isSplitterCapable;
- (bool)isStereoPair;
- (bool)isVolumeControlAvailable;
- (void*)logicalLeaderOutputDevice;
- (long long)originalRouteSubtype;
- (id)outputDevice;
- (id)outputDevices;
- (long long)pickableRouteType;
- (id)playingPairedDeviceName;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)productIdentifier;
- (bool)requiresPassword;
- (id)roomRoutes;
- (id)routeName;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (id)subRoutes;
- (bool)supportsAirPlayGrouping;
- (bool)supportsGrouping;
- (bool)supportsHeadTrackedSpatialAudio;
- (bool)supportsWirelessDisplay;

@end
