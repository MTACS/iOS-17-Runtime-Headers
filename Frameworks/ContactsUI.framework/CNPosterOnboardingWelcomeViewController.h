
@interface CNPosterOnboardingWelcomeViewController : UIViewController <ContactsUI.CNPosterOnboardingWelcomeViewDelegate> {
    CNContact * _contact;
    <CNPosterOnboardingWelcomeViewControllerDelegate> * _delegate;
    bool  _hasExistingNickname;
    bool  _hasOptionToSkip;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) <CNPosterOnboardingWelcomeViewControllerDelegate> *delegate;
@property (nonatomic) bool hasExistingNickname;
@property (nonatomic) bool hasOptionToSkip;

- (void).cxx_destruct;
- (id)contact;
- (id)delegate;
- (bool)hasExistingNickname;
- (bool)hasOptionToSkip;
- (id)initWithContact:(id)arg1;
- (void)onboardingWelcomeViewDidTapCancel;
- (void)onboardingWelcomeViewDidTapContinue;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasExistingNickname:(bool)arg1;
- (void)setHasOptionToSkip:(bool)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;

@end
