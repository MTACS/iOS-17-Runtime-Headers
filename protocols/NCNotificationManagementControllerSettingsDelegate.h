
@protocol NCNotificationManagementControllerSettingsDelegate <NSObject>

@required

- (NCNotificationSectionSettings *)notificationManagementController:(id <NCNotificationManagementController>)arg1 sectionSettingsForSectionIdentifier:(NSString *)arg2;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setAllowsCriticalAlerts:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setAllowsTimeSensitive:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setDeliverQuietly:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setMuted:(bool)arg2 untilDate:(NSDate *)arg3 forNotificationRequest:(NCNotificationRequest *)arg4 withSectionIdentifier:(NSString *)arg5 threadIdentifier:(NSString *)arg6;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setScheduledDelivery:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;

@optional

- (void)notificationManagementControllerDidDismissManagementView:(id <NCNotificationManagementController>)arg1;
- (NCNotificationSystemSettings *)notificationManagementControllerRequestsSystemSettings:(id <NCNotificationManagementController>)arg1;

@end
