
@protocol NCNotificationManagementViewPresenterDelegate <NSObject>

@required

- (NCNotificationSectionSettings *)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 sectionSettingsForSectionIdentifier:(NSString *)arg2;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setAllowsCriticalAlerts:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setAllowsTimeSensitive:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setDeliverQuietly:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;

@optional

- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setMuted:(bool)arg2 untilDate:(NSDate *)arg3 forNotificationRequest:(NCNotificationRequest *)arg4 withSectionIdentifier:(NSString *)arg5 threadIdentifier:(NSString *)arg6;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setScheduledDelivery:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenterDidDismissManagementView:(NCNotificationManagementViewPresenter *)arg1;
- (NCNotificationSystemSettings *)notificationManagementViewPresenterRequestsSystemSettings:(NCNotificationManagementViewPresenter *)arg1;
- (void)notificationManagementViewPresenterWillPresentManagementView:(NCNotificationManagementViewPresenter *)arg1;

@end
