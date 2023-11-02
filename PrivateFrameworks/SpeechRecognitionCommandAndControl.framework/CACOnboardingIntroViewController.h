
@interface CACOnboardingIntroViewController : OBWelcomeController {
    OBTrayButton * _linkButton;
    OBTrayButton * _mainButton;
    CACOnboardingCommandsTableViewController * _onboardingTVC;
    unsigned long long  _style;
}

@property (nonatomic, retain) OBTrayButton *linkButton;
@property (nonatomic, retain) OBTrayButton *mainButton;
@property (nonatomic, retain) CACOnboardingCommandsTableViewController *onboardingTVC;
@property (nonatomic) unsigned long long style;

+ (id)defaultControllerWithStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)configureDownloadCaption;
- (void)configureLanguageButton;
- (void)dealloc;
- (void)dismissWelcomeController;
- (void)enableVoiceControlAndMoveToCommandsOverview;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 style:(unsigned long long)arg4;
- (void)languageDidChange;
- (id)linkButton;
- (id)mainButton;
- (id)onboardingTVC;
- (void)presentLanguageSelection;
- (void)setLinkButton:(id)arg1;
- (void)setMainButton:(id)arg1;
- (void)setOnboardingTVC:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (bool)shouldInlineButtonTray;
- (unsigned long long)style;
- (void)viewDidLoad;

@end
