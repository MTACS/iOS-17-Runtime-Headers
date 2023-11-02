
@protocol NCNotificationListCellActionProviding <NSObject>

@required

- (UIAction *)defaultActionForNotificationListCell:(NCNotificationListCell *)arg1;
- (bool)shouldContinuePresentingActionButtonsForNotificationListCell:(NCNotificationListCell *)arg1;
- (bool)shouldShowDefaultActionForNotificationListCell:(NCNotificationListCell *)arg1;
- (bool)shouldShowSupplementaryActionsForNotificationListCell:(NCNotificationListCell *)arg1;
- (bool)shouldVerticallyStackActionButtonsForNotificationListCell:(NCNotificationListCell *)arg1;
- (NSArray *)supplementaryActionsForNotificationListCell:(NCNotificationListCell *)arg1;

@end
