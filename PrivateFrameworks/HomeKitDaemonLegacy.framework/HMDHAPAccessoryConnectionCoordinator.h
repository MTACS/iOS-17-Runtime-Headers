
@interface HMDHAPAccessoryConnectionCoordinator : NSObject <HMFLogging> {
    HMDHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNotificationCenter * _notificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_disableDisconnectOnIdleWithAccessoriesAndConnect:(bool)arg1;
- (void)_enableDisconnectOnIdleWithAccessories;
- (void)configureWithIsResidentCapable:(bool)arg1;
- (void)evaluateAccessoryConnectionStatus;
- (void)handleCurrentResidentChanged:(id)arg1;
- (void)handleIsResidentFirstAccessoryCommunicationEnabledDidChangeNotification:(id)arg1;
- (void)handlePrimaryResidentChanged:(id)arg1;
- (void)handleResidentAddRemove:(id)arg1;
- (void)handleResidentChangedOnNonResident;
- (void)handleResidentStatusChanged:(id)arg1;
- (void)handleResidentUpdated:(id)arg1;
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2;
- (id)logIdentifier;

@end
