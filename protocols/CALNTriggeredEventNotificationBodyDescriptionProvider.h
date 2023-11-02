
@protocol CALNTriggeredEventNotificationBodyDescriptionProvider <NSObject>

@required

- (NSString *)bodyForSourceClientIdentifier:(NSString *)arg1 sourceNotificationInfo:(CALNTriggeredEventNotificationSourceNotificationInfo *)arg2 bodyContainsTravelAdvice:(bool*)arg3;

@end
