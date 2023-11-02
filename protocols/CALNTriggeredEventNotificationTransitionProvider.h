
@protocol CALNTriggeredEventNotificationTransitionProvider <NSObject>

@required

- (unsigned long long)transitionForSourceClientIdentifier:(NSString *)arg1 sourceNotificationInfo:(CALNTriggeredEventNotificationSourceNotificationInfo *)arg2 oldNotificationData:(CALNTriggeredEventNotificationData *)arg3 trigger:(unsigned long long)arg4;

@end
