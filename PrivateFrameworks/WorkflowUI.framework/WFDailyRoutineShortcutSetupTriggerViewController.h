
@interface WFDailyRoutineShortcutSetupTriggerViewController : OBWelcomeController {
    <WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> * _delegate;
    WFDailyRoutineShortcutSetupTriggerBuilder * _trigger;
}

@property (nonatomic) <WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> *delegate;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupTriggerBuilder *trigger;

- (void).cxx_destruct;
- (id)delegate;
- (void)didSelectAddTriggerButton;
- (void)didSelectSkipButton;
- (id)initWithTrigger:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)trigger;

@end
