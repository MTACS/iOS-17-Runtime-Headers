
@interface HKSharedSummaryQuery : HKQuery <HKSharedSummaryQueryClientInterface> {
    NSSet * _includedIdentifiers;
    NSSet * _includedObjectTypes;
    NSString * _package;
    id /* block */  _resultsHandler;
    HKSharedSummaryTransaction * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverSummaries:(id)arg1 query:(id)arg2;
- (id)initWithTransaction:(id)arg1 package:(id)arg2 includedIdentifiers:(id)arg3 includedObjectTypes:(id)arg4 resultsHandler:(id /* block */)arg5;
- (id)initWithTransaction:(id)arg1 package:(id)arg2 resultsHandler:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;

@end
