
@protocol WFAlarmChooserViewControllerDelegate <NSObject>

@required

- (void)alarmChooserViewController:(WFAlarmChooserViewController *)arg1 didFinishWithChosenAlarms:(NSArray *)arg2;
- (void)alarmChooserViewControllerDidCancel:(WFAlarmChooserViewController *)arg1;

@end
