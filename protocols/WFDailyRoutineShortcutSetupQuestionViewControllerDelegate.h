
@protocol WFDailyRoutineShortcutSetupQuestionViewControllerDelegate <NSObject>

@required

- (void)dailyRoutineShortcutSetupQuestionViewController:(WFDailyRoutineShortcutSetupQuestionViewController *)arg1 didAddActions:(NSArray *)arg2;
- (void)dailyRoutineShortcutSetupQuestionViewControllerDidSkip:(WFDailyRoutineShortcutSetupQuestionViewController *)arg1;
- (CLLocation *)selectedLocationForDailyRoutineShortcutSetupQuestionViewController:(WFDailyRoutineShortcutSetupQuestionViewController *)arg1;

@end
