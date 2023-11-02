
@protocol HKSleepDataSourceProvider

@required

- (HKHealthQueryChartCacheDataSource *)makeSleepDataSourceFromHealthStore:(HKHealthStore *)arg1 representativeDisplayType:(HKDisplayType *)arg2;
- (HKHealthQueryChartCacheDataSource *)makeSleepStagesDataSourceFromHealthStore:(HKHealthStore *)arg1 representativeDisplayType:(HKDisplayType *)arg2;

@end
