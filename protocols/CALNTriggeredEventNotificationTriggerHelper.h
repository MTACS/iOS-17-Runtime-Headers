
@protocol CALNTriggeredEventNotificationTriggerHelper <NSObject>

@required

- (bool)shouldTriggerForSourceClientIdentifier:(NSString *)arg1 trigger:(unsigned long long)arg2 sourceNotificationInfo:(CALNTriggeredEventNotificationSourceNotificationInfo *)arg3 oldNotificationData:(CALNTriggeredEventNotificationData *)arg4;

@end
