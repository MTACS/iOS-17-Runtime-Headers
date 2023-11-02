
@interface _HMNetworkRouterProfile : _HMAccessoryProfile {
    <_HMNetworkRouterProfileDelegate> * _delegate;
    NSSet * _identifiersForSatelliteProfiles;
    unsigned long long  _networkStatus;
    bool  _satellite;
}

@property (nonatomic) <_HMNetworkRouterProfileDelegate> *delegate;
@property (readonly) NSSet *identifiersForSatelliteProfiles;
@property (readonly) unsigned long long networkStatus;
@property (getter=isSatellite, readonly) bool satellite;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__handleNetworkStatusUpdated:(id)arg1;
- (void)_handleNetworkStatusUpdated:(id)arg1;
- (void)_handleSatelliteProfilesUpdated:(id)arg1;
- (void)_registerNotificationHandlers;
- (bool)checkForUpdatedIdentifiersForSatellites:(id)arg1;
- (bool)checkForUpdatedNetworkStatus:(unsigned long long)arg1;
- (id)delegate;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (id)identifiersForSatelliteProfiles;
- (id)initWithCoder:(id)arg1;
- (bool)isSatellite;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (unsigned long long)networkStatus;
- (void)setDelegate:(id)arg1;
- (void)setIdentifiersForSatelliteProfiles:(id)arg1;
- (void)setNetworkStatus:(unsigned long long)arg1;
- (void)setSatellite:(bool)arg1;

@end
