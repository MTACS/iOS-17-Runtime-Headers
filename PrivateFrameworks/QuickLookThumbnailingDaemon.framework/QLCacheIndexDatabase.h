
@interface QLCacheIndexDatabase : NSObject {
    QLSqliteDatabase * _database;
    NSString * _databasePath;
    FPItemManager * _itemManager;
    unsigned long long  _maxThumbnailLifeTime;
}

@property (readonly) QLSqliteDatabase *database;
@property (readonly) unsigned long long fileEntryCount;
@property (retain) FPItemManager *itemManager;
@property (readonly) unsigned long long maxThumbnailLifeTime;
@property (readonly) unsigned long long reserveBufferCount;
@property (readonly) unsigned long long reserveBufferSize;
@property (readonly) unsigned long long thumbnailCount;

- (void).cxx_destruct;
- (unsigned long long)_cacheIdForFileIdentifier:(id)arg1 createVersion:(id*)arg2;
- (void)_createTables;
- (void)_deleteAllTables;
- (id)_removeThumbnailsFromStatement:(struct sqlite3_stmt { }*)arg1;
- (bool)add:(unsigned long long)arg1 blobInfosStartingAtColumn:(unsigned long long)arg2 ofSteppedStatement:(struct sqlite3_stmt { }*)arg3 toArray:(id)arg4;
- (void)addReservedBufferWithBlobInfo:(id)arg1;
- (id)allBuffersIncludingReserved:(bool)arg1;
- (id)allReservedBuffers;
- (id)batchOfFileProviderItemsStartingAtRowId:(unsigned long long)arg1 endingAtRowId:(unsigned long long*)arg2;
- (id)batchOfRegularItemsStartingAtRowId:(unsigned long long)arg1 endingAtRowId:(unsigned long long*)arg2;
- (bool)beginTransaction;
- (void)checkpoint;
- (void)close;
- (id)database;
- (void)do:(id /* block */)arg1;
- (bool)doesExist;
- (void)endTransaction;
- (id)enumeratorForAllUbiquitousFiles:(bool)arg1 withExtraInfo:(bool)arg2;
- (unsigned long long)fileEntryCount;
- (bool)getBlobInfoForCacheId:(unsigned long long)arg1 size:(float)arg2 iconMode:(unsigned char)arg3 badgeType:(unsigned long long)arg4 iconVariant:(long long)arg5 interpolationQuality:(int)arg6 externalGeneratorDataHash:(unsigned long long)arg7 bitmapDataBlobInfo:(id*)arg8 plistBufferBlobInfo:(id*)arg9;
- (id)initWithPath:(id)arg1;
- (bool)insertOrUpdateImageDataForCacheId:(unsigned long long)arg1 size:(float)arg2 iconMode:(unsigned char)arg3 badgeType:(unsigned long long)arg4 iconVariant:(long long)arg5 interpolationQuality:(int)arg6 bitmapFormat:(id)arg7 bitmapDataBlobInfo:(id)arg8 metadataBlobInfo:(id)arg9 flavor:(int)arg10 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg11 externalGeneratorDataHash:(unsigned long long)arg12 lastHitDate:(id)arg13;
- (unsigned long long)insertOrUpdateThumbnailWithVersionedFileIdentifier:(id)arg1 shouldInvalidAllThumbnailSizes:(bool*)arg2 added:(bool*)arg3;
- (bool)isValid;
- (bool)itemIsMissingRemoteThumbnail:(id)arg1;
- (id)itemManager;
- (id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)arg1;
- (id)itemsGroupedByProviderDomain:(id)arg1;
- (id)lastCrapWithDate:(id*)arg1;
- (unsigned long long)maxThumbnailLifeTime;
- (unsigned long long)missingRemoteThumbnailsCountForFileProviderIds:(id)arg1;
- (void)noteRemoteThumbnailMissingForItems:(id)arg1;
- (void)noteRemoteThumbnailPresentForItems:(id)arg1;
- (void)open;
- (id)queryCacheForFileRequests:(id)arg1;
- (id)removeAllThumbnailsForCacheId:(unsigned long long)arg1;
- (void)removeBasicFilesWithRowids:(id)arg1;
- (id)removeFilesFromUninstalledFileProvidersWithIdentifiers:(id)arg1;
- (id)removeFilesFromUninstalledFileProvidersWithIdentifiers:(id)arg1 whichAreRemaining:(bool)arg2;
- (id)removeFilesFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1;
- (id)removeFilesWithFileInfo:(id)arg1;
- (id)removeOldThumbnails;
- (id)removePercentageOldestThumbnails:(unsigned long long)arg1;
- (bool)removeReservedBufferWithBlobInfo:(id)arg1;
- (id)removeThumbnailForFileIdentifier:(id)arg1;
- (id)removeThumbnailsForDeletedFiles;
- (id)removeThumbnailsOlderThanDate:(id)arg1;
- (id)removeThumbnailsWithCacheIds:(id)arg1;
- (void)removeUbiquitousFilesWithRowids:(id)arg1;
- (unsigned long long)reserveBufferCount;
- (unsigned long long)reserveBufferSize;
- (void)reset;
- (void)save;
- (void)setItemManager:(id)arg1;
- (bool)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg1;
- (unsigned long long)sizeSumOfThumbnailsOlderThanDate:(id)arg1;
- (unsigned long long)thumbnailCount;
- (void)updateHitCount:(id)arg1 forFileIdentifier:(id)arg2;

@end
