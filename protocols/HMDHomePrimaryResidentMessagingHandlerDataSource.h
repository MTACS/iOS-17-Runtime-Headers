
@protocol HMDHomePrimaryResidentMessagingHandlerDataSource <NSObject>

@required

- (NSNotificationCenter *)notificationCenter;
- (<HMFTimerManager> *)timerManager;

@end
