
@interface HKInteractiveChartNumberFormatter : HKInteractiveChartDataFormatter {
    NSString * _unitFormatString;
}

@property (nonatomic, copy) NSString *unitFormatString;

- (void).cxx_destruct;
- (id)_formattedStringWithValue:(id)arg1 formatter:(id)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)init;
- (void)setUnitFormatString:(id)arg1;
- (id)unitFormatString;

@end
