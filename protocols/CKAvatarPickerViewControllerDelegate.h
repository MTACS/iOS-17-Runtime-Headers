
@protocol CKAvatarPickerViewControllerDelegate <NSObject>

@required

- (bool)hideChevron;
- (long long)navBarContext;
- (void)tappedAvatarPickerViewController;

@end
