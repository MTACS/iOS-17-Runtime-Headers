
@interface BRCDiskSpaceReclaimer : NSObject <BRCLowDiskDelegate> {
    bool  _computingPurgable;
    bool  _isClosed;
    br_pacer * _purgePacer;
    struct CacheDeleteToken { } * _purgeRequest;
    NSObject<OS_dispatch_queue> * _queue;
    BRCAccountSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (double)_onDiskAccessTimeDeltaForUrgency:(int)arg1;
+ (double)accessTimeDeltaForUrgency:(int)arg1;
+ (int)simpleUrgencyForCacheDeleteUrgency:(int)arg1;

- (void).cxx_destruct;
- (void)_asyncAutovacuumIfNeeds:(id)arg1;
- (long long)_computeCiconiaSizeInBytes:(bool)arg1;
- (long long)_dbAutovacuumableSpaceInBytes:(id)arg1;
- (long long)_dbSizeInBytes:(id)arg1;
- (long long)_doIncrementalVacuum:(id)arg1 amount:(long long)arg2;
- (void)_enumerateItemsForEvictSyncWithBlock:(id /* block */)arg1 withTimeDelta:(double)arg2 onDiskAccessTimeDelta:(double)arg3;
- (void)_enumerateItemsForEvictSyncWithBlock:(id /* block */)arg1 withUrgency:(int)arg2;
- (long long)_fullVacuumIfPossible:(id)arg1;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (unsigned long long)_recursivelySizeDirectoryAtPath:(id)arg1;
- (void)_requestPurgeSpace;
- (void)_setupPurgePacer;
- (void)_updateNonPurgeableCachedSizeByAddingBytes:(long long)arg1;
- (void)_updateNonPurgeableCachedSizeForDocument:(id)arg1;
- (long long)_vacuumDB:(id)arg1 amount:(long long)arg2 withUrgency:(int)arg3;
- (id)accessTimestampForDocument:(id)arg1;
- (long long)cachedNonPurgeableSpace;
- (long long)cachedPurgeableSpaceForUrgency:(int)arg1;
- (void)close;
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(id /* block */)arg1;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (void)didAccessDocument:(id)arg1;
- (bool)documentUpdateEvictability:(id)arg1;
- (bool)documentWasAccessedRecently:(id)arg1;
- (bool)documentWasCreated:(id)arg1;
- (bool)documentWasDeleted:(id)arg1;
- (bool)documentWasUpdated:(id)arg1 diffs:(unsigned long long)arg2;
- (id)initWithAccountSession:(id)arg1;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(bool)arg2;
- (unsigned long long)nonPurgeableSizeWithPurgeableSize:(unsigned long long)arg1;
- (bool)overwriteDocumentAccessTime:(id)arg1 atime:(unsigned long long)arg2;
- (bool)performOptimizeStorageWithTimeDelta:(double)arg1 onDiskAccessTimeDelta:(double)arg2 error:(id*)arg3;
- (long long)periodicReclaimSpace;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (id)queue;
- (bool)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;
- (bool)renameAndUnlinkInBackgroundItemAtRelpath:(id)arg1;
- (void)requestPurgeSpace;
- (unsigned long long)totalSize;
- (int)urgencyForCacheDeleteUrgency:(int)arg1;

@end
