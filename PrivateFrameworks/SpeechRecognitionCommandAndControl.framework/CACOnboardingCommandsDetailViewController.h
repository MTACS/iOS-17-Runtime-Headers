
@interface CACOnboardingCommandsDetailViewController : OBTextWelcomeController {
    NSArray * _commandGroups;
    bool  _hideTrayButtons;
    OBTrayButton * _mainButton;
    CACOnboardingCommandsDetailViewController * _nextCommandGroupVC;
    OBTrayButton * _secondaryButton;
    bool  _skipAnalytics;
}

@property (nonatomic, retain) NSArray *commandGroups;
@property (nonatomic) bool hideTrayButtons;
@property (nonatomic, readonly) OBTrayButton *mainButton;
@property (nonatomic, retain) CACOnboardingCommandsDetailViewController *nextCommandGroupVC;
@property (nonatomic, readonly) OBTrayButton *secondaryButton;
@property (nonatomic) bool skipAnalytics;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)commandGroups;
- (void)dismiss;
- (bool)hideTrayButtons;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 commandGroups:(id)arg3;
- (id)mainButton;
- (id)nextCommandGroupVC;
- (id)secondaryButton;
- (void)setCommandGroups:(id)arg1;
- (void)setHideTrayButtons:(bool)arg1;
- (void)setNextCommandGroupVC:(id)arg1;
- (void)setSkipAnalytics:(bool)arg1;
- (bool)shouldInlineButtonTray;
- (bool)skipAnalytics;
- (void)viewDidLoad;

@end
