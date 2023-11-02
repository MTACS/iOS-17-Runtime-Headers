
@protocol MFPhotoPickerControllerDelegate <NSObject>

@required

- (void)photoPicker:(MFPhotoPickerController *)arg1 didSelectAssetWithIdentifier:(NSString *)arg2 mediaInfo:(NSDictionary *)arg3;

@optional

- (void)photoPicker:(MFPhotoPickerController *)arg1 didDeselectAssetWithIdentifier:(NSString *)arg2;
- (void)photoPickerDidCancel:(MFPhotoPickerController *)arg1;
- (void)photoPickerDidCancelSystemImagePicker:(MFPhotoPickerController *)arg1;
- (UIViewController *)presentingViewControllerForPhotoPicker:(MFPhotoPickerController *)arg1;

@end
