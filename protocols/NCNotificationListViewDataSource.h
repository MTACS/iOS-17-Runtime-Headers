
@protocol NCNotificationListViewDataSource <NSObject>

@required

- (double)notificationListView:(NCNotificationListView *)arg1 heightForItemAtIndex:(unsigned long long)arg2 withWidth:(double)arg3;
- (UIView *)notificationListView:(NCNotificationListView *)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)notificationListViewNumberOfItems:(NCNotificationListView *)arg1;

@optional

- (UIView *)backgroundViewForNotificationList:(NCNotificationListView *)arg1;
- (UIView *)footerViewForNotificationList:(NCNotificationListView *)arg1;
- (double)footerViewHeightForNotificationList:(NCNotificationListView *)arg1 withWidth:(double)arg2;
- (UIView *)headerViewForNotificationList:(NCNotificationListView *)arg1;
- (double)headerViewHeightForNotificationList:(NCNotificationListView *)arg1 withWidth:(double)arg2;
- (UIView *)hoverViewForNotificationList:(NCNotificationListView *)arg1;
- (bool)isShowingFeaturedLeadingViewsForNotificationListView:(NCNotificationListView *)arg1;
- (UIView *)overlayFooterViewForNotificationList:(NCNotificationListView *)arg1;
- (void)recycleView:(UIView *)arg1;

@end
