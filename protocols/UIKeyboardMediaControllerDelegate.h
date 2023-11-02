
@protocol UIKeyboardMediaControllerDelegate <NSObject>

@optional

- (void)didDismissCardForKeyboardMediaController:(UIKeyboardMediaController *)arg1;
- (void)didInsertMediaForKeyboardMediaController:(UIKeyboardMediaController *)arg1;
- (void)didPresentCardForKeyboardMediaController:(UIKeyboardMediaController *)arg1;
- (void)didTearDownRecentsViewForKeyboardMediaController:(UIKeyboardMediaController *)arg1;

@end
