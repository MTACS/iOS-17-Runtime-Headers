
@interface HDConceptStoreTaskServer : HDStandardTaskServer <HDConceptIndexManagerObserver, HKConceptStoreServerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2;
- (void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_currentIndexingState:(id /* block */)arg1;
- (void)remote_queryConceptByIdentifier:(id)arg1 loadRelationships:(bool)arg2 completion:(id /* block */)arg3;
- (void)remote_queryCountOfConceptsAssociatedToUserRecordsWithCompletion:(id /* block */)arg1;
- (void)remote_queryRelationshipsForNodeWithID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_startObservingConceptIndexManagerWithCompletion:(id /* block */)arg1;

@end
