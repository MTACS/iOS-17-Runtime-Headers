
@protocol DNDSRemoteServiceProviderSettingsDelegate <NSObject>

@required

- (DNDBehaviorSettings *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 behaviorSettingsWithError:(id*)arg2;
- (DNDScheduleSettings *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 scheduleSettingsWithError:(id*)arg2;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setBehaviorSettings:(DNDBehaviorSettings *)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setScheduleSettings:(DNDScheduleSettings *)arg2 withError:(id*)arg3;

@end
