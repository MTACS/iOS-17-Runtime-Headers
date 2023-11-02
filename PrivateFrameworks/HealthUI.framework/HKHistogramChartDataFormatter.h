
@interface HKHistogramChartDataFormatter : HKInteractiveChartDataFormatter {
    HKUnit * _unit;
}

@property (nonatomic, readonly) HKUnit *unit;

- (void).cxx_destruct;
- (id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(bool)arg3;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)initWithUnit:(id)arg1;
- (id)unit;

@end
