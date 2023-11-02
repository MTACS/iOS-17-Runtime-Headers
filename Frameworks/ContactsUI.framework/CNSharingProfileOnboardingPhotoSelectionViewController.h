
@interface CNSharingProfileOnboardingPhotoSelectionViewController : OBWelcomeController <CNPhotoPickerViewControllerDelegate, CNSharingProfilePhotoPickerViewControllerDelegate> {
    CNSharingProfileAvatarItemProviderConfiguration * _avatarItemProviderConfiguration;
    <AVTAvatarRecord> * _avatarRecord;
    OBBoldTrayButton * _backButton;
    OBBoldTrayButton * _confirmButton;
    CNContact * _contact;
    <CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate> * _delegate;
    CNSharingProfileLogger * _logger;
    CNPhotoPickerViewController * _photoPickerViewController;
    CNMutableContact * _photoProviderContact;
    OBLinkTrayButton * _setupLaterButton;
    CNSharingProfilePhotoPickerViewController * _sharingPhotoPickerViewController;
}

@property (nonatomic, retain) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (nonatomic, retain) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, retain) OBBoldTrayButton *backButton;
@property (nonatomic, retain) OBBoldTrayButton *confirmButton;
@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNSharingProfileLogger *logger;
@property (nonatomic, retain) CNPhotoPickerViewController *photoPickerViewController;
@property (nonatomic, retain) CNMutableContact *photoProviderContact;
@property (nonatomic, retain) OBLinkTrayButton *setupLaterButton;
@property (nonatomic, retain) CNSharingProfilePhotoPickerViewController *sharingPhotoPickerViewController;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)avatarItemProviderConfiguration;
- (id)avatarRecord;
- (id)backButton;
- (id)confirmButton;
- (id)contact;
- (id)contentView;
- (id)delegate;
- (void)didTapBackButton:(id)arg1;
- (void)didTapDoneButton:(id)arg1;
- (void)didTapSetupLaterButton:(id)arg1;
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2 avatarItemProviderConfiguration:(id)arg3;
- (void)loadView;
- (id)logger;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)photoPickerDidCancel:(id)arg1;
- (id)photoPickerViewController;
- (id)photoProviderContact;
- (void)setAvatarItemProviderConfiguration:(id)arg1;
- (void)setAvatarRecord:(id)arg1;
- (void)setBackButton:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setPhotoPickerViewController:(id)arg1;
- (void)setPhotoProviderContact:(id)arg1;
- (void)setSetupLaterButton:(id)arg1;
- (void)setSharingPhotoPickerViewController:(id)arg1;
- (id)setupLaterButton;
- (void)sharingPhotoPickerDidSelectAddItem:(id)arg1;
- (id)sharingPhotoPickerViewController;
- (void)updateForContentSizeCategoryChange;

@end
