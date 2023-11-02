
@interface HKInteractiveChartHearingSensitivityFormatter : HKInteractiveChartDataFormatter

- (id)_formattedFrequencyValue:(double)arg1;
- (id)_selectedRangeDataForSensitivityData:(id)arg1 isLeftEar:(bool)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)initWithUnitController:(id)arg1;
- (id)unitStringFromUnit:(id)arg1 number:(id)arg2;
- (id)valueStringFromNumber:(id)arg1;

@end
