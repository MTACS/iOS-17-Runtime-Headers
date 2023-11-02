
@protocol NCNotificationSummaryOrderProviderDelegate <NSObject>

@required

- (<NCNotificationListComponentDelegate> *)listComponentDelegateForSummaryPlatterViewForNotificationSummaryOrderProvider:(NCNotificationSummaryOrderProvider *)arg1;
- (NSString *)materialGroupNameBaseForNotificationSummaryOrderProvider:(NCNotificationSummaryOrderProvider *)arg1;
- (unsigned long long)notificationCountForSummaryOrderProvider:(NCNotificationSummaryOrderProvider *)arg1;
- (void)notificationSummaryOrderProvider:(NCNotificationSummaryOrderProvider *)arg1 didUpdateOrderedNotificationGroupLists:(NSArray *)arg2;
- (void)notificationSummaryOrderProvider:(NCNotificationSummaryOrderProvider *)arg1 requestsPerformingDefaultActionForNotificationRequest:(NCNotificationRequest *)arg2 inGroupList:(NCNotificationGroupList *)arg3;
- (void)notificationSummaryOrderProviderDidTapOnLeadingSummaryPlatterView:(NCNotificationSummaryOrderProvider *)arg1;
- (void)notificationSummaryOrderProviderRequestsReloadingLeadingSummaryPlatterView:(NCNotificationSummaryOrderProvider *)arg1;
- (NSArray *)titlesForSectionListsInSummaryForSummaryOrderProvider:(NCNotificationSummaryOrderProvider *)arg1;

@optional

- (UIView *)clearControlViewForLeadingSummaryPlatterViewForSummaryOrderProvider:(NCNotificationSummaryOrderProvider *)arg1;

@end
