
@protocol UNSNotificationRepositoryObserver <NSObject>

@required

- (void)notificationRepository:(UNSNotificationRepository *)arg1 didPerformUpdates:(NSArray *)arg2 forBundleIdentifier:(NSString *)arg3;

@optional

- (void)notificationRepository:(UNSNotificationRepository *)arg1 didDiscoverContentOnFirstUnlockForBundleIdentifier:(NSString *)arg2;

@end
