
@protocol DNDSSettingsManagerDelegate <NSObject>

@required

- (void)settingsManager:(DNDSSettingsManager *)arg1 didReceiveUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg2;
- (void)settingsManager:(DNDSSettingsManager *)arg1 didReceiveUpdatedScheduleSettings:(DNDSScheduleSettings *)arg2;
- (void)settingsManager:(DNDSSettingsManager *)arg1 didReceiveUpdatedSyncSettings:(DNDSSyncSettings *)arg2;

@end
