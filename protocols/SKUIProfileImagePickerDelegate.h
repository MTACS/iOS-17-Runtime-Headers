
@protocol SKUIProfileImagePickerDelegate <NSObject>

@required

- (void)profileImagePicker:(SKUIProfileImagePicker *)arg1 didPickProfileImage:(UIImage *)arg2 withCropRect:(NSValue *)arg3;
- (void)profileImagePickerDidCancel:(SKUIProfileImagePicker *)arg1;

@end
