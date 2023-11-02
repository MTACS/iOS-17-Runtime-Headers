
@interface HDOntologyShardRegistry : NSObject <HDAssertionObserver> {
    NSMutableDictionary * _cachedFileHandles;
    HDAssertionManager * _cachedFileHandlesAssertionManager;
    NSObject<OS_dispatch_queue> * _cachedFileHandlesAssertionQueue;
    NSURL * _stagingDirectoryURL;
    HDOntologyUpdateCoordinator * _updateCoordinator;
}

@property (nonatomic, readonly) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDOntologyUpdateCoordinator *updateCoordinator;

+ (id)importedMercuryZipTSVEntriesWithTransaction:(id)arg1 error:(id*)arg2;
+ (bool)insertEntry:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)nextAvailableMercuryZipTSVSlotWithTransaction:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (bool)copyToStagingDirectoryFileWithLocalURL:(id)arg1 entry:(id)arg2 error:(id*)arg3;
- (id)daemon;
- (void)dealloc;
- (bool)deleteStagedFilesNotMatchingEntries:(id)arg1 error:(id*)arg2;
- (bool)deleteStagedShardFileForEntry:(id)arg1 error:(id*)arg2;
- (id)entriesWithPredicate:(id)arg1 orderingTerms:(id)arg2 error:(id*)arg3;
- (bool)entryWithIdentifier:(id)arg1 schemaType:(id)arg2 schemaVersion:(long long)arg3 entryOut:(id*)arg4 transaction:(id)arg5 error:(id*)arg6;
- (bool)enumerateEntriesWithPredicate:(id)arg1 orderingTerms:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)arg1;
- (bool)insertEntries:(id)arg1 error:(id*)arg2;
- (bool)insertEntry:(id)arg1 error:(id*)arg2;
- (bool)moveStagedShardFileForEntry:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)openShardFileForEntry:(id)arg1 error:(id*)arg2;
- (long long)purgeSpaceForStagedShards;
- (long long)purgeableSpaceForStagedShards;
- (bool)stageShardFileWithLocalURL:(id)arg1 entry:(id)arg2 error:(id*)arg3;
- (id)stagedShardFileEntriesWithError:(id*)arg1;
- (bool)stagedShardFileEntryForEntry:(id)arg1 entryOut:(id*)arg2 error:(id*)arg3;
- (id)takeFileHandleAssertionForOwnerIdentifier:(id)arg1 error:(id*)arg2;
- (id)unitTesting_cachedFileHandles;
- (bool)unitTesting_stageFileWithLocalURL:(id)arg1 error:(id*)arg2;
- (id)unitTesting_stagedShardFileFullPathForEntry:(id)arg1;
- (id)unitTesting_stagedShardFileNamesWithError:(id*)arg1;
- (bool)unzipStagedShardFileForEntry:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)updateCoordinator;

@end
