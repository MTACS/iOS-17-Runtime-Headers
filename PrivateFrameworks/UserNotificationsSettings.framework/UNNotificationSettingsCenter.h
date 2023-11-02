
@interface UNNotificationSettingsCenter : NSObject <UNUserNotificationSettingsServiceConnectionObserver> {
    <UNNotificationSettingsCenterDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UNNotificationSettingsCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)currentNotificationSettingsCenter;

- (void).cxx_destruct;
- (id)_init;
- (id)allNotificationSources;
- (void)authorizationWithOptions:(unsigned long long)arg1 forNotificationSourceIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)notificationSourceWithIdentifier:(id)arg1;
- (id)notificationSourcesWithIdentifiers:(id)arg1;
- (id)notificationSystemSettings;
- (void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
- (void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
- (void)resetScheduledDeliverySetting;
- (void)setDelegate:(id)arg1;
- (void)setNotificationSystemSettings:(id)arg1;
- (void)settingsServiceConnection:(id)arg1 didUpdateNotificationSourcesWithIdentifiers:(id)arg2;
- (void)settingsServiceConnection:(id)arg1 didUpdateNotificationSystemSettings:(id)arg2;

@end
