
@interface HKInteractiveChartTimePeriodFormatter : HKInteractiveChartDataFormatter {
    HKTimePeriodDisplayTypeValueFormatter * _timePeriodFormatter;
}

- (void).cxx_destruct;
- (double)_boundedTimePeriodFromDataPoint:(id)arg1 boundedValueRange:(id)arg2;
- (id)_formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2 customDataType:(long long)arg3 boundedValueRange:(id)arg4;
- (id)_formattedStringWithData:(id)arg1 roundToHours:(bool)arg2 displayUnit:(bool)arg3;
- (id)formattedBoundedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2 customDataType:(long long)arg3 chartRangeProvider:(id)arg4;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2 customDataType:(long long)arg3;

@end
