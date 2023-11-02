
@protocol SCLSettingsSyncTransport <NSObject>

@required

- (bool)sendSchedule:(SCLScheduleSettings *)arg1 identifier:(id*)arg2 error:(id*)arg3;

@end
