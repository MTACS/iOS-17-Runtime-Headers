
@protocol CALNInboxNotificationProvider <NSObject>

@required

- (unsigned long long)eventNotificationCount;
- (NSArray *)eventNotificationReferences;

@end
