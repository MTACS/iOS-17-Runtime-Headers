
@protocol UMCriticalUserSwitchStakeholder <NSObject>

@required

- (void)readyToSwitchToUser:(UMUser *)arg1;
- (void)willSwitchToUser:(UMUser *)arg1;

@optional

- (void)readyToSwitchToLoginSession:(UMUser *)arg1;
- (void)userSwitchBlockingTasksDidUpdate:(NSDictionary *)arg1;

@end
