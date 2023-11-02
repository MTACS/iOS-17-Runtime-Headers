
@protocol HDSPSleepNotificationPublisher <NSObject>

@required

- (void)publishNotificationForEvent:(HKSPSleepEvent *)arg1 userInfo:(NSDictionary *)arg2;
- (void)tearDownNotificationForEventIdentifier:(NSString *)arg1;
- (void)tearDownNotifications;

@end
