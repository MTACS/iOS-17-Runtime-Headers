
@protocol HKInteractiveChartRangeProvider

@required

- (HKValueRange *)actualVisibleRange;
- (HKValueRange *)effectiveVisibleRangeActive;
- (HKValueRange *)effectiveVisibleRangeCadence;

@end
