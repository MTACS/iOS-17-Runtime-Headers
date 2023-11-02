
@interface CNContactSharedProfileSettingsAction : CNContactAction <CNMeCardSharingSettingsViewControllerDelegate, CNSharedProfileOnboardingControllerDelegate> {
    CNContactStore * _contactStore;
    CNSharedProfileOnboardingController * _onboardingController;
    <CNContactSharedProfileSettingsActionDelegate> * _sharedProfileSettingsActionDelegate;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CNSharedProfileOnboardingController *onboardingController;
@property (nonatomic) <CNContactSharedProfileSettingsActionDelegate> *sharedProfileSettingsActionDelegate;
@property (readonly) Class superclass;

+ (id)os_log;

- (void).cxx_destruct;
- (id)contactStore;
- (id)meContact;
- (id)onboardingController;
- (void)onboardingControllerDidFinishSetup:(id)arg1;
- (void)performActionWithSender:(id)arg1;
- (void)presentSharingSettingsWithNicknameContact:(id)arg1 sender:(id)arg2;
- (void)setContactStore:(id)arg1;
- (void)setOnboardingController:(id)arg1;
- (void)setSharedProfileSettingsActionDelegate:(id)arg1;
- (id)sharedProfileSettingsActionDelegate;
- (void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(bool)arg2;
- (void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2;

@end
