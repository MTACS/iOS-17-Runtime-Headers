
@protocol UIImagePickerControllerDelegate <NSObject>

@optional

- (void)imagePickerController:(UIImagePickerController *)arg1 didFinishPickingImage:(UIImage *)arg2 editingInfo:(NSDictionary *)arg3;
- (void)imagePickerController:(UIImagePickerController *)arg1 didFinishPickingMediaWithInfo:(NSDictionary *)arg2;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg1;

@end
