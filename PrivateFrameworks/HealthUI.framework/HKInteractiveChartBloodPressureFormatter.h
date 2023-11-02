
@interface HKInteractiveChartBloodPressureFormatter : HKInteractiveChartDataFormatter

- (id)_formattedStringWithRange:(id)arg1 displayUnit:(bool)arg2;
- (bool)_higherMaximum:(id)arg1 currentMaximum:(id)arg2;
- (bool)_lowerMinimum:(id)arg1 currentMinimum:(id)arg2;
- (id)_stringFromRange:(id)arg1 numberFormatter:(id)arg2 displayType:(id)arg3 unitController:(id)arg4;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;

@end
