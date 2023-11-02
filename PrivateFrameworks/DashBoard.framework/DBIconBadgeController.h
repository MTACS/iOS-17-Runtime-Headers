
@interface DBIconBadgeController : NSObject <UNNotificationSettingsCenterDelegate> {
    NSObject<OS_dispatch_queue> * _badgeSettingsUpdateQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _lock_badgesAllowedByIdentifier;
    UNNotificationSettingsCenter * _notificationsSettingsCenter;
    CARObserverHashTable * _observers;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *badgeSettingsUpdateQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *lock_badgesAllowedByIdentifier;
@property (nonatomic, retain) UNNotificationSettingsCenter *notificationsSettingsCenter;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_badge_queue_updateNotificationSources;
- (void)addObserver:(id)arg1;
- (id)badgeSettingsUpdateQueue;
- (id)init;
- (id)lock_badgesAllowedByIdentifier;
- (bool)notificationsEnabledForIdentifier:(id)arg1;
- (id)notificationsSettingsCenter;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setBadgeSettingsUpdateQueue:(id)arg1;
- (void)setLock_badgesAllowedByIdentifier:(id)arg1;
- (void)setNotificationsSettingsCenter:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)userNotificationSettingsCenter:(id)arg1 didUpdateNotificationSourceIdentifiers:(id)arg2;

@end
