
@interface MPAVEndpointRoute : MPAVRoute {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    MPAVRouteConnection * _connection;
    MPMRAVEndpointWrapper * _endpointWrapper;
    NSString * _sortName;
}

@property (nonatomic, readonly) bool canModifyGroupMembership;
@property (nonatomic, retain) MPAVRouteConnection *connection;
@property (nonatomic, readonly) void*endpoint;
@property (nonatomic, readonly) MRAVEndpoint *endpointObject;
@property (nonatomic, retain) MPMRAVEndpointWrapper *endpointWrapper;
@property (nonatomic, readonly) UIImage *placeholderIcon;
@property (nonatomic, readonly) MPAVOutputDeviceRoute *predictedOutputDevice;
@property (nonatomic, readonly) NSString *sortName;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)getActiveEndpointRouteWithCompletion:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_endpointDidChange:(id)arg1;
- (void)_endpointOutputDevicesDidChange:(id)arg1;
- (void)_endpointPredictedOutputDeviceDidChange:(id)arg1;
- (bool)_groupLeaderIsOfDeviceSubtype:(unsigned int)arg1;
- (unsigned long long)_outputDevicesComposition;
- (bool)canAccessRemoteAssets;
- (bool)canFetchMediaDataFromSender;
- (bool)canModifyGroupMembership;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (id)clusterComposition;
- (long long)clusterType;
- (id)connection;
- (void)dealloc;
- (id)description;
- (id)designatedGroupLeaderName;
- (id)designatedGroupLeaderRouteUID;
- (id)effectiveGroupLeader;
- (void)encodeWithCoder:(id)arg1;
- (void*)endpoint;
- (id)endpointObject;
- (id)endpointWrapper;
- (void)establishGroup;
- (id)groupLeaderAirplayIdentifier;
- (id)groupUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(void*)arg1;
- (bool)isAirPlayingToDevice;
- (bool)isAppleTVRoute;
- (bool)isB520Route;
- (bool)isClusterRoute;
- (bool)isDeviceRoute;
- (bool)isDeviceSpeakerRoute;
- (bool)isHomePodRoute;
- (bool)isHomeTheaterRoute;
- (bool)isLowFidelityRoute;
- (bool)isLowLatencyRoute;
- (bool)isMacRoute;
- (bool)isPhoneRoute;
- (bool)isPickable;
- (bool)isProxyGroupPlayer;
- (bool)isRoutingToWirelessDevice;
- (bool)isSplitRoute;
- (bool)isSplitterCapable;
- (bool)isStereoPair;
- (bool)isTVRoute;
- (long long)numberOfOutputDevices;
- (long long)originalRouteSubtype;
- (id)predictedOutputDevice;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)productIdentifier;
- (void)resetPredictedOutputDevice;
- (id)routeName;
- (id)routeNames;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (void)setConnection:(id)arg1;
- (void)setEndpointWrapper:(id)arg1;
- (id)sortName;
- (bool)supportsAirPlayGrouping;
- (bool)supportsGrouping;
- (bool)supportsRemoteControl;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

- (id)placeholderIcon;

@end
