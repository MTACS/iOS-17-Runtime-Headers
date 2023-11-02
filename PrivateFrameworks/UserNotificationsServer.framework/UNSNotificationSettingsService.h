
@interface UNSNotificationSettingsService : NSObject <UNSNotificationRepositorySettingsProvider, UNSSettingsGatewayObserver> {
    UNSCriticalAlertAuthorizationAlertController * _criticalAlertAuthorizationAlertController;
    UNSNotificationAuthorizationAlertController * _notificationAuthorizationAlertController;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    UNSSettingsGateway * _settingsGateway;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_addObserver:(id)arg1;
- (void)_queue_removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allNotificationSources;
- (void)authorizationWithOptions:(unsigned long long)arg1 forNotificationSourceIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)initWithSettingsGateway:(id)arg1;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;
- (id)notificationSourceForBundleIdentifier:(id)arg1;
- (id)notificationSourcesForBundleIdentifiers:(id)arg1;
- (id)notificationSystemSettings;
- (void)removeObserver:(id)arg1;
- (void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
- (void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
- (void)resetScheduledDeliverySetting;
- (void)setNotificationSystemSettings:(id)arg1;
- (void)settingsGateway:(id)arg1 didUpdateGlobalSettings:(id)arg2;
- (void)settingsGateway:(id)arg1 didUpdateSectionInfoForSectionIDs:(id)arg2;

@end
