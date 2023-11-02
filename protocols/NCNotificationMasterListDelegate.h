
@protocol NCNotificationMasterListDelegate <NCNotificationListComponentDelegate>

@required

- (void)notificationMasterList:(NCNotificationMasterList *)arg1 didUpdateOverlayFooterContentVisibility:(bool)arg2;
- (void)notificationMasterList:(NCNotificationMasterList *)arg1 requestsClearingFromIncomingSectionNotificationRequests:(NSArray *)arg2;
- (void)notificationMasterList:(NCNotificationMasterList *)arg1 requestsPresentingFocusActivityPickerFromView:(UIView *)arg2;
- (void)notificationMasterList:(NCNotificationMasterList *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)notificationMasterList:(NCNotificationMasterList *)arg1 scrollViewWillBeginDragging:(UIScrollView *)arg2;
- (void)notificationMasterList:(NCNotificationMasterList *)arg1 scrollViewWillEndDragging:(UIScrollView *)arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg4;
- (bool)notificationMasterList:(NCNotificationMasterList *)arg1 shouldFilterNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationMasterListDidScrollToRevealNotificationHistory:(NCNotificationMasterList *)arg1;
- (Class)notificationMasterListNotificationViewControllerClass:(NCNotificationMasterList *)arg1;
- (bool)notificationMasterListShouldAllowNotificationHistoryReveal:(NCNotificationMasterList *)arg1;
- (void)notificationMasterListWillExpandNotificationListCount:(NCNotificationMasterList *)arg1;

@end
