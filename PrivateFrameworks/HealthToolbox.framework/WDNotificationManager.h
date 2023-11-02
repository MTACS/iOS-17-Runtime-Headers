
@interface WDNotificationManager : NSObject <UNUserNotificationCenterDelegate> {
    NSMutableDictionary * _domainsToPolicies;
    HKHealthStore * _healthStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKNotificationStore * _notificationStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (readonly) Class superclass;

+ (void)initialize;
+ (void)setSuppressBadgeNotifications:(bool)arg1;
+ (bool)suppressBadgeNotifications;

- (void).cxx_destruct;
- (id)_lock_policyForNotification:(id)arg1;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (void)resetEmergencySOSBadge;
- (void)resetHealthRecordsDataBadge;
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(id /* block */)arg3;
- (void)setPolicy:(id)arg1 forDomain:(long long)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
