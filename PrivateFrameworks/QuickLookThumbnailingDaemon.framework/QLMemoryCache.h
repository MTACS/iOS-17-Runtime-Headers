
@interface QLMemoryCache : NSObject {
    bool  _cacheEnabled;
    _QLCacheThread * _cacheThread;
    NSLock * _memoryLock;
    unsigned long long  _memoryUsed;
    NSObject<OS_os_transaction> * _pendingSavesTransaction;
    NSMutableDictionary * _thumbnailData;
    NSMutableArray * _thumbnailDataToSave;
}

@property _QLCacheThread *cacheThread;
@property unsigned long long memoryUsed;

- (void).cxx_destruct;
- (void)_getReadLock;
- (void)_getWriteLock;
- (void)_invalidateThumbnailData:(id)arg1;
- (void)_releaseReadLock;
- (void)_releaseWriteLock;
- (bool)addThumbnailData:(id)arg1;
- (id)cacheThread;
- (bool)hasThumbnailDataToSave;
- (id)initWithCacheThread:(id)arg1;
- (unsigned long long)memoryUsed;
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithIdentifiers:(id)arg1;
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1;
- (void)reset;
- (bool)sendThumbnailDataForThumbnailRequest:(id)arg1 withCacheThread:(id)arg2;
- (void)setCacheThread:(id)arg1;
- (void)setMemoryUsed:(unsigned long long)arg1;
- (void)thumbnailDataBatchSaved:(id)arg1;
- (id)thumbnailDataToSaveWithBatch:(unsigned long long)arg1;
- (unsigned long long)thumbnailToSaveCount;

@end
