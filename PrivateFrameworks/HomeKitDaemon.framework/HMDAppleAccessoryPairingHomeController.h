
@interface HMDAppleAccessoryPairingHomeController : HMFObject <HMBLocalZoneModelObserver, HMFTimerDelegate> {
    <HMDAppleAccessoryPairingControllerDataSource> * _dataSource;
    HMDHomeManager * _homeManager;
    HMBLocalZone * _localZone;
    HMFFuture * _queryFuture;
    HMDAppleAccessoryPairingHomeState * _state;
    unsigned long long  _suppressedQueries;
    HMFTimer * _upgradeCheckTimer;
}

@property (nonatomic, readonly) <HMDAppleAccessoryPairingControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly) HMBLocalZone *localZone;
@property (nonatomic, retain) HMFFuture *queryFuture;
@property (nonatomic, readonly) HMDAppleAccessoryPairingHomeState *state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suppressedQueries;
@property (readonly) HMFTimer *upgradeCheckTimer;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleDeviceNotification:(id)arg1;
- (void)checkDeviceVersionAndSendUpgrade;
- (void)cleanupLegacyZone;
- (id)dataSource;
- (bool)handleMessage:(id)arg1 from:(id)arg2;
- (id)homeManager;
- (id)initWithState:(id)arg1 homeManager:(id)arg2 dataSource:(id)arg3;
- (id)localZone;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (id)logIdentifier;
- (void)postNotificationOfDeviceUpdated;
- (void)postSoftwareUpdateEventForDescriptor:(id)arg1;
- (void)postSoftwareUpdateEventForSoftwareUpdate:(id)arg1;
- (void)processHMDAppleMediaAccessoryModel:(id)arg1;
- (void)processHMDResidentDeviceModel:(id)arg1;
- (id)queryFuture;
- (void)setQueryFuture:(id)arg1;
- (void)setSuppressedQueries:(unsigned long long)arg1;
- (void)startWithLocalZone:(id)arg1;
- (id)state;
- (unsigned long long)suppressedQueries;
- (void)timerDidFire:(id)arg1;
- (id)upgradeCheckTimer;
- (id)workContext;

@end
