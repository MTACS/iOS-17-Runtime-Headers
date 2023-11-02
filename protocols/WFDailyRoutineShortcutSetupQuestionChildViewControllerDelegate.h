
@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate <NSObject>

@required

- (void)dailyRoutineShortcutSetupQuestionChildViewController:(UIViewController<WFDailyRoutineShortcutSetupQuestionChildViewController> *)arg1 didSelectActions:(NSArray *)arg2;
- (void)dailyRoutineShortcutSetupQuestionChildViewControllerDidSkip:(UIViewController<WFDailyRoutineShortcutSetupQuestionChildViewController> *)arg1;
- (CLLocation *)selectedLocationForDailyRoutineShortcutSetupQuestionChildViewController:(UIViewController<WFDailyRoutineShortcutSetupQuestionChildViewController> *)arg1;

@end
