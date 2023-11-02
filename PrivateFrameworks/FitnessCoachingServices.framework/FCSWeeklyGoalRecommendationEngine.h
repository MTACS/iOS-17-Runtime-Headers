
@interface FCSWeeklyGoalRecommendationEngine : NSObject

+ (id)_activitySummariesSortedByEnergyBurn:(id)arg1;
+ (id)_activitySummariesSortedByMoveMinutes:(id)arg1;
+ (id)_activitySummariesSortedByMoveValue:(id)arg1 activityMoveMode:(long long)arg2;
+ (double)_averageMoveFromActivitySummaries:(id)arg1 forNumberOfSamples:(long long)arg2;
+ (bool)_isMoveGoalAchievedForActivitySummary:(id)arg1;
+ (double)_minThresholdForActivityMoveMode:(long long)arg1;
+ (unsigned long long)_numSamplesWithMoveGreaterThanTheGoalByPercent:(double)arg1 forSummaries:(id)arg2;
+ (long long)_numberOfDaysGoalAchievedInSummaries:(id)arg1;
+ (unsigned long long)_numberOfDaysInMostRecentWinningStreakForSummariesOrderedByDate:(id)arg1;
+ (unsigned long long)_numberOfInvalidDaysFromActivitySummaries:(id)arg1 forExpectedNumberOfSamples:(unsigned long long)arg2;
+ (double)recommendedNewWeeklyGoalForActivitySummaries:(id)arg1;

@end
