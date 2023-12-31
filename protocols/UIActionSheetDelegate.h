
@protocol UIActionSheetDelegate <NSObject>

@optional

- (void)actionSheet:(UIActionSheet *)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(UIActionSheet *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(UIActionSheet *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)actionSheetCancel:(UIActionSheet *)arg1;
- (void)didPresentActionSheet:(UIActionSheet *)arg1;
- (void)willPresentActionSheet:(UIActionSheet *)arg1;

@end
