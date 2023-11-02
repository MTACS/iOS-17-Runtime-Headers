
@protocol CALNAnalyticsHandler <NSObject>

@required

- (void)recordNotificationResponse:(CALNNotificationRecordResponse *)arg1;
- (void)recordPostedNotification:(CALNNotificationRecord *)arg1;

@end
