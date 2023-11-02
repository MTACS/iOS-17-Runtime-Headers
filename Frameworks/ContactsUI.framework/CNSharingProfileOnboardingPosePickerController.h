
@interface CNSharingProfileOnboardingPosePickerController : OBWelcomeController <CNPhotoPickerVariantListControllerDelegate> {
    <AVTAvatarRecord> * _avatarRecord;
    OBBoldTrayButton * _backButton;
    <CNSharingProfileOnboardingPosePickerControllerDelegate> * _delegate;
    NSLayoutConstraint * _heightConstraint;
    OBBoldTrayButton * _nextButton;
    OBLinkTrayButton * _setupLaterButton;
    CNPhotoPickerVariantListController * _variantListController;
    CNPhotoPickerVariantsManager * _variantsManager;
}

@property (nonatomic, retain) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, retain) OBBoldTrayButton *backButton;
@property (nonatomic) <CNSharingProfileOnboardingPosePickerControllerDelegate> *delegate;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) OBBoldTrayButton *nextButton;
@property (nonatomic, retain) OBLinkTrayButton *setupLaterButton;
@property (nonatomic, retain) CNPhotoPickerVariantListController *variantListController;
@property (nonatomic, retain) CNPhotoPickerVariantsManager *variantsManager;

- (void).cxx_destruct;
- (id)avatarRecord;
- (id)backButton;
- (id)delegate;
- (void)didTapBack:(id)arg1;
- (void)didTapContinue:(id)arg1;
- (void)didTapSetupLater:(id)arg1;
- (id)heightConstraint;
- (id)initWithAvatarRecord:(id)arg1 variantsManager:(id)arg2;
- (id)nextButton;
- (void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2;
- (void)photoPickerVariantListControllerDidCancel:(id)arg1;
- (void)setAvatarRecord:(id)arg1;
- (void)setBackButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setNextButton:(id)arg1;
- (void)setSetupLaterButton:(id)arg1;
- (void)setVariantListController:(id)arg1;
- (void)setVariantsManager:(id)arg1;
- (id)setupLaterButton;
- (id)variantListController;
- (id)variantsManager;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
