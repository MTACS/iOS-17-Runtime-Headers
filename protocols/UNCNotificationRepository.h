
@protocol UNCNotificationRepository <NSObject>

@required

- (void)saveNotificationRequest:(UNNotificationRequest *)arg1 shouldRepost:(bool)arg2 withMessage:(APSIncomingMessage *)arg3 forBundleIdentifier:(NSString *)arg4;

@end
