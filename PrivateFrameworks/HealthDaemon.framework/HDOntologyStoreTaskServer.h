
@interface HDOntologyStoreTaskServer : HDStandardTaskServer <HDOntologyShardDownloaderObserver, HDOntologyShardImporterObserver, HKOntologyStoreServerInterface>

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (void)ontologyShardDownloader:(id)arg1 didStageEntry:(id)arg2;
- (void)ontologyShardImporter:(id)arg1 didImportEntry:(id)arg2;
- (id)remoteInterface;
- (void)remote_downloadRequiredShardsWithCompletion:(id /* block */)arg1;
- (void)remote_importRequiredShardsWithCompletion:(id /* block */)arg1;
- (void)remote_insertEntries:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_markShardsWithIdentifiers:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)remote_observeOntologyStoreChanges:(bool)arg1 completion:(id /* block */)arg2;
- (void)remote_ontologyServerURLWithCompletion:(id /* block */)arg1;
- (void)remote_ontologyShardRegistryEntriesWithCompletion:(id /* block */)arg1;
- (void)remote_pruneOntologyWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)remote_requestGatedOntologyUpdateWithCompletion:(id /* block */)arg1;
- (void)remote_setOntologyServerURL:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_shardRequirementStatusesWithCompletion:(id /* block */)arg1;
- (void)remote_updateOntologyForReason:(long long)arg1 completion:(id /* block */)arg2;
- (void)remote_updateShardRegistryWithCompletion:(id /* block */)arg1;

@end
