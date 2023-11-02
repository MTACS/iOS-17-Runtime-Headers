
@interface ACHCurrentActivitySummaryQuery : HKQuery <ACHCurrentActivitySummaryClientInterface> {
    NSDictionary * _collectionIntervals;
    id /* block */  _updateHandler;
}

@property (nonatomic, retain) NSDictionary *collectionIntervals;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void).cxx_destruct;
- (void)_setCollectionIntervals:(id)arg1;
- (void)client_deliverTodaySummary:(id)arg1 changedTodayFields:(unsigned long long)arg2 yesterdaySummary:(id)arg3 changedYesterdayFields:(unsigned long long)arg4 queryUUID:(id)arg5;
- (id)collectionIntervals;
- (id)initWithUpdateHandler:(id /* block */)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setCollectionIntervals:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
