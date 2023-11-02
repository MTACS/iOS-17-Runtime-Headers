
@interface HKInteractiveChartActivityData : NSObject <HKGraphSeriesChartData> {
    HKActivitySummary * _activitySummaryData;
    long long  _activityValue;
}

@property (nonatomic, retain) HKActivitySummary *activitySummaryData;
@property (nonatomic) long long activityValue;
@property (nonatomic, readonly) bool activityValueGoalMet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasActivityGoal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activitySummaryData;
- (long long)activityValue;
- (bool)activityValueGoalMet;
- (id)description;
- (bool)hasActivityGoal;
- (void)setActivitySummaryData:(id)arg1;
- (void)setActivityValue:(long long)arg1;

@end
