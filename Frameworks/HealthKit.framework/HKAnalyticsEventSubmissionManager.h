
@interface HKAnalyticsEventSubmissionManager : NSObject {
    id /* block */  _analyticsEventConsumer;
    HKAnalyticsDataSource * _dataSource;
    id /* block */  _eventUsedProvider;
    NSObject<OS_os_log> * _loggingCategory;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)initWithDataSource:(id)arg1 eventUsedProvider:(id /* block */)arg2 analyticsEventConsumer:(id /* block */)arg3 loggingCategory:(id)arg4;
- (id)initWithLoggingCategory:(id)arg1 healthDataSource:(id)arg2;
- (id)queue;
- (void)submitEvent:(id)arg1 completion:(id /* block */)arg2;
- (bool)submitEvent:(id)arg1 error:(id*)arg2;

@end
