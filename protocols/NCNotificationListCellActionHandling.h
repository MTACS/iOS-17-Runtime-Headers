
@protocol NCNotificationListCellActionHandling <NSObject>

@required

- (void)notificationListCell:(NCNotificationListCell *)arg1 didBeginHidingActionsForSwipeInteraction:(PLSwipeInteraction *)arg2;
- (void)notificationListCell:(NCNotificationListCell *)arg1 didBeginRevealingActionsForSwipeInteraction:(PLSwipeInteraction *)arg2;
- (void)notificationListCell:(NCNotificationListCell *)arg1 didMoveToNewXPosition:(double)arg2;
- (void)notificationListCellDidSignificantUserInteraction:(NCNotificationListCell *)arg1;
- (bool)shouldPerformClippingForNotificationListCell:(NCNotificationListCell *)arg1;

@end
