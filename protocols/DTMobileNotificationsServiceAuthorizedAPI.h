
@protocol DTMobileNotificationsServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (void)postDarwinNotification:(NSString *)arg1;
- (void)setApplicationStateNotificationsEnabled:(NSNumber *)arg1;
- (void)setMemoryNotificationsEnabled:(NSNumber *)arg1;

@end
