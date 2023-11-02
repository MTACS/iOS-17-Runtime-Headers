
@interface HKObserverQuery : HKQuery <HKObserverQueryClientInterface> {
    bool  _observeUnfrozenSeries;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool observeUnfrozenSeries;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ updateHandler;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)_validateAndRaiseExceptionIfNeeded:(id)arg1;
- (void)client_dataUpdatedInDatabaseForTypes:(id)arg1 withAnchor:(id)arg2 query:(id)arg3;
- (id)initWithQueryDescriptors:(id)arg1 updateHandler:(id /* block */)arg2;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 updateHandler:(id /* block */)arg3;
- (bool)observeUnfrozenSeries;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setObserveUnfrozenSeries:(bool)arg1;
- (id /* block */)updateHandler;

@end
