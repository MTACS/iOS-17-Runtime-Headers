
@protocol CNSNaPSuggestionsGalleryViewControllerDelegate

@required

- (void)suggestionsGalleryViewController:(CNSNaPSuggestionsGalleryViewController *)arg1 didFinishWithPosterConfiguration:(CNPRSPosterConfiguration *)arg2 name:(CNSNaPSuggestionsGalleryName *)arg3;
- (void)suggestionsGalleryViewController:(CNSNaPSuggestionsGalleryViewController *)arg1 didSelectAvatarSourceType:(long long)arg2 name:(CNSNaPSuggestionsGalleryName *)arg3;
- (void)suggestionsGalleryViewController:(CNSNaPSuggestionsGalleryViewController *)arg1 didSelectSuggestedAvatar:(CNContactImage *)arg2 name:(CNSNaPSuggestionsGalleryName *)arg3;
- (void)suggestionsGalleryViewControllerDidCancel:(CNSNaPSuggestionsGalleryViewController *)arg1;
- (void)suggestionsGalleryViewControllerDidSelectCustomizeLater:(CNSNaPSuggestionsGalleryViewController *)arg1;

@end
