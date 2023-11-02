
@interface QLCacheCleanUpDatabaseThread : NSObject {
    _QLCacheThread * _cacheThread;
    int  _currentMode;
    bool  _diskCacheCleanupDone;
    bool  _shouldRemoveThumbnailsForDeletedFiles;
    NSThread * _thread;
    NSConditionLock * _threadLock;
    struct __CFRunLoop { } * _threadRunLoop;
    NSMutableDictionary * _thumbnailsHit;
}

@property (retain) _QLCacheThread *cacheThread;
@property (nonatomic, readonly) int currentMode;
@property bool diskCacheCleanupDone;
@property (nonatomic, readonly) unsigned long long hitToSaveCount;
@property (nonatomic) bool shouldRemoveThumbnailsForDeletedFiles;
@property (retain) NSMutableDictionary *thumbnailsHit;

- (void).cxx_destruct;
- (void)_stopWriteAndCleanUpThreadRunLoop;
- (void)_threadMain;
- (bool)_updateHitCount;
- (void)_writeAndCleanUp;
- (void)addHitWithThumbnailData:(id)arg1;
- (id)cacheThread;
- (void)cleanUpForReset;
- (int)currentMode;
- (void)dealloc;
- (bool)diskCacheCleanupDone;
- (unsigned long long)hitToSaveCount;
- (id)initWithCacheThread:(id)arg1;
- (void)pause;
- (void)setCacheThread:(id)arg1;
- (void)setDiskCacheCleanupDone:(bool)arg1;
- (void)setShouldRemoveThumbnailsForDeletedFiles:(bool)arg1;
- (void)setThumbnailsHit:(id)arg1;
- (bool)shouldRemoveThumbnailsForDeletedFiles;
- (void)startCleanUp;
- (void)stop;
- (id)thumbnailsHit;

@end
