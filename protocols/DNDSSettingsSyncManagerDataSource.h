
@protocol DNDSSettingsSyncManagerDataSource <NSObject>

@required

- (DNDBypassSettings *)phoneCallBypassSettingsForSyncManager:(id <DNDSSettingsSyncManager>)arg1;
- (DNDSScheduleSettings *)scheduleSettingsForSyncManager:(id <DNDSSettingsSyncManager>)arg1;

@end
