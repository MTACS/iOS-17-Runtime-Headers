
@protocol REActiveWorkoutPredictorProperties <REExportedInterface>

@required

- (bool)currentlyHasActiveWorkout;
- (float)dailyAverageWorkouts;
- (NSDate *)lastWorkoutDate;
- (unsigned long long)numberOfWorkoutsPerformedToday;

@end
