
@protocol PDScheduledActivityClient <NSObject>

@required

- (void)performScheduledActivityWithIdentifier:(NSString *)arg1 activityCriteria:(PDScheduledActivityCriteria *)arg2;

@optional

- (void)performScheduledActivityWithIdentifier:(NSString *)arg1 activityCriteria:(PDScheduledActivityCriteria *)arg2 activityContext:(id <NSObject><NSSecureCoding>)arg3;

@end
