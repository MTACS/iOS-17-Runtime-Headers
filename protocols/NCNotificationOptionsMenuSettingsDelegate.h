
@protocol NCNotificationOptionsMenuSettingsDelegate <NSObject>

@required

- (void)notificationOptionsMenu:(NCNotificationOptionsMenu *)arg1 addSenderToContactsForNotificationRequest:(NCNotificationRequest *)arg2 withSectionIdentifier:(NSString *)arg3;
- (void)notificationOptionsMenu:(NCNotificationOptionsMenu *)arg1 requestsClearingSectionWithIdentifier:(NSString *)arg2;
- (NCNotificationSectionSettings *)notificationOptionsMenu:(NCNotificationOptionsMenu *)arg1 sectionSettingsForSectionIdentifier:(NSString *)arg2;
- (void)notificationOptionsMenu:(NCNotificationOptionsMenu *)arg1 setAllowsCriticalAlerts:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationOptionsMenu:(NCNotificationOptionsMenu *)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationOptionsMenu:(NCNotificationOptionsMenu *)arg1 setAllowsTimeSensitive:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationOptionsMenu:(NCNotificationOptionsMenu *)arg1 setModeConfiguration:(DNDModeConfiguration *)arg2;
- (void)notificationOptionsMenu:(NCNotificationOptionsMenu *)arg1 setMuted:(bool)arg2 untilDate:(NSDate *)arg3 forNotificationRequest:(NCNotificationRequest *)arg4 withSectionIdentifier:(NSString *)arg5 threadIdentifier:(NSString *)arg6;
- (void)notificationOptionsMenu:(NCNotificationOptionsMenu *)arg1 setScheduledDelivery:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (DNDModeConfiguration *)notificationOptionsMenuRequestsCurrentModeConfiguration:(NCNotificationOptionsMenu *)arg1;
- (NCNotificationSystemSettings *)notificationOptionsMenuRequestsSystemSettings:(NCNotificationOptionsMenu *)arg1;
- (void)notificationOptionsMenuWillDismiss:(NCNotificationOptionsMenu *)arg1;

@end
