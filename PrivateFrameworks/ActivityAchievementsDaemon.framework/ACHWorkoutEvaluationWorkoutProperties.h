
@interface ACHWorkoutEvaluationWorkoutProperties : NSObject {
    double  _best10KDuration;
    double  _best5KDuration;
    double  _bestHalfMarathonDuration;
    double  _bestMarathonDuration;
    double  _bestWheelchair10KDuration;
    double  _bestWheelchair5KDuration;
    double  _bestWheelchairHalfMarathonDuration;
    double  _bestWheelchairMarathonDuration;
    double  _duration;
    double  _elevationGained;
    double  _elevationGainedInMeters;
    bool  _isDuathlon;
    bool  _isFiftyKilometerTriathlon;
    bool  _isFirstParty;
    bool  _isFullDistanceTriathlon;
    bool  _isHalfDistanceTriathlon;
    bool  _isIndoor;
    bool  _isSprintTriathlon;
    double  _kilocalories;
    double  _kilometers;
    double  _meters;
    unsigned long long  _type;
}

@property (nonatomic, readonly) double best10KDuration;
@property (nonatomic, readonly) double best5KDuration;
@property (nonatomic, readonly) double bestHalfMarathonDuration;
@property (nonatomic, readonly) double bestMarathonDuration;
@property (nonatomic, readonly) double bestWheelchair10KDuration;
@property (nonatomic, readonly) double bestWheelchair5KDuration;
@property (nonatomic, readonly) double bestWheelchairHalfMarathonDuration;
@property (nonatomic, readonly) double bestWheelchairMarathonDuration;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double elevationGained;
@property (nonatomic, readonly) double elevationGainedInMeters;
@property (nonatomic, readonly) bool isDuathlon;
@property (nonatomic, readonly) bool isFiftyKilometerTriathlon;
@property (nonatomic, readonly) bool isFirstParty;
@property (nonatomic, readonly) bool isFullDistanceTriathlon;
@property (nonatomic, readonly) bool isHalfDistanceTriathlon;
@property (nonatomic, readonly) bool isIndoor;
@property (nonatomic, readonly) bool isSprintTriathlon;
@property (nonatomic, readonly) double kilocalories;
@property (nonatomic, readonly) double kilometers;
@property (nonatomic, readonly) double meters;
@property (nonatomic, readonly) unsigned long long type;

- (id)_nonMetaActivitiesForWorkout:(id)arg1;
- (bool)_workoutIsDuathlon:(id)arg1;
- (bool)_workoutIsTriathlon:(id)arg1 swimmingDistanceInKilometers:(double)arg2 cyclingDistanceInKilometers:(double)arg3 runningDistanceInKilometers:(double)arg4;
- (double)best10KDuration;
- (double)best5KDuration;
- (double)bestHalfMarathonDuration;
- (double)bestMarathonDuration;
- (double)bestWheelchair10KDuration;
- (double)bestWheelchair5KDuration;
- (double)bestWheelchairHalfMarathonDuration;
- (double)bestWheelchairMarathonDuration;
- (double)duration;
- (double)elevationGained;
- (double)elevationGainedInMeters;
- (id)initWithWorkout:(id)arg1;
- (bool)isDuathlon;
- (bool)isFiftyKilometerTriathlon;
- (bool)isFirstParty;
- (bool)isFullDistanceTriathlon;
- (bool)isHalfDistanceTriathlon;
- (bool)isIndoor;
- (bool)isSprintTriathlon;
- (double)kilocalories;
- (double)kilometers;
- (double)meters;
- (unsigned long long)type;
- (id)valueForUndefinedKey:(id)arg1;

@end
