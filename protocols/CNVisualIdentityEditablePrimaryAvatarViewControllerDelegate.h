
@protocol CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate <NSObject>

@required

- (void)editableAvatarViewController:(CNVisualIdentityEditablePrimaryAvatarViewController *)arg1 didUpdateWithProviderItem:(CNPhotoPickerProviderItem *)arg2;

@optional

- (void)editableAvatarViewControllerDidEndEditing:(CNVisualIdentityEditablePrimaryAvatarViewController *)arg1;
- (bool)editableAvatarViewControllerShouldBecomeFirstResponder:(CNVisualIdentityEditablePrimaryAvatarViewController *)arg1;

@end
