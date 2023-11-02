
@interface AEChatKitTransport : AEPackageTransport <AEPhotosAssetPackageFinalizer> {
    NSMutableDictionary * __alternateURLsByIdentifier;
    NSObject<OS_dispatch_group> * __packagePreparationGroup;
    NSMutableDictionary * __primaryURLsByIdentifier;
    NSObject<OS_dispatch_queue> * __urlSidetableIsolationQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *_alternateURLsByIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *_packagePreparationGroup;
@property (nonatomic, readonly) NSMutableDictionary *_primaryURLsByIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_urlSidetableIsolationQueue;
@property (nonatomic) <AEChatKitTransportDelegate> *delegate;

- (void).cxx_destruct;
- (id)_alternateURLsByIdentifier;
- (void)_beginStagingWorkForPackage:(id)arg1;
- (id)_chatkitPackageForIdentifer:(id)arg1;
- (void)_evictPersistedURLs:(id)arg1;
- (void)_evictPersistedURLsForPackageIdentifier:(id)arg1 evictFiles:(bool)arg2;
- (id)_packagePreparationGroup;
- (id)_persistedURLsFromURLs:(id)arg1 inBaseDirectory:(id)arg2 outError:(out id*)arg3;
- (id)_preparePackageForCommit:(id)arg1 inBaseDirectory:(id)arg2 outError:(out id*)arg3;
- (id)_primaryURLsByIdentifier;
- (void)_stagePackage:(id)arg1 initiateStagingWork:(bool)arg2;
- (void)_unstagePackagesWithIdentifiers:(id)arg1 evictFiles:(bool)arg2;
- (void)_updatePrimaryURLsForPackageIdentifier:(id)arg1 urls:(id)arg2;
- (id)_urlSidetableIsolationQueue;
- (id)_workQueue;
- (void)commitPackage:(id)arg1;
- (id)finalizePackage:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)orderedStagedPayloads;
- (void)stagePackage:(id)arg1;
- (void)stagePackages:(id)arg1;
- (void)stagePersistedPayloads:(id)arg1;
- (void)unstagePackageWithIdentifier:(id)arg1 andNotify:(bool)arg2;
- (void)unstagePackagesWithIdentifiers:(id)arg1;
- (void)unstagePackagesWithIdentifiers:(id)arg1 evictFiles:(bool)arg2;

@end
