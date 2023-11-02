
@protocol NCNotificationListViewScrollDelegate <NSObject>

@required

- (void)notificationListDidScroll:(NCNotificationListView *)arg1;
- (void)notificationListViewDidEndDecelerating:(NCNotificationListView *)arg1;
- (void)notificationListViewDidEndDragging:(NCNotificationListView *)arg1 willDecelerate:(bool)arg2;
- (void)notificationListViewWillEndDragging:(NCNotificationListView *)arg1 withTargetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg2;
- (void)notificationListWillBeginDragging:(NCNotificationListView *)arg1;

@end
