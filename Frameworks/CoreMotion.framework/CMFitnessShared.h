
@interface CMFitnessShared : NSObject

+ (bool)isDeviceSatellitePaired;
+ (bool)isWorkoutEndReminderEnabledWhenDeviceIsInMoveTimeMode:(bool)arg1 withCurrentSetting:(id)arg2;
+ (bool)isWorkoutStartReminderEnabledWhenDeviceIsSatellitePaired:(bool)arg1 isInMoveTimeMode:(bool)arg2 withCurrentSetting:(id)arg3;

@end
