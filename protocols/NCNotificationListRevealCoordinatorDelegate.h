
@protocol NCNotificationListRevealCoordinatorDelegate <NSObject>

@required

- (void)notificationListRevealCoordinator:(NCNotificationListRevealCoordinator *)arg1 updatedRevealState:(bool)arg2;
- (bool)notificationListRevealCoordinatorShouldAllowReveal:(NCNotificationListRevealCoordinator *)arg1;
- (bool)notificationListRevealCoordinatorShouldAllowRevealTransition:(NCNotificationListRevealCoordinator *)arg1;
- (void)revealCoordinatorDidScrollToReveal:(NCNotificationListRevealCoordinator *)arg1;
- (NSArray *)subListsForNotificationListRevealCoordinator:(NCNotificationListRevealCoordinator *)arg1;

@end
