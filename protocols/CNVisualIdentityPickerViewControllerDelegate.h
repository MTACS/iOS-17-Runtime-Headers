
@protocol CNVisualIdentityPickerViewControllerDelegate

@required

- (void)visualIdentityPicker:(CNVisualIdentityPickerViewController *)arg1 didUpdatePhotoForVisualIdentity:(CNVisualIdentity *)arg2 withContactImage:(CNContactImage *)arg3;
- (void)visualIdentityPickerDidCancel:(CNVisualIdentityPickerViewController *)arg1;

@end
