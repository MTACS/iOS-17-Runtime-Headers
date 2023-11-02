
@protocol ContactsUI.CNWallpaperSuggestionsGalleryDelegate

@required

- (void)suggestionsGalleryDidCancel;
- (void)suggestionsGalleryDidFinishWithPosterConfiguration:(id)arg1 posterType:(NSString *)arg2 withGivenName:(NSString *)arg3 familyName:(NSString *)arg4;
- (void)suggestionsGalleryDidRequestPresentationOfImagePickerController:(UIImagePickerController *)arg1;
- (void)suggestionsGalleryDidRequestPresentationOfPosterEditingViewController:(UIViewController *)arg1;
- (void)suggestionsGalleryDidSelectAvatarSourceType:(NSString *)arg1 withGivenName:(NSString *)arg2 familyName:(NSString *)arg3;
- (void)suggestionsGalleryDidSelectSuggestedAvatar:(id)arg1 withGivenName:(NSString *)arg2 familyName:(NSString *)arg3;

@end
