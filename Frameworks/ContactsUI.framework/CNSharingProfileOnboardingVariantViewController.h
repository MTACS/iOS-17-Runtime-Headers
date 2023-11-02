
@interface CNSharingProfileOnboardingVariantViewController : OBWelcomeController <CNPhotoPickerVariantListControllerDelegate> {
    OBBoldTrayButton * _backButton;
    OBBoldTrayButton * _continueButton;
    NSLayoutConstraint * _heightLayoutConstraint;
    CNPhotoPickerProviderItem * _item;
    <CNSharingProfileOnboardingVariantViewControllerDelegate> * _onboardingDelegate;
    OBLinkTrayButton * _poseButton;
    CNPhotoPickerProviderItem * _selectedItem;
    OBLinkTrayButton * _setupLaterButton;
    bool  _shouldShowPoseButton;
    CNPhotoPickerVariantListController * _variantListController;
    NSString * _variantName;
    CNPhotoPickerVariantsManager * _variantsManager;
}

@property (nonatomic, retain) OBBoldTrayButton *backButton;
@property (nonatomic, retain) OBBoldTrayButton *continueButton;
@property (nonatomic, retain) NSLayoutConstraint *heightLayoutConstraint;
@property (nonatomic, retain) CNPhotoPickerProviderItem *item;
@property (nonatomic) <CNSharingProfileOnboardingVariantViewControllerDelegate> *onboardingDelegate;
@property (nonatomic, retain) OBLinkTrayButton *poseButton;
@property (nonatomic, retain) CNPhotoPickerProviderItem *selectedItem;
@property (nonatomic, retain) OBLinkTrayButton *setupLaterButton;
@property (nonatomic) bool shouldShowPoseButton;
@property (nonatomic, retain) CNPhotoPickerVariantListController *variantListController;
@property (nonatomic, retain) NSString *variantName;
@property (nonatomic, retain) CNPhotoPickerVariantsManager *variantsManager;

- (void).cxx_destruct;
- (id)backButton;
- (id)continueButton;
- (void)didTapBack:(id)arg1;
- (void)didTapContinue:(id)arg1;
- (void)didTapPose:(id)arg1;
- (void)didTapSetupLater:(id)arg1;
- (id)heightLayoutConstraint;
- (id)initWithVariantsManager:(id)arg1 originalItem:(id)arg2 selectedVariantIdentifier:(id)arg3;
- (id)item;
- (id)onboardingDelegate;
- (void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2;
- (void)photoPickerVariantListControllerDidCancel:(id)arg1;
- (id)poseButton;
- (id)selectedItem;
- (void)setBackButton:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setHeightLayoutConstraint:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setOnboardingDelegate:(id)arg1;
- (void)setPoseButton:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)setSetupLaterButton:(id)arg1;
- (void)setShouldShowPoseButton:(bool)arg1;
- (void)setVariantListController:(id)arg1;
- (void)setVariantName:(id)arg1;
- (void)setVariantsManager:(id)arg1;
- (id)setupLaterButton;
- (bool)shouldShowPoseButton;
- (void)updateOriginalItem:(id)arg1;
- (id)variantListController;
- (id)variantName;
- (id)variantsManager;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
