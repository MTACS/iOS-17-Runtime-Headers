
@interface ATXAnchorModelEventFeaturizer : NSObject {
    NSMutableDictionary * _bundleIdToLaunchHistoryDict;
    bool  _shouldComputeLaunchHistoryForActionKeyLaunches;
    bool  _shouldComputeLaunchHistoryForActionUUIDLaunches;
    bool  _shouldComputeLaunchHistoryForAppLaunches;
}

@property (nonatomic) bool shouldComputeLaunchHistoryForActionKeyLaunches;
@property (nonatomic) bool shouldComputeLaunchHistoryForActionUUIDLaunches;
@property (nonatomic) bool shouldComputeLaunchHistoryForAppLaunches;

+ (unsigned long long)getMinTemporalDistanceFromAnchorDate:(id)arg1 toTimeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)locationOfInterestForAnchorOccurrenceDate:(id)arg1;
+ (void)setHourofDayAndDayOfWeekFromDate:(id)arg1 anchorMetadata:(id)arg2;
+ (void)setLocationAndLocationTypeOnDate:(id)arg1 anchorMetadata:(id)arg2;
+ (void)setMonthAndDayOfMonthFromDate:(id)arg1 anchorMetadata:(id)arg2;

- (void).cxx_destruct;
- (id)earliestDate:(id)arg1;
- (id)featurizeActionEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)featurizeActionKeyForActionEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)featurizeActionUUIDForActionEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)featurizeAnchorEvent:(id)arg1 anchor:(id)arg2;
- (id)featurizeAppLaunchEvents:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)featurizeAppLaunchForActionEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)featurizeLinkActionEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)featurizeModeEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)historyForActionUUIDWithAppIntentDuetEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)historyForAppLaunchDuetEvents:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)historyForLinkActionChangeEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)historyForModeChangeEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)init;
- (id)numAppLaunchesForBundleIds:(id)arg1 endDate:(id)arg2 dateBuckets:(id)arg3;
- (id)numEventsForEventIds:(id)arg1 dateBuckets:(id)arg2 biomePublisher:(id)arg3;
- (id)numModeChangesForModeCandidateId:(id)arg1 endDate:(id)arg2 dateBuckets:(id)arg3;
- (id)numModeChangesForModeCandidateIds:(id)arg1 endDate:(id)arg2 dateBuckets:(id)arg3;
- (id)recentHistoryForActionUUIDWithAppIntentDuetEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)recentHistoryForAppLaunchDuetEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)recentHistoryForModeWithModeEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (void)setShouldComputeLaunchHistoryForActionKeyLaunches:(bool)arg1;
- (void)setShouldComputeLaunchHistoryForActionUUIDLaunches:(bool)arg1;
- (void)setShouldComputeLaunchHistoryForAppLaunches:(bool)arg1;
- (bool)shouldComputeLaunchHistoryForActionKeyLaunches;
- (bool)shouldComputeLaunchHistoryForActionUUIDLaunches;
- (bool)shouldComputeLaunchHistoryForAppLaunches;
- (void)warmLaunchHistoryForAppEvents:(id)arg1 anchorOccurrenceDate:(id)arg2;

@end
