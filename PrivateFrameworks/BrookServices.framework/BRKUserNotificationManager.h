
@interface BRKUserNotificationManager : NSObject {
    NSXPCConnection * _applicationConnection;
    <BRKApplicationInterface> * _applicationObject;
    NSMutableDictionary * _categories;
    NSXPCListenerEndpoint * _endpoint;
    NSXPCListener * _listener;
    UNUserNotificationCenter * _notificationCenter;
    NSMutableDictionary * _responseHandlers;
}

@property (nonatomic) NSXPCConnection *applicationConnection;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_deliveredNotificationIdentifiersWithCategoryIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_pendingNotificationIdentifiersWithCategoryIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addCategories:(id)arg1;
- (id)applicationConnection;
- (id)categoryForIdentifier:(id)arg1;
- (void)debugPendingNotificationRequests;
- (id)endpoint;
- (id)getListenerEndpoint;
- (void)handleNotificationResponse:(id)arg1;
- (void)hasPendingLocationNotification:(id /* block */)arg1;
- (id)init;
- (void)isNotificationPendingOrDeliveredWithCategoryIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)postNotification:(id)arg1 destinations:(unsigned long long)arg2;
- (id)postNotification:(id)arg1 trigger:(id)arg2 responseHandler:(id /* block */)arg3 destinations:(unsigned long long)arg4;
- (void)promptNotificationAuthorizationRequest:(id)arg1;
- (void)removeAllDeliveredNotifications;
- (void)removeAllPendingNotifications;
- (void)removeNotification:(id)arg1;
- (void)removeNotificationsWithCategoryIdentifier:(id)arg1;
- (void)setApplicationConnection:(id)arg1;
- (void)setEndpoint:(id)arg1;

@end
