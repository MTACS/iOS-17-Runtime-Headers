
@protocol HMDNotificationConditionHandler

@required

- (bool)canHandleCondition:(HMDNotificationCondition *)arg1;
- (bool)conditionPasses:(HMDNotificationCondition *)arg1 registrationUser:(HMDUser *)arg2;

@end
