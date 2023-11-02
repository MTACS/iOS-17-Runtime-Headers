
@interface HKSampleCountQuery : HKQuery <HKSampleCountQueryClientInterface> {
    id /* block */  _resultsHandler;
    id /* block */  _sampleTypeCountResultsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *sampleTypes;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverSampleCountDictionary:(id)arg1 forQuery:(id)arg2;
- (void)client_deliverSampleTypeCountDictionary:(id)arg1 forQuery:(id)arg2;
- (id)initWithQueryDescriptors:(id)arg1 resultsHandler:(id /* block */)arg2;
- (id)initWithResultsHandler:(id /* block */)arg1;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 resultsHandler:(id /* block */)arg3;
- (id)initWithSampleTypes:(id)arg1 predicate:(id)arg2 resultsHandler:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (id)sampleTypes;

@end
