
@interface HMDAppleMediaAccessorySensorManager : NSObject <HMDLocalAddAccessoryProgressDelegate, HMFLogging, HMFMessageReceiver> {
    <HMDAppleMediaAccessorySensorManagerDataSource> * _dataSource;
    <HMDAppleMediaAccessorySensorManagerDataStore> * _dataStore;
    bool  _hasAttemptedRecovery;
    bool  _hasPendingRetry;
    bool  _isCurrentlyPairing;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFPairingIdentity * _pairingIdentity;
    unsigned long long  _pairingRetryCount;
    NSDate * _pairingStartTime;
    NSMutableArray * _renamedServiceIDs;
    NSUUID * _sensorAccessoryUUID;
    <HMDHPSManager> * _sensorClient;
    HMSetupAccessoryDescription * _setupDescription;
    bool  _shouldAttemptToSetServiceNames;
    bool  _shouldUseDerivedSensorUUID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly, copy) NSUUID *sensorAccessoryUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_migrateToDataStoreIfNeeded:(id)arg1 completion:(id /* block */)arg2;
- (void)configureWithDataSource:(id)arg1 hpsXPCClient:(id)arg2 dataStore:(id)arg3;
- (void)fetchADKSensorStatusCompletion:(id /* block */)arg1;
- (void)handleAccessoryAdded:(id)arg1;
- (void)handleCharacteristicsChangedNotification:(id)arg1;
- (void)handleErrorCaseTestMessage:(id)arg1;
- (void)handlePrimaryResidentChanged:(id)arg1;
- (id)initWithWorkQueue:(id)arg1;
- (void)localAccessoryAddRequiresConsent:(id)arg1;
- (id)logIdentifier;
- (void)managerIsReadyToBePaired;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)sensorAccessoryUUID;

@end
