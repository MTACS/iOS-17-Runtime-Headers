
@interface HMDAccessoryMatterFirmwareUpdateProfile : HMFObject <HMFLogging> {
    HMDHAPAccessory * _accessory;
    NSNumber * _matterFirmwareRevisionNumber;
    HMDMatterSoftwareUpdateProviderDelegate * _matterSoftwareUpdateProviderDelegate;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDHAPAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *matterFirmwareRevisionNumber;
@property HMDMatterSoftwareUpdateProviderDelegate *matterSoftwareUpdateProviderDelegate;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__handleAccessoryIsReachable;
- (void)__handleMatterFirmwareRevisionNumberUpdate:(id)arg1;
- (void)__handleMatterFirmwareUpdateStatusUpdate:(id)arg1;
- (void)_enableCharacteristicsNotifications:(bool)arg1;
- (void)_handleCharacteristicChanges:(id)arg1;
- (void)_registerForNotifications;
- (id)accessory;
- (id)characteristics;
- (void)configure;
- (void)configureWithMatterSoftwareUpdateProviderDelegate:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)handleAccessoryIsReachable:(id)arg1;
- (void)handleAccessoryIsRemotelyReachable:(id)arg1;
- (void)handleCharacteristicValuesChanged:(id)arg1;
- (void)handleFirmwareVersionStringUpdatedNotification:(id)arg1;
- (void)handleVIDPIDUpdatedNotification:(id)arg1;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2;
- (id)logIdentifier;
- (id)matterFirmwareRevisionNumber;
- (id)matterSoftwareUpdateProviderDelegate;
- (id)notificationCenter;
- (id)privateDescription;
- (void)readAndProcessCharacteristics:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)readMatterFirmwareUpdateCharacteristics;
- (void)setMatterFirmwareRevisionNumber:(id)arg1;
- (void)setMatterSoftwareUpdateProviderDelegate:(id)arg1;
- (id)workQueue;

@end
