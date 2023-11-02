
@interface HKCurrentActivityCacheQuery : HKQuery <HKCurrentActivityCacheQueryClientInterface> {
    NSDateComponents * _statisticsIntervalComponents;
    id /* block */  _updateHandler;
}

@property (nonatomic, copy) id /* block */ updateHandler;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverQueryResult:(id)arg1 queryUUID:(id)arg2;
- (id)initWithStatisticsIntervalComponents:(id)arg1 updateHandler:(id /* block */)arg2;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
