
@protocol DNDSSettingsSyncManagerDelegate <NSObject>

@required

- (void)syncManager:(id <DNDSSettingsSyncManager>)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
- (void)syncManager:(id <DNDSSettingsSyncManager>)arg1 didReceiveUpdatedScheduleSettings:(DNDSScheduleSettings *)arg2;

@end
