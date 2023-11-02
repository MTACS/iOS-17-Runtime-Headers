
@interface CNSharedProfileOnboardingController : NSObject <CNMeCardSharingSettingsViewControllerDelegate, CNPresenterDelegate, CNSNaPSetupFlowManagerDelegate> {
    UIViewController * _baseViewController;
    CNContactStore * _contactStore;
    <CNSharedProfileOnboardingControllerDelegate> * _delegate;
    UIViewController * _presentedViewController;
    CNSNaPSetupFlowManager * _setupFlowManager;
    bool  isPresentingModalViewController;
}

@property (nonatomic, retain) UIViewController *baseViewController;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNSharedProfileOnboardingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isPresentingModalViewController;
@property (nonatomic, retain) UIViewController *presentedViewController;
@property (nonatomic, retain) CNSNaPSetupFlowManager *setupFlowManager;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (id)sharingSettingsViewControllerForNicknameContact:(id)arg1 meContact:(id)arg2 mode:(long long)arg3 contactStore:(id)arg4;
+ (id)userDefaults;
+ (void)writeToDefaultsDidSkipPosterSetup:(bool)arg1;

- (void).cxx_destruct;
- (bool)accountCanCreateSNaP;
- (bool)accountCanCreateSNaPWithShouldShowErrorAlert:(bool)arg1;
- (bool)alwaysShowSNaPOnboarding;
- (id)baseViewController;
- (bool)canShowOnboarding;
- (id)contactStore;
- (id)delegate;
- (bool)didSkipPosterSetup;
- (void)dismiss:(id)arg1;
- (bool)hasCompletedOnboarding;
- (id)initWithContactStore:(id)arg1;
- (bool)isPhotosReadyForOnboarding;
- (bool)isPresentingModalViewController;
- (long long)lastShownOnboardingVersion;
- (id)meContact;
- (id)meOrPrimaryAccountContact;
- (void)onboardingFromFlowManager:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)onboardingFromFlowManager:(id)arg1 didUpdateSharingState:(bool)arg2;
- (void)onboardingFromFlowManager:(id)arg1 didUpdateWithSharingResult:(id)arg2;
- (void)presentOnboardingFlowForNicknameContact:(id)arg1 mode:(long long)arg2 fromViewController:(id)arg3;
- (void)presentOnboardingFlowIfNeededForMode:(long long)arg1 fromViewController:(id)arg2;
- (void)presentOnboardingFlowIfNeededForSettingsMode:(long long)arg1 fromViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)presentSettingsForMode:(long long)arg1 fromViewController:(id)arg2;
- (void)presentSettingsForNicknameContact:(id)arg1 meContact:(id)arg2 mode:(long long)arg3 fromViewController:(id)arg4;
- (void)presentSettingsForNicknameContact:(id)arg1 mode:(long long)arg2 fromViewController:(id)arg3;
- (id)presentedViewController;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)setBaseViewController:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setSetupFlowManager:(id)arg1;
- (id)setupFlowManager;
- (void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(bool)arg2;
- (void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2;
- (bool)shouldShowOnboarding;
- (bool)shouldShowOnboardingForSettingsWithNicknameContact:(id)arg1 meContact:(id)arg2 mode:(long long)arg3;
- (void)showMultiplePhoneNumbersAlertForNicknamesWithSender:(id)arg1;
- (void)showiCloudNotSignedInAlertForNicknamesWithSender:(id)arg1;
- (void)startOnboardingOrEditForMode:(long long)arg1 fromViewController:(id)arg2;
- (void)updateNicknameWithAudience:(unsigned long long)arg1;
- (void)updateNicknameWithSharingResult:(id)arg1;
- (void)updateNicknameWithSharingState:(bool)arg1;
- (void)writeToDefaultsCompletedOnboarding:(bool)arg1;
- (void)writeToDefaultsOnboardingVersion:(long long)arg1;

@end
