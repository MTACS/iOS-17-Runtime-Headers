
@interface HKUserTrackedConceptQuery : HKQuery <HKUserTrackedConceptQueryClientInterface> {
    id /* block */  _handler;
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
- (void)_enumerateUserTrackedConceptsWithHandler:(id)arg1 handler:(id /* block */)arg2;
- (void)client_deliverUserTrackedConcepts:(id)arg1 queryUUID:(id)arg2;
- (id)initWithUserTrackedConceptType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 resultsHandler:(id /* block */)arg4;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;

@end
