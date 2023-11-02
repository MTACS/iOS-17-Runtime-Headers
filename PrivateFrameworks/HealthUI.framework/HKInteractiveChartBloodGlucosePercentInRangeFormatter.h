
@interface HKInteractiveChartBloodGlucosePercentInRangeFormatter : HKInteractiveChartDataFormatter {
    long long  _highlightedClassification;
    NSNumberFormatter * _percentageFormatter;
}

@property (nonatomic) long long highlightedClassification;
@property (nonatomic, readonly, copy) NSNumberFormatter *percentageFormatter;

- (void).cxx_destruct;
- (double)_fractionForHighlightedClassificationFromDataPoint:(id)arg1;
- (id)_overallFractionInEuglycemiaForChartData:(id)arg1;
- (id)_rangeOfFractionInHighlightedClassificationForChartData:(id)arg1;
- (long long)_selectedRangeDataTypeForContext:(long long)arg1;
- (id)_stringFromFraction:(id)arg1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (long long)highlightedClassification;
- (id)init;
- (id)percentageFormatter;
- (void)setHighlightedClassification:(long long)arg1;

@end
