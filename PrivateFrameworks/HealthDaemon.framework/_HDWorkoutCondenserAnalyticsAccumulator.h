
@interface _HDWorkoutCondenserAnalyticsAccumulator : NSObject {
    long long  _condensedWorkouts;
    long long  _createdSeries;
    long long  _deletedSamples;
    bool  _hasProcessedWorkout;
    long long  _processedWorkouts;
    long long  _workoutsToCondense;
    long long  _workoutsToRecondense;
}

- (id)description;
- (id)init;

@end
