
@interface HFCharacteristicNotificationManager : NSObject <HFHomeManagerObserver, HFHomeObserver> {
    NSDate * _lastNotificationsEnableRequestDate;
    HMHome * _notificationsEnabledHome;
    NSMutableSet * _notificationsEnabledReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastNotificationsEnableRequestDate;
@property (nonatomic, readonly) bool notificationsEnabled;
@property (nonatomic, retain) HMHome *notificationsEnabledHome;
@property (nonatomic, readonly) NSMutableSet *notificationsEnabledReasons;
@property (nonatomic, readonly) bool notificationsReasonsExist;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_updateNotificationsEnabled;
- (void)_updateNotificationsEnabledWithNumberOfAppleMediaAccessories:(unsigned long long)arg1;
- (void)disableNotificationsForSelectedHomeWithReason:(id)arg1;
- (void)enableNotificationsForSelectedHomeWithReason:(id)arg1;
- (void)enableNotificationsForSelectedHomeWithReason:(id)arg1 numberOfAppleMediaAccessories:(unsigned long long)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (id)init;
- (id)lastNotificationsEnableRequestDate;
- (bool)notificationsEnabled;
- (id)notificationsEnabledHome;
- (id)notificationsEnabledReasons;
- (bool)notificationsReasonsExist;
- (void)setLastNotificationsEnableRequestDate:(id)arg1;
- (void)setNotificationsEnabledHome:(id)arg1;

@end
