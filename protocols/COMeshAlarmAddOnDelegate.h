
@protocol COMeshAlarmAddOnDelegate <NSObject>

@optional

- (void)alarmAddOn:(COMeshAlarmAddOn *)arg1 didAddAlarms:(NSArray *)arg2;
- (void)alarmAddOn:(COMeshAlarmAddOn *)arg1 didChangeAlarms:(NSArray *)arg2;
- (void)alarmAddOn:(COMeshAlarmAddOn *)arg1 didChangeFiringAlarms:(NSArray *)arg2;
- (void)alarmAddOn:(COMeshAlarmAddOn *)arg1 didDismissAlarms:(NSArray *)arg2;
- (void)alarmAddOn:(COMeshAlarmAddOn *)arg1 didFireAlarms:(NSArray *)arg2;
- (void)alarmAddOn:(COMeshAlarmAddOn *)arg1 didRemoveAlarms:(NSArray *)arg2;
- (void)alarmAddOn:(COMeshAlarmAddOn *)arg1 didUpdateAlarms:(NSArray *)arg2;
- (void)didChangeCompositionForAlarmAddOn:(COMeshAlarmAddOn *)arg1;
- (void)didResetAlarmAddOn:(COMeshAlarmAddOn *)arg1;

@end
