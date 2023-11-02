
@protocol CNPhotoPickerViewControllerDelegate

@required

- (void)photoPicker:(CNPhotoPickerViewController *)arg1 didUpdatePhotoForContact:(CNMutableContact *)arg2 withContactImage:(CNContactImage *)arg3;
- (void)photoPickerDidCancel:(CNPhotoPickerViewController *)arg1;

@end
