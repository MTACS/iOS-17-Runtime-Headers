
@interface UNSDefaultDataProviderFactory : NSObject <BBObserverDelegate> {
    UNSApplicationLauncher * _appLauncher;
    UNSAttachmentsService * _attachmentsService;
    NSMutableSet * _authorizedBundleIdentifiers;
    NSMutableDictionary * _bundleIdentifierToDataProvider;
    UNSNotificationCategoryRepository * _categoryRepository;
    UNSDaemonLauncher * _daemonLauncher;
    BBDataProviderConnection * _dataProviderConnection;
    UNSLocalizationService * _localizationService;
    UNSNotificationRepository * _notificationRepository;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    UNSSettingsGateway * _settingsGateway;
    BBObserver * _settingsObserver;
    NSMutableSet * _supportedBundleIdentifiers;
    UNSNotificationTopicRepository * _topicRepository;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_addObserver:(id)arg1;
- (void)_queue_createDataProviderWithNotificationSourceDescription:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_queue_createNewDefaultDataProviders:(id)arg1;
- (id)_queue_effectiveSectionInfoForBundleIdentifier:(id)arg1;
- (id)_queue_notificationSettingsForBundleIdentifier:(id)arg1;
- (id)_queue_notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;
- (void)_queue_notificationSourceDidInstall:(id)arg1;
- (void)_queue_notificationSourceDidUninstall:(id)arg1;
- (void)_queue_notificationSourcesDidInstall:(id)arg1;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_removeDataProviderWithBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queue_removeObserver:(id)arg1;
- (void)_queue_sectionInfoDidChange:(id)arg1;
- (id)_queue_sectionInfoForBundleIdentifier:(id)arg1;
- (void)_queue_setCriticalAlertAuthorization:(bool)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_queue_setSectionInfo:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)arg1 options:(unsigned long long)arg2 scheduledDeliveryEnabled:(bool)arg3 expirationDate:(id)arg4 lastUserGrantDate:(id)arg5 forNotificationSourceDescription:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)arg1 options:(unsigned long long)arg2 scheduledDeliveryEnabled:(bool)arg3 forNotificationSourceDescription:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationLauncher:(id)arg1 daemonLauncher:(id)arg2 categoryRepository:(id)arg3 notificationRepository:(id)arg4 attachmentsService:(id)arg5 topicRepository:(id)arg6 localizationService:(id)arg7 settingsGateway:(id)arg8;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;
- (void)notificationSourcesDidInstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)observer:(id)arg1 removeSection:(id)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)requestAuthorizationStatus:(long long)arg1 withOptions:(unsigned long long)arg2 scheduledDeliveryEnabled:(bool)arg3 expirationDate:(id)arg4 lastUserGrantDate:(id)arg5 forNotificationSourceDescription:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)requestAuthorizationStatus:(long long)arg1 withOptions:(unsigned long long)arg2 scheduledDeliveryEnabled:(bool)arg3 forNotificationSourceDescription:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)requestRemoveAuthorizationforNotificationSourceDescription:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCriticalAlertAuthorization:(bool)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateAuthorizationWithOptions:(unsigned long long)arg1 scheduledDeliveryEnabled:(bool)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(id /* block */)arg4;

@end
