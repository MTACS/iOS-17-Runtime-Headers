
@interface HKWorkout : HKSample <HDCoding> {
    double  _duration;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    bool  _isWatchWorkout;
    HKWorkoutActivity * _primaryActivity;
    NSArray * _subActivities;
    unsigned long long  _workoutActivityType;
    NSArray * _workoutEvents;
    NSDictionary * _zonesByType;
}

@property (getter=_activityMoveMode, nonatomic, readonly) long long activityMoveMode;
@property (readonly, copy) NSDictionary *allStatistics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double duration;
@property (getter=_goal, setter=_setGoal:, nonatomic, retain) HKQuantity *goal;
@property (getter=_goalType, setter=_setGoalType:, nonatomic) unsigned long long goalType;
@property (readonly) unsigned long long hash;
@property (getter=_isWatchWorkout, setter=_setIsWatchWorkout:, nonatomic) bool isWatchWorkout;
@property (getter=_primaryActivity, setter=_setPrimaryActivity:, nonatomic, retain) HKWorkoutActivity *primaryActivity;
@property (getter=_subActivities, setter=_setSubActivities:, nonatomic, retain) NSArray *subActivities;
@property (readonly) Class superclass;
@property (getter=_totalBasalEnergyBurned, setter=_setTotalBasalEnergyBurned:, nonatomic, retain) HKQuantity *totalBasalEnergyBurned;
@property (readonly) HKQuantity *totalDistance;
@property (readonly) HKQuantity *totalEnergyBurned;
@property (readonly) HKQuantity *totalFlightsClimbed;
@property (readonly) HKQuantity *totalSwimmingStrokeCount;
@property (readonly, copy) NSArray *workoutActivities;
@property (readonly) unsigned long long workoutActivityType;
@property (readonly, copy) NSArray *workoutEvents;
@property (getter=_zonesByType, setter=_setZonesByType:, nonatomic, copy) NSDictionary *zonesByType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_activityTypeMappings;
+ (id)_allWorkoutActivityTypes;
+ (id)_allWorkoutTypeNames;
+ (bool)_isConcreteObjectClass;
+ (id)_statisticsFromTotalActiveEnergyBurned:(id)arg1 totalBasalEnergyBurned:(id)arg2 totalDistance:(id)arg3 totalSwimmingStrokeCount:(id)arg4 totalFlightsClimbed:(id)arg5 workoutActivityType:(unsigned long long)arg6 startDate:(id)arg7 endDate:(id)arg8;
+ (id)_stringFromWorkoutActivityType:(unsigned long long)arg1;
+ (unsigned long long)_workoutActivityTypeFromString:(id)arg1;
+ (bool)_workoutWithActivityType:(unsigned long long)arg1 acceptsSubActivityType:(unsigned long long)arg2;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 device:(id)arg11 metadata:(id)arg12;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 workoutActivities:(id)arg5 duration:(double)arg6 statistics:(id)arg7 goalType:(unsigned long long)arg8 goal:(id)arg9 device:(id)arg10 metadata:(id)arg11;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 workoutActivities:(id)arg5 duration:(double)arg6 totalActiveEnergyBurned:(id)arg7 totalBasalEnergyBurned:(id)arg8 totalDistance:(id)arg9 totalSwimmingStrokeCount:(id)arg10 totalFlightsClimbed:(id)arg11 goalType:(unsigned long long)arg12 goal:(id)arg13 device:(id)arg14 metadata:(id)arg15;
+ (bool)supportsSecureCoding;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 totalFlightsClimbed:(id)arg7 device:(id)arg8 metadata:(id)arg9;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 totalSwimmingStrokeCount:(id)arg7 device:(id)arg8 metadata:(id)arg9;

- (void).cxx_destruct;
- (long long)_activityMoveMode;
- (id)_deepCopy;
- (id)_detailedDescriptionComponents;
- (id)_detailedDescriptionString;
- (void)_enumerateActiveTimePeriods:(id /* block */)arg1;
- (void)_enumerateTimePeriodsWithBlock:(id /* block */)arg1;
- (id)_goal;
- (double)_goalInCanonicalUnit;
- (unsigned long long)_goalType;
- (bool)_isWatchWorkout;
- (id)_primaryActivity;
- (void)_setDuration:(double)arg1;
- (void)_setGoal:(id)arg1;
- (void)_setGoalType:(unsigned long long)arg1;
- (void)_setIsWatchWorkout:(bool)arg1;
- (void)_setPrimaryActivity:(id)arg1;
- (void)_setSubActivities:(id)arg1;
- (void)_setTotalBasalEnergyBurned:(id)arg1;
- (void)_setTotalDistance:(id)arg1;
- (void)_setTotalEnergyBurned:(id)arg1;
- (void)_setTotalFlightsClimbed:(id)arg1;
- (void)_setTotalSwimmingStrokeCount:(id)arg1;
- (void)_setUUID:(id)arg1;
- (void)_setWorkoutActivityType:(unsigned long long)arg1;
- (void)_setWorkoutEvents:(id)arg1;
- (void)_setZonesByType:(id)arg1;
- (id)_subActivities;
- (id)_totalBasalEnergyBurned;
- (double)_totalBasalEnergyBurnedInCanonicalUnit;
- (double)_totalDistanceInCanonicalUnit;
- (double)_totalDistanceIncludingAllTypesForUnit:(id)arg1;
- (double)_totalEnergyBurnedInCanonicalUnit;
- (double)_totalFlightsClimbedInCanonicalUnit;
- (double)_totalSwimmingStrokeCountInCanonicalUnit;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)_validateWorkoutActivities:(id)arg1 withConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg2;
- (id)_validateWorkoutEvents:(id)arg1 withConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg2;
- (id)_zonesByType;
- (id)allStatistics;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (long long)hk_integerValue;
- (id)initWithCoder:(id)arg1;
- (id)statisticsForType:(id)arg1;
- (id)totalDistance;
- (id)totalEnergyBurned;
- (id)totalFlightsClimbed;
- (id)totalSwimmingStrokeCount;
- (id)workoutActivities;
- (unsigned long long)workoutActivityType;
- (id)workoutEvents;
- (id)zonesForType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon

