
@interface HKVerifiableClinicalRecordQuery : HKQuery <HKVerifiableClinicalRecordQueryClientInterface> {
    NSArray * _recordTypes;
    id /* block */  _resultsHandler;
    NSArray * _sourceTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *recordTypes;
@property (readonly, copy) NSArray *sourceTypes;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverVerifiableClinicalRecords:(id)arg1 queryUUID:(id)arg2;
- (id)initWithRecordTypes:(id)arg1 predicate:(id)arg2 resultsHandler:(id /* block */)arg3;
- (id)initWithRecordTypes:(id)arg1 sourceTypes:(id)arg2 predicate:(id)arg3 resultsHandler:(id /* block */)arg4;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (id)recordTypes;
- (id)sourceTypes;

@end
