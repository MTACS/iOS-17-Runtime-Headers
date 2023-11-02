
@interface PHBatchFetchingArray : NSArray <NSCacheDelegate> {
    unsigned long long  _batchSize;
    NSCache * _cache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    unsigned long long  _count;
    <PHBatchFetchingArrayDataSource> * _dataSource;
    NSArray * _lastBatch;
    unsigned long long  _lastBatchIndex;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lastBatchLock;
    NSArray * _oids;
    NSSet * _oidsSet;
    PHBatchFetchingArrayFetchedClass * _overridenFetchResultClass;
    unsigned long long  _propertyHint;
    NSMutableDictionary * _uuidsByOIDs;
    NSObject<OS_dispatch_queue> * _uuidsQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *oids;
@property (readonly) NSSet *oidsSet;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

+ (bool)accessInstanceVariablesDirectly;

- (void).cxx_destruct;
- (id)_batchForBatchNumber:(unsigned long long)arg1 shouldUpdateLastBatch:(bool)arg2;
- (id)_fetchObjectsInBatchNumber:(unsigned long long)arg1;
- (id)_phObjectAtIndex:(unsigned long long)arg1;
- (id)_phObjectsForOIDs:(id)arg1;
- (unsigned long long)_populateObjectBuffer:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_prepareObjectsByOIDsFromOIDsToFetch:(id)arg1 andUpdateUUIDsByOIDsForRestrictedObjectsUsingFetchedObjects:(id)arg2;
- (void)_rememberUUIDsForBatch:(id)arg1;
- (bool)_shouldRetrieveRestrictedAssetOIDsWithSample:(id)arg1;
- (unsigned long long)batchSize;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 dataSource:(id)arg3;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;
- (id)initWithObjects:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)oids;
- (id)oidsSet;
- (id)photoLibrary;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)test_evictBatchNumber:(long long)arg1;
- (void)test_invalidateUUIDCache;
- (unsigned long long)test_lastBatchIndex;

@end
