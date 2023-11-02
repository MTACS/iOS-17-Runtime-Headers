
@interface PLThumbnailIndexes : NSObject {
    unsigned long long  _fetchTimestamp;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableIndexSet * _unusedIndexes;
    long long  _usedMax;
}

+ (void)getAvailableThumbnailIndexInLibrary:(id)arg1 withHandler:(id /* block */)arg2;
+ (void)getAvailableThumbnailIndexesInLibrary:(id)arg1 withCount:(unsigned long long)arg2 handler:(id /* block */)arg3;
+ (unsigned long long)nextAvailableThumbnailIndexInLibrary:(id)arg1;
+ (id)occupiedThumbnailIndexesWithLibrary:(id)arg1 fetchTimestampToUpdate:(unsigned long long*)arg2;
+ (id)occupiedThumbnailIndexesWithLibrary:(id)arg1 fetchTimestampToUpdate:(unsigned long long*)arg2 outFetchCount:(unsigned long long*)arg3;
+ (void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2;
+ (void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2 timestamp:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)getAvailableThumbnailIndexesFromLibrary:(id)arg1;
- (id)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2;
- (void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2 handler:(id /* block */)arg3;
- (id)init;
- (void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2;

@end
