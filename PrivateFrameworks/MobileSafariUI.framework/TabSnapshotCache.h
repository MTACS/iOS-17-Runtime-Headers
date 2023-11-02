
@interface TabSnapshotCache : NSObject <TabSnapshotCacheEntryStateObserving> {
    unsigned long long  _currentlyRequestedSnapshotCount;
    <TabSnapshotCacheDelegate> * _delegate;
    NSMapTable * _delegateToContextMap;
    NSObject<OS_dispatch_queue> * _fileSystemAccessQueue;
    NSMutableDictionary * _groupIdentifiers;
    NSMutableSet * _identifiersPendingUpdate;
    bool  _needsRequestNextSnapshot;
    NSHashTable * _snapshotCacheObservers;
    NSMutableDictionary * _snapshots;
    NSURL * _thumbnailCacheDirectoryURL;
    bool  _updating;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TabSnapshotCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFinishedUpdating, nonatomic, readonly) bool finishedUpdating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultSnapshotCache;
+ (void)initialize;
+ (void)removeSavedSnapshotsKeepingSnapshotsWithIdentifiers:(id)arg1;
+ (bool)supportsASTC;

- (void).cxx_destruct;
- (id)_URLForSnapshotWithIdentifier:(id)arg1 isKTX:(bool)arg2 effectsVersion:(long long)arg3;
- (id)_allIdentifiersToCache;
- (void)_beginUpdatingStateForIdentifier:(id)arg1;
- (void)_calculateFitsInCache;
- (id)_contextForDelegate:(id)arg1;
- (void)_determineInitialStateForIdentifier:(id)arg1;
- (id)_entryForIdentifier:(id)arg1;
- (id)_entryForIdentifier:(id)arg1 createIfNeeded:(bool)arg2;
- (void)_enumerateDelegatesAndIdentifiersForEntry:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumeratePossibleURLsForSnapshotWithIdentifier:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_existingURLForSnapshotWithIdentifier:(id)arg1 effectsVersion:(long long*)arg2;
- (void)_finishUpdatingToState:(long long)arg1 cachedSnapshot:(id)arg2 forEntry:(id)arg3;
- (void)_finishUpdatingToState:(long long)arg1 forEntry:(id)arg2;
- (id)_preferredURLForSnapshotWithIdentifier:(id)arg1;
- (id)_readSnapshotImageForIdentifier:(id)arg1;
- (void)_requestNextSnapshotIfNecessaryForDelegate:(id)arg1;
- (void)_requestSavedSnapshotForIdentifier:(id)arg1;
- (void)_saveSnapshotForIdentifier:(id)arg1;
- (void)_sendDidFinishUpdatingToDelegateIfNeeded;
- (id)_writeSnapshotImage:(struct CGImage { }*)arg1 withIdentifier:(id)arg2;
- (void)addIdentifier:(id)arg1 toGroupWithIdentifier:(id)arg2;
- (void)addSnapshotCacheObserver:(id)arg1;
- (id)debugDescription;
- (id)delegate;
- (bool)hasValidSnapshotWithIdentifier:(id)arg1;
- (id)identifiersToCacheForDelegate:(id)arg1;
- (id)init;
- (id)initWithThumbnailCacheDirectoryURL:(id)arg1;
- (void)invalidateSnapshotWithIdentifier:(id)arg1;
- (bool)isFinishedUpdating;
- (bool)isIdentifier:(id)arg1 memberOfSameGroupAsIdentifier:(id)arg2;
- (void)performBatchUpdatesWithBlock:(id /* block */)arg1;
- (void)removeIdentifier:(id)arg1 fromGroupWithIdentifier:(id)arg2;
- (void)removeSnapshotCacheObserver:(id)arg1;
- (void)removeSnapshotWithIdentifier:(id)arg1;
- (void)requestNextSnapshotIfNecessary;
- (void)setCapacity:(unsigned long long)arg1 forDelegate:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIdentifiersToCache:(id)arg1 forDelegate:(id)arg2;
- (void)setUpdating:(bool)arg1 forDelegate:(id)arg2;
- (id)snapshotWithIdentifier:(id)arg1;
- (void)tabSnapshotCacheEntryDidUpdateState:(id)arg1;

@end
