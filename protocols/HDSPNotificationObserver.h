
@protocol HDSPNotificationObserver <NSObject>

@required

- (NAFuture *)notificationListener:(HDSPNotificationListener *)arg1 didReceiveNotificationWithName:(NSString *)arg2;

@end
