
@interface HMDCharacteristicsAvailabilityListener : HMFObject <HMFLogging> {
    HMDHAPAccessory * _accessory;
    NSSet * _availableCharacteristics;
    <HMDCharacteristicsAvailabilityListenerDelegate> * _delegate;
    NSDictionary * _interestedCharacteristicTypesByServiceType;
    NSString * _logIdentifier;
    HMDNotificationRegistration * _notificationRegistration;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDHAPAccessory *accessory;
@property (copy) NSSet *availableCharacteristics;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCharacteristicsAvailabilityListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDictionary *interestedCharacteristicTypesByServiceType;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) HMDNotificationRegistration *notificationRegistration;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_accessoryCharacteristicsToObserve;
- (void)_notifyDelegate;
- (void)_registerForNotifications;
- (id)accessory;
- (id)availableCharacteristics;
- (id)delegate;
- (void)handleCharacteristicsUpdated:(id)arg1;
- (void)handleServicesUpdated:(id)arg1;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 interestedCharacteristicTypesByServiceType:(id)arg3;
- (id)interestedCharacteristicTypesByServiceType;
- (id)logIdentifier;
- (id)notificationRegistration;
- (void)setAvailableCharacteristics:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)workQueue;

@end
