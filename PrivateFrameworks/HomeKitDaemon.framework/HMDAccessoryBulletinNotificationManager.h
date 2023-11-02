
@interface HMDAccessoryBulletinNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    HMDAppleAccountManager * _accountManager;
    bool  _currentPrimary;
    HMDNotificationConditionEvaluator * _evaluator;
    HMDHome * _home;
    NSNotificationCenter * _notificationCenter;
    HMFTimer * _synchronizeWithPrimaryDebounceTimer;
    id /* block */  _synchronizeWithPrimaryDebounceTimerFactory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSArray *accessoryRegistrations;
@property (readonly) NSArray *accessoryRegistrationsForCurrentDevice;
@property (readonly) HMDAppleAccountManager *accountManager;
@property bool currentPrimary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDNotificationConditionEvaluator *evaluator;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSArray *serviceRegistrationsForCurrentDevice;
@property (readonly) HMDBulletinNotificationRegistrationSource *source;
@property (readonly) Class superclass;
@property (retain) HMFTimer *synchronizeWithPrimaryDebounceTimer;
@property (copy) id /* block */ synchronizeWithPrimaryDebounceTimerFactory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_characteristicBulletinRegistrationsForSource:(id)arg1 context:(id)arg2;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)_accessoryRegistrationFromMKFRegistrationSafe:(id)arg1;
- (id)_characteristicsWithPassingLocalRegistrationForCharacteristics:(id)arg1;
- (id)_currentHomeAccessoryUUIDs;
- (id)_devicesToNotifyForCharacteristic:(id)arg1;
- (void)_handleAccessoryBulletinNotificationRegistration:(id)arg1 removed:(bool)arg2;
- (void)_handleCurrentDeviceOrAccountUpdatedNotification:(id)arg1;
- (void)_handleDeviceBecameNotPrimary;
- (void)_handleDeviceBecamePrimary;
- (void)_handlePrimaryResidentUpdateNotification:(id)arg1;
- (id)_mkfLocalCharacteristicRegistrationsWithManagedObjectContext:(id)arg1;
- (id)_mkfLocalServiceRegistrationsWithManagedObjectContext:(id)arg1;
- (void)_requestSynchronizeRegistrations;
- (void)_synchronizeLocalRegistrationsWithPrimaryResident;
- (id)_updateReasonsByCharacteristicFromMessage:(id)arg1;
- (void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)arg1 disabledRegistrations:(id)arg2;
- (id)accessoryBulletinNotificationRegistrationsForCharacteristic:(id)arg1;
- (id)accessoryRegistrations;
- (id)accessoryRegistrationsForCurrentDevice;
- (id)accountManager;
- (id)bulletinBoardNotificationForService:(id)arg1;
- (id)bulletinCharacteristicsFromChangedCharacteristics:(id)arg1 message:(id)arg2;
- (id)characteristicsByDestinationForCharacteristics:(id)arg1;
- (id)conditionsFromPredicate:(id)arg1;
- (void)configureWithDeviceIsResidentCapable:(bool)arg1;
- (bool)currentPrimary;
- (void)disableBulletinForService:(id)arg1 completion:(id /* block */)arg2;
- (void)enableBulletinForService:(id)arg1 conditions:(id)arg2 completion:(id /* block */)arg3;
- (id)evaluator;
- (void)handleCurrentDeviceOrAccountUpdatedNotification:(id)arg1;
- (void)handleDisabledRegistrations:(id)arg1;
- (void)handleEnabledRegistrations:(id)arg1;
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;
- (void)handleRemovedService:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2 accountManager:(id)arg3 evaluator:(id)arg4 notificationCenter:(id)arg5;
- (id)logIdentifier;
- (id)notificationCenter;
- (id)serviceRegistrationsForCurrentDevice;
- (void)setCurrentPrimary:(bool)arg1;
- (void)setSynchronizeWithPrimaryDebounceTimer:(id)arg1;
- (void)setSynchronizeWithPrimaryDebounceTimerFactory:(id /* block */)arg1;
- (id)source;
- (id)synchronizeWithPrimaryDebounceTimer;
- (id /* block */)synchronizeWithPrimaryDebounceTimerFactory;
- (void)timerDidFire:(id)arg1;
- (void)updateRegistrationsWithEnabledCharacteristics:(id)arg1 disabledCharacteristics:(id)arg2 conditions:(id)arg3 completion:(id /* block */)arg4;
- (id)workQueue;

@end
