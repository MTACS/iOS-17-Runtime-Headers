
@protocol CNPhotoPickerHeaderViewDelegate <CNPresenterDelegate, NSObject>

@required

- (void)photoPickerHeaderView:(CNPhotoPickerHeaderView *)arg1 didUpdateIdentityNameTextField:(UITextField *)arg2 withText:(NSString *)arg3;
- (void)photoPickerHeaderViewDidReceiveDroppedImageData:(NSData *)arg1;
- (void)photoPickerHeaderViewDidTapClearAvatarImageButton:(CNPhotoPickerHeaderView *)arg1;

@end
