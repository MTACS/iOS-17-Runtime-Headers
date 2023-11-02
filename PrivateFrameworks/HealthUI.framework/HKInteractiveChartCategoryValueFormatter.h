
@interface HKInteractiveChartCategoryValueFormatter : HKInteractiveChartDataFormatter {
    NSString * _localizedCategoryName;
}

@property (nonatomic, retain) NSString *localizedCategoryName;

- (void).cxx_destruct;
- (id)_formattedStringWithCount:(long long)arg1;
- (id)_formattedStringWithText:(id)arg1;
- (id)_formattedStringWithValue:(long long)arg1 useColorAttributes:(bool)arg2;
- (id)_uniqueChartPoints:(id)arg1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)initWithLocalizedCategoryName:(id)arg1;
- (id)localizedCategoryName;
- (void)setLocalizedCategoryName:(id)arg1;

@end
