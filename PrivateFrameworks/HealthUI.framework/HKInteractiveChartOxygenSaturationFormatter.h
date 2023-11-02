
@interface HKInteractiveChartOxygenSaturationFormatter : HKInteractiveChartGenericStatFormatter {
    long long  _airPressureStatisticsType;
}

@property (nonatomic) long long airPressureStatisticsType;

- (long long)airPressureStatisticsType;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)initWithStatisticsType:(long long)arg1;
- (void)setAirPressureStatisticsType:(long long)arg1;

@end
