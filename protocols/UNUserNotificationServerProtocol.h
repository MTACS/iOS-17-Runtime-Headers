
@protocol UNUserNotificationServerProtocol <NSObject>

@required

- (void)addNotificationRequest:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: UNNotificationRequest *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getBadgeNumberForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*
- (void)getDeliveredNotificationsForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getNotificationCategoriesForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)getNotificationSettingsForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UNNotificationSettings *, void*
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getNotificationTopicsForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)getPendingNotificationRequestsForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeDeliveredNotificationsWithIdentifiers:(void *)arg1 forBundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removePendingNotificationRequestsWithIdentifiers:(void *)arg1 forBundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeSimilarNotificationRequests:(void *)arg1 forBundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)replaceContentForRequestWithIdentifier:(void *)arg1 bundleIdentifier:(void *)arg2 replacementContent:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, UNNotificationContent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestAuthorizationWithOptions:(void *)arg1 forBundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setBadgeCount:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setBadgeNumber:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setBadgeString:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setNotificationCategories:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)setNotificationRequests:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)setNotificationTopics:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setObservingUserNotifications:(bool)arg1 forBundleIdentifier:(NSString *)arg2;

@optional

- (void)getClearedInfoForDataProviderMigrationWithBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (void)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestRemoveAuthorizationForBundleIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setConnectionDetails:(UNNotificationConnectionDetails *)arg1;
- (void)setNotificationRequests:(void *)arg1 forBundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
