
@interface HKChartQueryDataGenerationOperation : HKChartCacheFetchOperation {
    id /* block */  _cancelHandler;
    id /* block */  _clientCompletion;
    HKHealthQueryChartCacheDataSource * _dataSource;
    NSDate * _endDate;
    id /* block */  _fetchOperationManager;
    HKHealthStore * _healthStore;
    NSDate * _startDate;
    NSDateComponents * _statisticsInterval;
}

- (void).cxx_destruct;
- (void)completedWithResults:(id)arg1 error:(id)arg2;
- (id)initWithHealthStore:(id)arg1 dataSource:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 statisticsInterval:(id)arg5 operationDescription:(id)arg6 completion:(id /* block */)arg7;
- (void)startOperationWithCompletion:(id /* block */)arg1;
- (void)stopOperation;

@end
