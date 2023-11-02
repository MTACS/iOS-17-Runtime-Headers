
@protocol HKDateRangeDataSourceDelegate

@required

- (NSArray *)dataForDateRange:(HKValueRange *)arg1 timeScope:(long long)arg2;
- (void)setUpdateDelegate:(id <HKDateRangeDataUpdateDelegate>)arg1;

@end
