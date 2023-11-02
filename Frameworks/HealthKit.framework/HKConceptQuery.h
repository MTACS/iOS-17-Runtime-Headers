
@interface HKConceptQuery : HKQuery <HKConceptQueryClientInterface> {
    id /* block */  _handler;
    HKConceptSelection * _selection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateConceptsWithHandler:(id)arg1 handler:(id /* block */)arg2;
- (void)client_deliverConcepts:(id)arg1 queryUUID:(id)arg2;
- (id)initWithConceptSelection:(id)arg1 resultsHandler:(id /* block */)arg2;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;

@end
