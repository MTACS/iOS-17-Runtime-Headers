
@protocol NCNotificationGroupListDelegate <NCNotificationListComponentDelegate>

@required

- (NSString *)collapsedSectionSummaryStringForLeadingNotificationRequestForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (bool)isAttachmentImageFeaturedForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (bool)isNotificationGroupListInCollapsedStack:(NCNotificationGroupList *)arg1;
- (bool)isRichNotificationContentViewForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (bool)isViewVisibleForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (<NCAuxiliaryOptionsProviding> *)notificationGroupList:(NCNotificationGroupList *)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 isLongLook:(bool)arg3;
- (bool)notificationGroupListShouldReloadNotificationCells:(NCNotificationGroupList *)arg1;
- (bool)shouldAlignContentToBottomForLeadingNotificationRequestForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (bool)shouldNotificationGroupListPanHorizontally:(NCNotificationGroupList *)arg1;
- (bool)shouldShowSummaryFooterTextForLeadingNotificationRequestForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (bool)shouldShowSummaryTextAsContentForLeadingNotificationRequestForNotificationGroupList:(NCNotificationGroupList *)arg1;

@optional

- (NCNotificationRequestCoalescingContentProvider *)notificationGroupList:(NCNotificationGroupList *)arg1 requestsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2;

@end
