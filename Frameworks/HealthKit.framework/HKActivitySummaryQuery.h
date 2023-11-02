
@interface HKActivitySummaryQuery : HKQuery <HKActivitySummaryQueryClientInterface> {
    id /* block */  _completionHandler;
    bool  _initialHandlerCalled;
    unsigned long long  _limit;
    bool  _orderByDateAscending;
    NSMutableArray * _pendingActivitySummaries;
    bool  _shouldIncludeActivitySummaryPrivateProperties;
    bool  _shouldIncludeActivitySummaryStatistics;
    id /* block */  _updateHandler;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) bool orderByDateAscending;
@property (nonatomic) bool shouldIncludeActivitySummaryPrivateProperties;
@property (nonatomic) bool shouldIncludeActivitySummaryStatistics;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverActivitySummaries:(id)arg1 isFinalBatch:(bool)arg2 clearPendingBatches:(bool)arg3 queryUUID:(id)arg4;
- (id /* block */)completionHandler;
- (id)initWithPredicate:(id)arg1 resultsHandler:(id /* block */)arg2;
- (unsigned long long)limit;
- (bool)orderByDateAscending;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setLimit:(unsigned long long)arg1;
- (void)setOrderByDateAscending:(bool)arg1;
- (void)setShouldIncludeActivitySummaryPrivateProperties:(bool)arg1;
- (void)setShouldIncludeActivitySummaryStatistics:(bool)arg1;
- (void)setShouldIncludePrivateActivitySummaryProperties:(bool)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (bool)shouldIncludeActivitySummaryPrivateProperties;
- (bool)shouldIncludeActivitySummaryStatistics;
- (id /* block */)updateHandler;

@end
