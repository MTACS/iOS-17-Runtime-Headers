
@protocol DBNotificationSuspending <NSObject>

@required

- (void)setSuspended:(bool)arg1 cancellingCurrent:(bool)arg2 forReason:(NSString *)arg3;
- (void)setSuspended:(bool)arg1 forReason:(NSString *)arg2;

@end
