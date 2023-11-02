
@protocol HKQuantitySeriesDataProviderDelegate <NSObject>

@optional

- (void)reloadSampleData;
- (void)sampleDidChange:(HKQuantitySample *)arg1;

@end
