
@protocol DBNotificationViewControllerDelegate <NSObject>

@required

- (void)didDismissNotificationForNotificationViewController:(DBNotificationViewController *)arg1;
- (void)willDisplayNotificationForNotificationViewController:(DBNotificationViewController *)arg1;

@end
