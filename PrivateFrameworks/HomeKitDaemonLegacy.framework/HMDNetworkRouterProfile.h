
@interface HMDNetworkRouterProfile : HMDAccessoryProfile {
    unsigned long long  _networkStatus;
    long long  _routerStatus;
    unsigned long long  _wanStatus;
}

@property (nonatomic) unsigned long long networkStatus;
@property (nonatomic) long long routerStatus;
@property (nonatomic) unsigned long long wanStatus;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void)__handleNetworkAccessViolationUpdate:(id)arg1;
- (void)__notifyClientsOfNetworkStatus:(unsigned long long)arg1;
- (void)_updateRouterStatus:(long long)arg1;
- (void)_updateWANStatus:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleAccessoryIsReachable:(id)arg1;
- (void)handleCharacteristicsChangedNotification:(id)arg1;
- (void)handleInitialState;
- (void)handleNetworkRouterSatelliteAddedOrRemoved:(id)arg1;
- (id)initWithRouterService:(id)arg1 msgDispatcher:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)networkStatus;
- (void)registerForMessages;
- (long long)routerStatus;
- (id)runtimeState;
- (void)setNetworkStatus:(unsigned long long)arg1;
- (void)setRouterStatus:(long long)arg1;
- (void)setWanStatus:(unsigned long long)arg1;
- (void)unconfigure;
- (unsigned long long)wanStatus;

@end
