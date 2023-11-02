
@interface HDDemoDataActivitySampleGenerator : HDDemoDataBaseSampleGenerator {
    HDDemoDataGeneratorWorkoutConfiguration * _currentWorkoutConfiguration;
    HKActivityCache * _lastActivityCache;
    double  _lastUVExposure;
    double  _lastUVIndexPeak;
    double  _lastUVIndexPeakTime;
    double  _nextActiveCaloriesSampleTime;
    double  _nextAppleStandHourSampleTime;
    double  _nextCyclingCadenceSampleTime;
    double  _nextCyclingFTPSampleTime;
    double  _nextCyclingPowerSampleTime;
    double  _nextCyclingSpeedSampleTime;
    double  _nextExerciseMinuteTime;
    double  _nextFallSampleTime;
    double  _nextFlightsClimbedSampleTime;
    double  _nextHeartRateRecoveryStartTime;
    double  _nextHeartRateRecoveryStopTime;
    double  _nextPhysicalEffortSampleTime;
    double  _nextRestingCaloriesSampleTime;
    double  _nextRunningGroundContactTimeSampleTime;
    double  _nextRunningPowerSampleTime;
    double  _nextRunningStrideLengthSampleTime;
    double  _nextRunningVerticalOscillationSampleTime;
    double  _nextStepsSampleTime;
    double  _nextUVIndexSampleTime;
    double  _nextWaterTemperatureSampleTime;
    HDDataOriginProvenance * _provenance;
    _HDDemoDataActivityWorkoutState * _workoutState;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_computeExerciseTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (id)_computeFlightsClimbedForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)_computePercentCooledForDemoPerson:(id)arg1 atTime:(double)arg2;
- (bool)_isDemoPersonCoolingDown:(id)arg1 atTime:(double)arg2;
- (bool)_isDemoPersonInWorkoutRecovery:(id)arg1 atTime:(double)arg2;
- (bool)_isDemoPersonSedentary:(id)arg1 atTime:(double)arg2;
- (bool)_isDemoPersonWalking:(id)arg1 atTime:(double)arg2 samplePeriod:(double)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)generateFirstRunObjectsForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setProfile:(id)arg1 provenance:(id)arg2;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
