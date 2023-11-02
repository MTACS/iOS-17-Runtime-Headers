
@interface HKInteractiveChartBaselineRelativeStatFormatter : HKInteractiveChartGenericStatFormatter

- (id)_establishingBaselineSelectedRangeData;
- (id)_unavailableSelectedRangeData;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)unitStringFromUnit:(id)arg1 number:(id)arg2;
- (id)valueStringFromNumber:(id)arg1;

@end
