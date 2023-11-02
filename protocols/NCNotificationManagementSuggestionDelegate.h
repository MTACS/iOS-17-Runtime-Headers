
@protocol NCNotificationManagementSuggestionDelegate <NSObject>

@required

- (void)notificationManagementContentProvider:(NCNotificationManagementContentProvider *)arg1 hasUpdatedContentForRequest:(NCNotificationRequest *)arg2;
- (void)notificationManagementContentProvider:(NCNotificationManagementContentProvider *)arg1 keepNotificationsForSectionIdentifierForNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationManagementContentProvider:(NCNotificationManagementContentProvider *)arg1 requestsRemoveSuggestionForRequest:(NCNotificationRequest *)arg2;
- (void)notificationManagementContentProvider:(NCNotificationManagementContentProvider *)arg1 setAllowsDirectMessages:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)notificationManagementContentProvider:(NCNotificationManagementContentProvider *)arg1 setAllowsTimeSensitive:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)notificationManagementContentProvider:(NCNotificationManagementContentProvider *)arg1 setCuratedContactSuggestionConfirmed:(bool)arg2 request:(NCNotificationRequest *)arg3;
- (void)notificationManagementContentProvider:(NCNotificationManagementContentProvider *)arg1 setModeConfiguration:(DNDModeConfiguration *)arg2;
- (void)notificationManagementContentProvider:(NCNotificationManagementContentProvider *)arg1 setMuted:(bool)arg2 untilDate:(NSDate *)arg3 forSectionIdentifier:(NSString *)arg4 threadIdentifier:(NSString *)arg5;
- (void)notificationManagementContentProvider:(NCNotificationManagementContentProvider *)arg1 setScheduledDelivery:(bool)arg2 forSectionIdentifier:(NSString *)arg3;

@end
