
@interface SiriUICachedUserNotificationsSettings : NSObject <UNNotificationSettingsCenterDelegate> {
    NSMutableDictionary * _appNotificationSettings;
    NSMapTable * _appObservers;
    long long  _cachedAnnounceCarPlaySetting;
    UNNotificationSettingsCenter * _notificationsSettingsCenter;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) long long announceCarPlaySetting;
@property (retain) NSMutableDictionary *appNotificationSettings;
@property long long cachedAnnounceCarPlaySetting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1 forAppBundleId:(id)arg2;
- (bool)_announceNotificationsEnabledForAppBundleId:(id)arg1;
- (bool)_announceNotificationsEnabledForAppBundleId:(id)arg1 fromSettingsCenter:(id)arg2;
- (id)_appNotificationSettingsForAppBundleId:(id)arg1;
- (id)_appNotificationSettingsForAppBundleId:(id)arg1 fromSettingsCenter:(id)arg2;
- (bool)_currentlyObservingForAppBundleId:(id)arg1;
- (bool)_notificationBannersVisibleInCarPlayForAppBundleId:(id)arg1;
- (bool)_notificationBannersVisibleInCarPlayForAppBundleId:(id)arg1 fromSettingsCenter:(id)arg2;
- (void)_notifyAllObserversThatPreferencesDidChange;
- (void)_notifyAllObserversWithAppBundleIdThatPreferencesDidChange:(id)arg1;
- (void)_removeObserver:(id)arg1 forAppBundleId:(id)arg2;
- (void)_updateNotificationSettingsChangeAndNotifyObserversForAppBundleId:(id)arg1 ifDifferentFromSettings:(id)arg2;
- (void)_updateNotificationSettingsChangeForAppBundleId:(id)arg1 fromSettingsCenter:(id)arg2 notifyObservers:(bool)arg3;
- (void)_updateNotificationSystemSettingsChangeFromSettingsCenter:(id)arg1 notifyObservers:(bool)arg2;
- (void)addObserver:(id)arg1 forAppBundleId:(id)arg2;
- (long long)announceCarPlaySetting;
- (id)appNotificationSettings;
- (long long)cachedAnnounceCarPlaySetting;
- (id)cachedNotificationSettingsForAppBundleId:(id)arg1 asyncFetchNewValuesAndUpdateObservers:(bool)arg2;
- (id)init;
- (void)removeObserver:(id)arg1 forAppBundleId:(id)arg2;
- (void)setAppNotificationSettings:(id)arg1;
- (void)setCachedAnnounceCarPlaySetting:(long long)arg1;
- (bool)syncAnnounceNotificationsEnabledForAppBundleId:(id)arg1;
- (bool)syncNotificationBannersVisibleInCarPlayForAppBundleId:(id)arg1;
- (void)userNotificationSettingsCenter:(id)arg1 didUpdateNotificationSourceIdentifiers:(id)arg2;
- (void)userNotificationSettingsCenter:(id)arg1 didUpdateNotificationSystemSettings:(id)arg2;

@end
