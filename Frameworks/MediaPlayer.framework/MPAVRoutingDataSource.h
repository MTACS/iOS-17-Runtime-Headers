
@interface MPAVRoutingDataSource : NSObject <NSObject> {
    NSString * _activeAudioCategory;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _devicePresenceDetected;
    bool  _didReceiveDiscoveryResults;
    long long  _discoveryMode;
    long long  _filterMode;
    bool  _hasActiveAudioCategory;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned int  _targetSessionID;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (nonatomic, readonly, copy) NSString *activeAudioCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool devicePresenceDetected;
@property (nonatomic, readonly) bool didReceiveDiscoveryResults;
@property (nonatomic) long long discoveryMode;
@property (nonatomic) long long filterMode;
@property (nonatomic, readonly) bool hasActiveAudioCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsMultipleSelection;
@property (nonatomic) unsigned int targetSessionID;

- (void).cxx_destruct;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_reloadActiveAudioCategoryWithCompletion:(id /* block */)arg1;
- (id)_stateDumpObject;
- (void)_superclassRegisterNotifications;
- (void)_superclassUnregisterNotifications;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
- (id)activeAudioCategory;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (bool)didReceiveDiscoveryResults;
- (long long)discoveryMode;
- (long long)filterMode;
- (void)getExternalScreenTypeWithCompletion:(id /* block */)arg1;
- (void)getPickedRouteHasVolumeControlWithCompletion:(id /* block */)arg1;
- (id)getRoutesForCategory:(id)arg1;
- (bool)hasActiveAudioCategory;
- (id)init;
- (bool)routeIsLeaderOfEndpoint:(id)arg1;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setFilterMode:(long long)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(id /* block */)arg3;
- (void)setTargetSessionID:(unsigned int)arg1;
- (bool)supportsMultipleSelection;
- (unsigned int)targetSessionID;
- (void)unpickAirPlayAVRoutesWithCompletion:(id /* block */)arg1;

@end
