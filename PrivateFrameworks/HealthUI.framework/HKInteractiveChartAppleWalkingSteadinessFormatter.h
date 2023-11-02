
@interface HKInteractiveChartAppleWalkingSteadinessFormatter : HKInteractiveChartGenericStatFormatter

- (id)_formattedCurrentValueForChartData:(id)arg1 context:(long long)arg2;
- (id)attributedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(bool)arg3;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)selectedRangeSeparatorString;
- (id)unitStringFromUnit:(id)arg1 number:(id)arg2;

@end
