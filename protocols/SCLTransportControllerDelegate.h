
@protocol SCLTransportControllerDelegate <NSObject>

@required

- (SCLScheduleSettings *)currentScheduleSettingsForTransportController:(SCLTransportController *)arg1;
- (void)transportController:(SCLTransportController *)arg1 didReceiveSchedule:(SCLScheduleSettings *)arg2 forInitialSync:(bool)arg3;
- (void)transportController:(SCLTransportController *)arg1 didReceiveUnlockHistoryItem:(SCLUnlockHistoryItem *)arg2;

@end
