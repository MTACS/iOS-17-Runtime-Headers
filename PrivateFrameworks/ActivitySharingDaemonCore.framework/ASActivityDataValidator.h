
@interface ASActivityDataValidator : NSObject

+ (id)_copyAchievement:(id)arg1;
+ (id)_removeInvalidWorkouts:(id)arg1;
+ (id)_shiftedAchievements:(id)arg1 friendTimeZones:(id)arg2 friendListManager:(id)arg3;
+ (id)_unhiddenSamplesInFilterableSamples:(id)arg1 friendTimeZones:(id)arg2 friendListManager:(id)arg3;
+ (id)validatedSamplesFromAchievements:(id)arg1 workouts:(id)arg2 activitySnapshots:(id)arg3 friendListManager:(id)arg4;

@end
