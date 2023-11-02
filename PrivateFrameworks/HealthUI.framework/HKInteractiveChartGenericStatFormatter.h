
@interface HKInteractiveChartGenericStatFormatter : HKInteractiveChartDataFormatter {
    <HKInteractiveChartRangeProvider> * _chartRangeProvider;
    NSArray * _configuredStatItems;
    NSArray * _overrideStatFormatterItemOptions;
}

@property (nonatomic, retain) <HKInteractiveChartRangeProvider> *chartRangeProvider;
@property (nonatomic, retain) NSArray *configuredStatItems;
@property (nonatomic, retain) NSArray *overrideStatFormatterItemOptions;

+ (long long)mapSingleItemToStatisticsType:(id)arg1;

- (void).cxx_destruct;
- (id)_formatMin:(double)arg1 max:(double)arg2 unit:(id)arg3;
- (id)_formattedAnnotationForDistributionChartData:(id)arg1;
- (id)_formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2;
- (id)_makeSelectedRangeDataWithAvg:(double)arg1 unit:(id)arg2 showUnit:(bool)arg3 statisticsType:(long long)arg4;
- (id)_makeSelectedRangeDataWithMax:(double)arg1 unit:(id)arg2 prepend:(id)arg3 statisticsType:(long long)arg4;
- (id)_makeSelectedRangeDataWithMin:(double)arg1 max:(double)arg2 unit:(id)arg3 statisticsType:(long long)arg4;
- (id)chartRangeProvider;
- (void)configureFormatterForDisplayType:(id)arg1 quantityType:(id)arg2 chartRangeProvider:(id)arg3 timeScope:(long long)arg4 context:(long long)arg5;
- (id)configuredStatItems;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)overrideStatFormatterItemOptions;
- (id)selectedRangeSeparatorString;
- (void)setChartRangeProvider:(id)arg1;
- (void)setConfiguredStatItems:(id)arg1;
- (void)setOverrideStatFormatterItemOptions:(id)arg1;

@end
