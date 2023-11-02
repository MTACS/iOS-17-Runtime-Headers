
@protocol CNPosterSetupAvatarPreviewViewControllerDelegate

@required

- (void)avatarPreviewViewController:(CNPosterSetupAvatarPreviewViewController *)arg1 didFinishWithContactImage:(CNContactImage *)arg2;
- (void)avatarPreviewViewControllerDidCancel:(CNPosterSetupAvatarPreviewViewController *)arg1;
- (void)avatarPreviewViewControllerDidSelectCustomizeLater:(CNPosterSetupAvatarPreviewViewController *)arg1;
- (void)avatarPreviewViewControllerDidSelectCustomizePhoto:(CNPosterSetupAvatarPreviewViewController *)arg1;

@end
