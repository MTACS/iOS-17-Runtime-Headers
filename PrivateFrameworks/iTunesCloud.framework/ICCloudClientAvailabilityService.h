
@interface ICCloudClientAvailabilityService : NSObject <ICCloudAvailability> {
    <ICCloudServerListenerEndpointProviding> * _listenerEndpointProvider;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <ICCloudServerListenerEndpointProviding> *listenerEndpointProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)_xpcConnectionWithListenerEndpoint:(id)arg1;
- (bool)canShowCloudDownloadButtons;
- (bool)canShowCloudMusic;
- (bool)canShowCloudVideo;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (bool)hasProperNetworkConditionsToShowCloudMedia;
- (id)initWithListenerEndpointProvider:(id)arg1;
- (bool)isCellularDataRestricted;
- (bool)isCellularDataRestrictedForMusic;
- (bool)isCellularDataRestrictedForStoreApps;
- (bool)isCellularDataRestrictedForVideos;
- (id)listenerEndpointProvider;
- (id)serialQueue;
- (bool)shouldProhibitActionsForCurrentNetworkConditions;
- (bool)shouldProhibitMusicActionForCurrentNetworkConditions;
- (bool)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (bool)shouldProhibitVideosActionForCurrentNetworkConditions;
- (id)xpcConnection;

@end
