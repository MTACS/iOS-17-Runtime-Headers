
@interface HDSharedSummaryTransactionBuilderServer : HDStandardTaskServer <HKSharedSummaryTransactionBuilderServerInterface> {
    bool  _committed;
    HKSharedSummaryTransactionBuilderTaskConfiguration * _configuration;
    HDSharedSummaryTransactionEntity * _transactionEntity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_addSummaries:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_addedSummariesWithPackage:(id)arg1 names:(id)arg2 resultsHandler:(id /* block */)arg3;
- (void)remote_commitAsUrgent:(bool)arg1 completion:(id /* block */)arg2;
- (void)remote_discardWithCompletion:(id /* block */)arg1;
- (void)remote_getCommitStatusWithCompletion:(id /* block */)arg1;
- (void)remote_removeAllSummariesWithPackage:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_removeSummariesWithPackage:(id)arg1 names:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_removeSummariesWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_reuseAllSummariesWithPackage:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_reuseSummariesWithPackage:(id)arg1 names:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_reuseSummariesWithUUIDs:(id)arg1 completion:(id /* block */)arg2;

@end
