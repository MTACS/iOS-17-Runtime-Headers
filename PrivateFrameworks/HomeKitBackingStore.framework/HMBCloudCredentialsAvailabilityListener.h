
@interface HMBCloudCredentialsAvailabilityListener : HMFObject <HMFLogging, HMFTimerDelegate> {
    CKContainer * _container;
    NAFuture * _keychainAvailabilityFuture;
    HMFTimer * _keychainAvailabilityTimer;
    id /* block */  _keychainAvailabilityTimerFactory;
    struct hmf_unfair_data_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _lock;
    NAFuture * _manateeAvailabilityFuture;
    NSNotificationCenter * _notificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ keychainAvailabilityTimerFactory;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)handleAccountChangedNotification:(id)arg1;
- (void)handleIdentityUpdateNotification:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (id)initWithContainer:(id)arg1 notificationCenter:(id)arg2;
- (id /* block */)keychainAvailabilityTimerFactory;
- (id)logIdentifier;
- (void)setKeychainAvailabilityTimerFactory:(id /* block */)arg1;
- (void)timerDidFire:(id)arg1;
- (id)waitForKeychainAvailability;
- (id)waitForManateeAvailability;
- (id)waitForManateeAvailabilityAndRecheckIfAlreadyAvailable;

@end
