
@interface _ActivityRemoteDataGatherer : NSObject <HKActivitySummaryDataProviderObserver> {
    HKActivitySummaryDataProvider * _activitySummaryProvider;
    id /* block */  _completion;
    NSArray * _monthActivitySummaries;
    NSDateInterval * _monthDateInterval;
    NSArray * _sixMonthActivitySummaries;
    NSDateInterval * _sixMonthDateInterval;
}

@property (nonatomic, retain) HKActivitySummaryDataProvider *activitySummaryProvider;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *monthActivitySummaries;
@property (nonatomic, retain) NSDateInterval *monthDateInterval;
@property (nonatomic, retain) NSArray *sixMonthActivitySummaries;
@property (nonatomic, retain) NSDateInterval *sixMonthDateInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_chartDataSourceQueryDataFromSummaries:(id)arg1;
- (id)_dateRangeFromInterval:(id)arg1;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1;
- (id)activitySummaryProvider;
- (id /* block */)completion;
- (void)dealloc;
- (void)gatherData;
- (id)initWithActivitySummaryDataProvider:(id)arg1 monthDateInterval:(id)arg2 sixMonthDateInterval:(id)arg3 completion:(id /* block */)arg4;
- (id)monthActivitySummaries;
- (id)monthDateInterval;
- (void)setActivitySummaryProvider:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setMonthActivitySummaries:(id)arg1;
- (void)setMonthDateInterval:(id)arg1;
- (void)setSixMonthActivitySummaries:(id)arg1;
- (void)setSixMonthDateInterval:(id)arg1;
- (id)sixMonthActivitySummaries;
- (id)sixMonthDateInterval;

@end
