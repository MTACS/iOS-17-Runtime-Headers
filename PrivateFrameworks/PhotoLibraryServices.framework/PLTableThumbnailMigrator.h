
@interface PLTableThumbnailMigrator : NSObject {
    NSMutableSet * _pendingAssetObjectIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingAssetObjectIDsLock;
}

+ (id)_fetchRequstForAssetsPendingTableRebuildWithLimit:(long long)arg1 excludingAssetIDs:(id)arg2;
+ (id)_nextBatchOfItemsPendingTableRebuildInLibrary:(id)arg1 excludingAssetIDs:(id)arg2 sourceObjects:(id*)arg3;
+ (id)_predicateForAssetsPendingTableRebuild;
+ (id)_workItemForAsset:(id)arg1 library:(id)arg2 thumbnailManager:(id)arg3;
+ (bool)_writeCompressedTableThumbsFromMasterThumb:(struct CGImageSource { }*)arg1 uuid:(id)arg2 formats:(id)arg3 toIndex:(unsigned long long)arg4 thumbnailManager:(id)arg5;
+ (unsigned long long)countOfAssetsPendingTableThumbRebuildInLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)_bulkMigratorQueue;
- (void)_rebuildTablesForBatch:(id)arg1 inLibrary:(id)arg2 toFormats:(id)arg3;
- (id)init;
- (void)migrateAllAssetsPendingTableThumbRebuildInLibrary:(id)arg1 toTableFormats:(id)arg2 limit:(unsigned long long)arg3;
- (void)rebuildTableThumbForAsset:(id)arg1 inLibrary:(id)arg2 toTableFormats:(id)arg3;

@end
