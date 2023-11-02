
@protocol DNDRemoteServiceClientSettingsProtocol <NSObject>

@required

- (oneway void)deliverUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg1;
- (oneway void)deliverUpdatedScheduleSettings:(DNDScheduleSettings *)arg1;

@end
