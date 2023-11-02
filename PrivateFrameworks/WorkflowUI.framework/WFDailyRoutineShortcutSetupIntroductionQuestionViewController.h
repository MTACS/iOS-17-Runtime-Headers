
@interface WFDailyRoutineShortcutSetupIntroductionQuestionViewController : OBWelcomeController <WFDailyRoutineShortcutSetupQuestionChildViewController> {
    <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> * _delegate;
    WFDailyRoutineShortcutSetupIntroductionQuestion * _question;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool parentShouldShowSkipButton;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupIntroductionQuestion *question;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)didSelectContinueButton;
- (id)initWithQuestion:(id)arg1;
- (bool)parentShouldShowSkipButton;
- (id)question;
- (void)setDelegate:(id)arg1;

@end
