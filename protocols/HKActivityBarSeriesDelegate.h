
@protocol HKActivityBarSeriesDelegate

@required

- (HKActivitySummary *)activitySummaryForCurrentRange;
- (long long)graphSeriesTimeScope;

@end
