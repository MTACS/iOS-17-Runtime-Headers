
@interface HKWorkoutDataSource : NSObject

+ (id)_distanceTypeForActivityType:(unsigned long long)arg1 isIndoor:(bool)arg2;
+ (bool)_isBLECollectedDataType:(id)arg1 indoorWorkout:(bool)arg2;
+ (id)defaultConfigurationWithWorkoutConfiguration:(id)arg1 activityMoveMode:(long long)arg2;
+ (id)observedTypesForActivityType:(unsigned long long)arg1 isIndoor:(bool)arg2 connectedToFitnessMachine:(bool)arg3;
+ (id)observedTypesForActivityType:(unsigned long long)arg1 isIndoor:(bool)arg2 connectedToFitnessMachine:(bool)arg3 activityMode:(long long)arg4;
+ (bool)shouldObserveRunningMetricsForActivityMode:(long long)arg1 isIndoor:(bool)arg2 isGymKit:(bool)arg3;

@end
