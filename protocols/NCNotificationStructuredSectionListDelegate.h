
@protocol NCNotificationStructuredSectionListDelegate <NCNotificationListComponentDelegate>

@required

- (bool)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 areNotificationsLoadedForSectionIdentifier:(NSString *)arg2;
- (<NCAuxiliaryOptionsProviding> *)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 isLongLook:(bool)arg3;
- (bool)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 shouldFilterNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 transitionedGroupedStateIsGrouped:(bool)arg2;
- (void)notificationStructuredSectionListDidClearAllNotificationRequests:(NCNotificationStructuredSectionList *)arg1;
- (void)notificationStructuredSectionListRequestsClearingSection:(NCNotificationStructuredSectionList *)arg1;

@end
