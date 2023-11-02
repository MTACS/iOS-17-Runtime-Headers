
@protocol SUUIProfileImagePickerDelegate <NSObject>

@required

- (void)profileImagePicker:(SUUIProfileImagePicker *)arg1 didPickProfileImage:(UIImage *)arg2 withCropRect:(NSValue *)arg3;
- (void)profileImagePickerDidCancel:(SUUIProfileImagePicker *)arg1;

@end
