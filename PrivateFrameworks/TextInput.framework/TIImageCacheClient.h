
@interface TIImageCacheClient : NSObject {
    NSCache * _cache;
    NSXPCConnection * _connection;
    bool  _hasLocalAccess;
    NSString * _imagePath;
    bool  _lockOnRead;
    NSString * _path;
    int  _remoteQueryCount;
    NSObject<OS_dispatch_queue> * _requestQueue;
    NSObject<OS_dispatch_queue> * _serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> * _serialQueueRemoveImagesDefault;
    bool  _shouldIdleWhenDone;
    NSObject<OS_dispatch_queue> * _storeImageQueue;
    NSString * _versionPath;
}

@property (nonatomic) unsigned long long cacheItemLimit;
@property (nonatomic, readonly) int cacheVersion;
@property (nonatomic) bool lockOnRead;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storeImageQueue;

- (void).cxx_destruct;
- (int)_cacheVersion;
- (void)_createConnectionIfNecessary;
- (void)_idleIfNecessary:(bool)arg1;
- (struct _img { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6[4]; })_imgForItem:(id)arg1;
- (void)_localStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3;
- (void)_remoteStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3;
- (void)_setCacheVersion:(int)arg1;
- (id)_versionPath;
- (unsigned long long)cacheItemLimit;
- (int)cacheVersion;
- (struct CGImage { }*)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (void)dealloc;
- (void)idleAfter:(double)arg1;
- (unsigned long long)imageCount;
- (bool)imageExistsForKey:(id)arg1 inGroup:(id)arg2;
- (id)imagePath;
- (id)initWithLocalAccess:(bool)arg1;
- (bool)lockOnRead;
- (void*)openAndMmap:(id)arg1 withInfo:(struct _img { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6[4]; }*)arg2;
- (void)purge;
- (void)purgeMemoryCache;
- (void)removeImagesInGroups:(id)arg1 completion:(id /* block */)arg2;
- (void)setCacheItemLimit:(unsigned long long)arg1;
- (void)setIdleWhenDone;
- (void)setLockOnRead:(bool)arg1;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 item:(id)arg3;
- (id)storeImageQueue;

@end
