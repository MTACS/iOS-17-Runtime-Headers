
@interface HMDNetworkRouterSatelliteProfile : HMDAccessoryProfile {
    unsigned long long  _networkStatus;
    long long  _satelliteStatus;
}

@property (nonatomic) unsigned long long networkStatus;
@property (nonatomic) long long satelliteStatus;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void)__handleAccessoryConnected;
- (void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)arg1;
- (void)__updateSatelliteStatus:(id)arg1;
- (void)_handleCharacteristicChanges:(id)arg1;
- (void)_handleCharacteristicsChangedPayload:(id)arg1;
- (void)_readAndProcessCharacteristics:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_readAndUpdateCharacteristic;
- (void)_registerForNotifications;
- (void)_registerForRemoteNotifications;
- (void)_updateNetworkStatus;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleAccessoryIsReachable:(id)arg1;
- (void)handleCharacteristicsChangedNotification:(id)arg1;
- (void)handleInitialState;
- (id)initWithRouterSatelliteService:(id)arg1 msgDispatcher:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)networkStatus;
- (void)registerForMessages;
- (id)runtimeState;
- (long long)satelliteStatus;
- (void)setNetworkStatus:(unsigned long long)arg1;
- (void)setSatelliteStatus:(long long)arg1;
- (void)unconfigure;

@end
