
@protocol HKMCViewModelProviderDataSourceDelegate <NSObject>

@required

- (void)viewModelProviderDataSource:(id <HKMCViewModelProviderDataSource>)arg1 didFetchCycleFactors:(NSArray *)arg2 forDayIndexRange:(struct { long long x1; long long x2; })arg3;
- (void)viewModelProviderDataSource:(id <HKMCViewModelProviderDataSource>)arg1 didFetchDaySummaries:(NSArray *)arg2 forDayIndexRange:(struct { long long x1; long long x2; })arg3 daySummaryAnchor:(NSNumber *)arg4;
- (void)viewModelProviderDataSourceDidUpdateCycleFactors:(id <HKMCViewModelProviderDataSource>)arg1;
- (void)viewModelProviderDataSourceDidUpdateDaySummaries:(id <HKMCViewModelProviderDataSource>)arg1;

@end
