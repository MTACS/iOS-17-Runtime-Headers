
@protocol HKMCViewModelProviderDataSource <NSObject>

@required

- (void)cancelFetchForDaySummariesInDayIndexRange:(struct { long long x1; long long x2; })arg1;
- (<HKMCViewModelProviderDataSourceDelegate> *)delegate;
- (void)fetchCycleFactorsInDayIndexRange:(struct { long long x1; long long x2; })arg1;
- (void)fetchDaySummariesInDayIndexRange:(struct { long long x1; long long x2; })arg1;
- (void)setDelegate:(id <HKMCViewModelProviderDataSourceDelegate>)arg1;

@end
