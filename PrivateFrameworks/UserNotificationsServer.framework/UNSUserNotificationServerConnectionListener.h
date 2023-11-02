
@interface UNSUserNotificationServerConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationServerProtocol> {
    UNSApplicationLauncher * _applicationLauncher;
    UNSAttachmentsService * _attachmentsService;
    NSMapTable * _bundleIdentifiersByConnection;
    UNSNotificationCategoryRepository * _categoryRepository;
    _UNNotificationCommunicationContextService * _communicationContextService;
    NSMutableDictionary * _connectionsByBundleIdentifier;
    NSXPCListener * _listener;
    UNSLocalizationService * _localizationService;
    UNSLocationMonitor * _locationMonitor;
    UNSNotificationRepository * _notificationRepository;
    UNSNotificationSchedulingService * _notificationSchedulingService;
    UNSNotificationSettingsService * _notificationSettingsService;
    UNSNotificationAuthorizationService * _notificationsAuthorizationService;
    NSObject<OS_dispatch_queue> * _queue;
    UNSUserNotificationServerRemoteNotificationConnectionListener * _remoteNotificationConnectionListener;
    UNCRemoteNotificationServer * _remoteNotificationService;
    UNSNotificationTopicRepository * _topicRepository;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentConnection;
- (void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_delegateConnectionForBundleIdentifier:(id)arg1;
- (void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_notificationRequestsForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_queue_notificationsForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_queue_observerConnectionsForBundleIdentifier:(id)arg1;
- (void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)_saveNotificationRecord:(id)arg1 shouldRepost:(bool)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_saveNotificationRequest:(id)arg1 shouldRepost:(bool)arg2 deliveredDate:(id)arg3 forBundleIdentifier:(id)arg4 withCompletionHandler:(id /* block */)arg5;
- (id)_serviceResolvedNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 error:(out id*)arg3;
- (void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getClearedInfoForDataProviderMigrationWithBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationTopicsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithCategoryRepository:(id)arg1 notificationSchedulingService:(id)arg2 notificationAuthorizationService:(id)arg3 notificationSettingsService:(id)arg4 notificationRepository:(id)arg5 remoteNotificationConnectionListener:(id)arg6 remoteNotificationService:(id)arg7 applicationLauncher:(id)arg8 attachmentsService:(id)arg9 locationMonitor:(id)arg10 topicRepository:(id)arg11 localizationService:(id)arg12 communicationContextService:(id)arg13;
- (void)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)replaceContentForRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 replacementContent:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestRemoveAuthorizationForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resume;
- (void)setBadgeCount:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setConnectionDetails:(id)arg1;
- (void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setObservingUserNotifications:(bool)arg1 forBundleIdentifier:(id)arg2;

@end
