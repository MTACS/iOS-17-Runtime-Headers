
@interface HMDAccessoryFirmwareUpdateProfile : HMFObject <HMFLogging> {
    HMDHAPAccessory * _accessory;
    HMFSoftwareVersion * _currentVersion;
    HMDAccessoryMatterFirmwareUpdateProfile * _matterFirmwareUpdateProfile;
    bool  _notificationsEnabled;
    HMDService * _service;
    HMFSoftwareVersion * _stagedFirmwareVersion;
    unsigned long long  _stagingNotReadyReasons;
    unsigned long long  _updateDuration;
    unsigned long long  _updateNotReadyReasons;
    long long  _updateState;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDHAPAccessory *accessory;
@property (nonatomic, retain) HMFSoftwareVersion *currentVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDAccessoryMatterFirmwareUpdateProfile *matterFirmwareUpdateProfile;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (getter=notificationsEnabled, nonatomic) bool notificationsEnabled;
@property (readonly) HMDService *service;
@property (nonatomic, retain) HMFSoftwareVersion *stagedFirmwareVersion;
@property (nonatomic) unsigned long long stagingNotReadyReasons;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long updateDuration;
@property (nonatomic) unsigned long long updateNotReadyReasons;
@property (nonatomic) long long updateState;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__handleAccessoryIsReachable;
- (void)__handleFirmwareUpdateReadinessUpdate:(id)arg1;
- (void)__handleFirmwareUpdateStatusUpdate:(id)arg1;
- (void)__handleFirmwareVersionUpdate:(id)arg1;
- (void)__handleStagedFirmwareVersionUpdate:(id)arg1;
- (void)_enableCharacteristicsNotifications:(bool)arg1;
- (void)_handleCharacteristicChanges:(id)arg1;
- (void)_registerForNotifications;
- (void)_updateAccessoryFirmwareVersion:(id)arg1;
- (void)_updateFirmwareStagingNotReadyReasons:(unsigned long long)arg1;
- (void)_updateFirmwareUpdateDuration:(unsigned long long)arg1;
- (void)_updateFirmwareUpdateNotReadyReasons:(unsigned long long)arg1;
- (void)_updateFirmwareUpdateState:(long long)arg1;
- (void)_updateStagedFirmwareVersion:(id)arg1;
- (id)accessory;
- (id)characteristics;
- (void)configure;
- (id)currentVersion;
- (void)dealloc;
- (id)description;
- (id)firmwareVersionCharacteristic;
- (void)handleAccessoryIsReachable:(id)arg1;
- (void)handleCharacteristicValuesChanged:(id)arg1;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)matterFirmwareUpdateProfile;
- (void)monitorCharacteristics:(bool)arg1;
- (id)notificationCenter;
- (bool)notificationsEnabled;
- (id)privateDescription;
- (void)readAndProcessCharacteristics:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)readinessCharacteristic;
- (id)service;
- (void)setCurrentVersion:(id)arg1;
- (void)setMatterFirmwareUpdateProfile:(id)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setStagedFirmwareVersion:(id)arg1;
- (void)setStagingNotReadyReasons:(unsigned long long)arg1;
- (void)setUpdateDuration:(unsigned long long)arg1;
- (void)setUpdateNotReadyReasons:(unsigned long long)arg1;
- (void)setUpdateState:(long long)arg1;
- (id)stagedFirmwareVersion;
- (unsigned long long)stagingNotReadyReasons;
- (id)statusCharacteristic;
- (unsigned long long)updateDuration;
- (unsigned long long)updateNotReadyReasons;
- (void)updateProfileWithCompletion:(id /* block */)arg1;
- (void)updateProfileWithStagedFirmwareVersion:(id)arg1;
- (long long)updateState;
- (id)workQueue;

@end
