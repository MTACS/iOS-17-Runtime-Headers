
@protocol CALNTriggeredEventNotificationDataStorage <NSObject>

@required

- (void)addNotificationData:(CALNTriggeredEventNotificationData *)arg1 withIdentifier:(NSString *)arg2;
- (NSDictionary *)notificationData;
- (CALNTriggeredEventNotificationData *)notificationDataWithIdentifier:(NSString *)arg1;
- (void)removeNotificationData;
- (void)removeNotificationDataWithIdentifier:(NSString *)arg1;

@end
