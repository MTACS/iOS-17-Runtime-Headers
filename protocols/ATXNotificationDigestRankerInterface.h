
@protocol ATXNotificationDigestRankerInterface <NSObject>

@required

- (void)appsSortedByNotificationsReceivedInPreviousNumDays:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 10: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, bool, unsigned long long, NSError *, void*
- (void)generateDigestForAppGroupedNotificationStacks:(void *)arg1 maxGlobalMarqueeGroups:(void *)arg2 maxAppMarqueeGroups:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSArray *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXUserNotificationDigest *, NSError *, void*
- (void)generateDigestForNotificationStacks:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXUserNotificationDigest *, NSError *, void*
- (void)numberOfActiveNotificationsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, NSError *, void*

@end
