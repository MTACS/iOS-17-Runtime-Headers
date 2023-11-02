
@protocol ContactsUI.CNPosterSetupAvatarPreviewViewDelegate

@required

- (void)avatarPreviewViewDidFinishWithImageData:(NSData *)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)avatarPreviewViewDidSelectChangeScale;
- (void)avatarPreviewViewDidSelectCustomizePhoto;

@end
