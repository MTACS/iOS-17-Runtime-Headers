
@interface WFDailyRoutineShortcutSetupActionsQuestionViewController : OBWelcomeController <CNContactPickerDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController> {
    <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> * _delegate;
    WFDailyRoutineShortcutSetupActionsQuestion * _question;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool parentShouldShowSkipButton;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupActionsQuestion *question;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (id)delegate;
- (void)didSelectAddButton;
- (void)didSelectSkipButton;
- (id)initWithQuestion:(id)arg1;
- (bool)parentShouldShowSkipButton;
- (id)question;
- (void)setDelegate:(id)arg1;

@end
