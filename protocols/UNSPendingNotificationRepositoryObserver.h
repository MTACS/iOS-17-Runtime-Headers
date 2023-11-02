
@protocol UNSPendingNotificationRepositoryObserver <NSObject>

@required

- (void)pendingNotificationRepository:(UNSPendingNotificationRepository *)arg1 didPerformUpdates:(NSArray *)arg2 forBundleIdentifier:(NSString *)arg3;

@end