- (double)_bestDurationForKilometerCount:(unsigned long long)arg1 activityType:(unsigned long long)arg2;
- (bool)_isHalfMarathonDistance;
- (bool)_isMarathonDistance;
- (double)aad_best10KDuration;
- (double)aad_best5KDuration;
- (double)aad_bestHalfMarathonDuration;
- (double)aad_bestMarathonDuration;
- (double)aad_bestWheelchair10KDuration;
- (double)aad_bestWheelchair5KDuration;
- (double)aad_bestWheelchairHalfMarathonDuration;
- (double)aad_bestWheelchairMarathonDuration;

// Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness

- (id)fi_activityType;
- (id)fi_elevationGain;
- (bool)fi_hasNonZeroElevationGain;
- (long long)fi_swimmingLocationType;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (bool)_isHeartRateSupportedInPowerSettingsForActivityType:(unsigned long long)arg1;
+ (bool)_isHeartRateSupportedInPrivacySettings;
+ (bool)fiui_activitySupportsMetricType:(unsigned long long)arg1 activityType:(id)arg2 activityMoveMode:(long long)arg3;
+ (unsigned long long)fiui_associatedMetricForGoalType:(unsigned long long)arg1;
+ (bool)fiui_isHeartRateSupportedForActivityType:(unsigned long long)arg1 isIndoor:(bool)arg2;
+ (bool)fiui_shouldTrackPaceWithOdometerForActivityType:(unsigned long long)arg1;
+ (id)fiui_supportedGoalTypesForActivityType:(id)arg1 activityMoveMode:(long long)arg2;
+ (id)fiui_supportedGoalTypesForWorkoutSettingsManager:(id)arg1;
+ (id)fiui_supportedMetricsForActivityType:(id)arg1 activityMoveMode:(long long)arg2;
+ (double)fiui_weightedAverageHeartRateWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

- (id)_fiui_averagePaceQty;
- (id)fiui_activityType;
- (double)fiui_averageCadence;
- (double)fiui_averagePace;
- (double)fiui_averagePower;
- (double)fiui_averageTimePerLap;
- (double)fiui_completionFactor;
- (id)fiui_connectedGymBrandName;
- (double)fiui_duration;
- (id)fiui_elevationGain;
- (id)fiui_eventsOfType:(long long)arg1;
- (id)fiui_finalWorkoutUUID;
- (bool)fiui_hasAveragePace;
- (bool)fiui_hasNonZeroElevationGain;
- (bool)fiui_hasWeatherData;
- (bool)fiui_isConnectedGymWorkout;
- (id)fiui_keyValueSummary;
- (id)fiui_lapLength;
- (long long)fiui_numberOfEventsOfType:(long long)arg1;
- (id)fiui_splitsFromDistanceSamples:(id)arg1 distanceInMetersPerSplit:(double)arg2 workoutStartDate:(id)arg3;
- (long long)fiui_strokeStyle;
- (long long)fiui_swimmingLocationType;
- (id)fiui_totalDistance;
- (double)fiui_totalStepCount;
- (id)fiui_workoutCustomSplits;
- (id)fiui_workoutSplitsForUserPreferredDistanceUnit:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hkui_localizedWorkoutStringForValue:(id)arg1;

- (void)addDetailValuesToSection:(id)arg1;
- (void)fetchSubSampleTypesWithHealthStore:(id)arg1 completion:(id /* block */)arg2;
- (id)fixedAggregateValuesWithDisplayTypeController:(id)arg1 unitController:(id)arg2;
- (id)hk_additionalMetadataSectionsWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 subsampleDelegate:(id)arg4;
- (id)hk_defaultDistanceQuantityType;
- (id)hkui_localizedActivityTypeName;
- (id)subSamplePredicate;
- (id)subSampleSectionTitle;

@end
