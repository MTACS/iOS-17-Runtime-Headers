
@protocol EKAuthStatusChecker <NSObject>

@required

- (void)clearCachedAuthStatus;
- (int)eventAccessLevel;
- (bool)hasAccessToReminders;

@end
