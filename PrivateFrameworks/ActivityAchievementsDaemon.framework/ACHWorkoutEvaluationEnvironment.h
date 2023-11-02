
@interface ACHWorkoutEvaluationEnvironment : NSObject {
    double  _best10KDuration;
    double  _best5KDuration;
    double  _bestElevationGainedForType;
    double  _bestHalfMarathonDuration;
    double  _bestKilocaloriesForType;
    double  _bestKilometersForType;
    double  _bestMarathonDuration;
    double  _bestWheelchair10KDuration;
    double  _bestWheelchair5KDuration;
    double  _bestWheelchairHalfMarathonDuration;
    double  _bestWheelchairMarathonDuration;
    unsigned long long  _experienceType;
    bool  _isMetricLocale;
    unsigned long long  _numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
    unsigned long long  _numberOfFirstPartyWorkoutsOver15MinutesWithType;
    unsigned long long  _numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek;
    unsigned long long  _numberOfFirstPartyWorkoutsOver5MinutesWithType;
    ACHWorkoutEvaluationWorkoutProperties * _workout;
}

@property (nonatomic, readonly) double best10KDuration;
@property (nonatomic, readonly) double best5KDuration;
@property (nonatomic, readonly) double bestElevationGainedForType;
@property (nonatomic, readonly) double bestHalfMarathonDuration;
@property (nonatomic, readonly) double bestKilocaloriesForType;
@property (nonatomic, readonly) double bestKilometersForType;
@property (nonatomic, readonly) double bestMarathonDuration;
@property (nonatomic, readonly) double bestWheelchair10KDuration;
@property (nonatomic, readonly) double bestWheelchair5KDuration;
@property (nonatomic, readonly) double bestWheelchairHalfMarathonDuration;
@property (nonatomic, readonly) double bestWheelchairMarathonDuration;
@property (nonatomic, readonly) unsigned long long experienceType;
@property (nonatomic, readonly) bool isMetricLocale;
@property (nonatomic, readonly) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
@property (nonatomic, readonly) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesWithType;
@property (nonatomic, readonly) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek;
@property (nonatomic, readonly) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesWithType;
@property (nonatomic, readonly) ACHWorkoutEvaluationWorkoutProperties *workout;

- (void).cxx_destruct;
- (double)best10KDuration;
- (double)best5KDuration;
- (double)bestElevationGainedForType;
- (double)bestHalfMarathonDuration;
- (double)bestKilocaloriesForType;
- (double)bestKilometersForType;
- (double)bestMarathonDuration;
- (double)bestWheelchair10KDuration;
- (double)bestWheelchair5KDuration;
- (double)bestWheelchairHalfMarathonDuration;
- (double)bestWheelchairMarathonDuration;
- (unsigned long long)experienceType;
- (id)initWithWorkout:(id)arg1 numberOfFirstPartyWorkoutsOver5MinutesWithType:(unsigned long long)arg2 numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek:(unsigned long long)arg3 bestKilocaloriesForType:(double)arg4 bestKilometersForType:(double)arg5 bestElevationGainedForType:(double)arg6 best5KDuration:(double)arg7 best10KDuration:(double)arg8 bestWheelchair5KDuration:(double)arg9 bestWheelchair10KDuration:(double)arg10 bestHalfMarathonDuration:(double)arg11 bestMarathonDuration:(double)arg12 bestWheelchairHalfMarathonDuration:(double)arg13 bestWheelchairMarathonDuration:(double)arg14 experienceType:(unsigned long long)arg15 isMetricLocale:(bool)arg16;
- (bool)isMetricLocale;
- (unsigned long long)numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
- (unsigned long long)numberOfFirstPartyWorkoutsOver15MinutesWithType;
- (unsigned long long)numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek;
- (unsigned long long)numberOfFirstPartyWorkoutsOver5MinutesWithType;
- (id)valueForUndefinedKey:(id)arg1;
- (id)workout;

@end
