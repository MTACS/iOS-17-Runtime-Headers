
@protocol CNVisualIdentityImagePickerControllerDelegate <NSObject>

@required

- (void)imagePickerController:(UIViewController *)arg1 didFinishWithProviderItem:(CNPhotoPickerProviderItem *)arg2;
- (void)imagePickerControllerDidCancel:(UIViewController *)arg1;

@end
