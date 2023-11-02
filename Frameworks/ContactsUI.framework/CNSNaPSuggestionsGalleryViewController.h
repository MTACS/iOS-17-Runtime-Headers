
@interface CNSNaPSuggestionsGalleryViewController : UIViewController <ContactsUI.CNWallpaperSuggestionsGalleryDelegate> {
    CNContact * _contact;
    <CNSNaPSuggestionsGalleryViewControllerDelegate> * _delegate;
    bool  _isEditingSNaP;
    bool  _isOnboarding;
    long long  _mode;
    NSString * _photoLibraryAssetID;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) <CNSNaPSuggestionsGalleryViewControllerDelegate> *delegate;
@property (nonatomic) bool isEditingSNaP;
@property (nonatomic) bool isOnboarding;
@property (nonatomic) long long mode;
@property (nonatomic, retain) NSString *photoLibraryAssetID;

- (void).cxx_destruct;
- (id)contact;
- (id)delegate;
- (id)initWithMode:(long long)arg1 contact:(id)arg2 isEditingSNaP:(bool)arg3 isOnboarding:(bool)arg4;
- (id)initWithMode:(long long)arg1 contact:(id)arg2 isEditingSNaP:(bool)arg3 isOnboarding:(bool)arg4 photoLibraryAssetID:(id)arg5;
- (bool)isEditingSNaP;
- (bool)isOnboarding;
- (long long)mode;
- (id)photoLibraryAssetID;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsEditingSNaP:(bool)arg1;
- (void)setIsOnboarding:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setPhotoLibraryAssetID:(id)arg1;
- (void)skipStep;
- (long long)sourceTypeFromString:(id)arg1;
- (void)suggestionsGalleryDidCancel;
- (void)suggestionsGalleryDidFinishWithPosterConfiguration:(id)arg1 posterType:(id)arg2 withGivenName:(id)arg3 familyName:(id)arg4;
- (void)suggestionsGalleryDidRequestPresentationOfImagePickerController:(id)arg1;
- (void)suggestionsGalleryDidRequestPresentationOfPosterEditingViewController:(id)arg1;
- (void)suggestionsGalleryDidSelectAvatarSourceType:(id)arg1 withGivenName:(id)arg2 familyName:(id)arg3;
- (void)suggestionsGalleryDidSelectSuggestedAvatar:(id)arg1 withGivenName:(id)arg2 familyName:(id)arg3;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;

@end
