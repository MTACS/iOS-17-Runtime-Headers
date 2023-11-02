
@interface _HKActivityStatisticsQuery : HKQuery <HKActivityStatisticsQueryClientInterface> {
    bool  _deliveredInitial;
    NSDate * _endDate;
    NSDateComponents * _exerciseIntervalComponents;
    id /* block */  _initialQueryResultsHandler;
    NSDateComponents * _moveIntervalComponents;
    id /* block */  _queryUpdateHandler;
    NSDate * _startDate;
    double  _updateInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ initialQueryResultsHandler;
@property (nonatomic, copy) id /* block */ queryUpdateHandler;
@property (readonly) Class superclass;
@property (getter=_updateInterval, setter=_setUpdateInterval:, nonatomic) double updateInterval;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)_setUpdateInterval:(double)arg1;
- (double)_updateInterval;
- (void)_validateIntervalComponents:(id)arg1;
- (void)client_deliverResult:(id)arg1 query:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 moveIntervalComponents:(id)arg3 exerciseIntervalComponents:(id)arg4 initialQueryResultsHandler:(id /* block */)arg5;
- (id /* block */)initialQueryResultsHandler;
- (id /* block */)queryUpdateHandler;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setInitialQueryResultsHandler:(id /* block */)arg1;
- (void)setQueryUpdateHandler:(id /* block */)arg1;

@end
