
@interface HDRaceRouteClusterWorkout : NSObject {
    unsigned long long  _activityType;
    double  _distance;
    double  _duration;
    double  _finishDuration;
    NSDate * _startDate;
    double  _startDuration;
    NSUUID * _workoutUUID;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double finishDuration;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) double startDuration;
@property (nonatomic, readonly) NSUUID *workoutUUID;

+ (id)clusterWorkoutWithWorkoutEntity:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)clusterWorkoutWithWorkoutUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (unsigned long long)activityType;
- (double)distance;
- (double)duration;
- (double)finishDuration;
- (id)startDate;
- (double)startDuration;
- (id)workoutUUID;

@end
