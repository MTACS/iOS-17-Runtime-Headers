
@interface HKUserDomainConceptQuery : HKQuery <HKUserDomainConceptQueryClientInterface> {
    HKQueryAnchor * _anchor;
    id /* block */  _batchHandler;
    unsigned long long  _limit;
    NSArray * _sortDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateResultsWithHandler:(id)arg1 handler:(id /* block */)arg2;
- (void)client_deliverResults:(id)arg1 queryUUID:(id)arg2;
- (id)initWithPredicate:(id)arg1 anchor:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 batchHandler:(id /* block */)arg5;
- (id)initWithPredicate:(id)arg1 anchor:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(id /* block */)arg5;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;

@end
