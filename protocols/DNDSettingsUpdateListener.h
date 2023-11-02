
@protocol DNDSettingsUpdateListener <NSObject>

@optional

- (void)settingsService:(DNDSettingsService *)arg1 didReceiveUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg2;
- (void)settingsService:(DNDSettingsService *)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
- (void)settingsService:(DNDSettingsService *)arg1 didReceiveUpdatedScheduleSettings:(DNDScheduleSettings *)arg2;

@end
