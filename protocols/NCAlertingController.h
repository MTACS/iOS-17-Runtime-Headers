
@protocol NCAlertingController <NSObject>

@required

- (void)alertOnPostForNotificationRequest:(NCNotificationRequest *)arg1 forRequestDestinations:(NSSet *)arg2;
- (void)alertOnPresentationForNotificationRequest:(NCNotificationRequest *)arg1 presentingDestination:(NSString *)arg2;
- (void)killAlertsForNotificationRequest:(NCNotificationRequest *)arg1;
- (void)resetAutomaticLockStateForNotificationRequest:(NCNotificationRequest *)arg1;

@end
