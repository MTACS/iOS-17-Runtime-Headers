
@interface WFDailyRoutineShortcutSetupQuestionViewController : UIViewController <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> {
    <WFDailyRoutineShortcutSetupQuestionViewControllerDelegate> * _delegate;
    WFDailyRoutineShortcutSetupQuestion * _question;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDailyRoutineShortcutSetupQuestionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupQuestion *question;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dailyRoutineShortcutSetupQuestionChildViewController:(id)arg1 didSelectActions:(id)arg2;
- (void)dailyRoutineShortcutSetupQuestionChildViewControllerDidSkip:(id)arg1;
- (id)delegate;
- (void)didSelectSkip;
- (id)initWithQuestion:(id)arg1;
- (id)question;
- (id)selectedLocationForDailyRoutineShortcutSetupQuestionChildViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
