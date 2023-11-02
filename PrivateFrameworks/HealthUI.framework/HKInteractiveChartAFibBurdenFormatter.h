
@interface HKInteractiveChartAFibBurdenFormatter : HKInteractiveChartGenericStatFormatter {
    long long  _statisticsType;
}

@property (nonatomic) long long statisticsType;

- (id)_formattedDataWithLessThan:(double)arg1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)initWithStatisticsType:(long long)arg1;
- (void)setStatisticsType:(long long)arg1;
- (long long)statisticsType;

@end
