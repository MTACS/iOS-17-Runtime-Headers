
@interface AVTCoreEnvironment : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSURL * _imageCacheStoreLocation;
    NSURL * _imageStoreLocation;
    id /* block */  _lockProvider;
    <AVTUILogger> * _logger;
    NSNotificationCenter * _notificationCenter;
    <AVTBlockScheduler> * _scheduler;
    id /* block */  _serialQueueProvider;
    NSURL * _stickerImageStoreLocation;
    NSURL * _storeLocation;
}

@property (nonatomic, readonly, copy) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (nonatomic, readonly, copy) NSURL *imageCacheStoreLocation;
@property (nonatomic, readonly, copy) NSURL *imageStoreLocation;
@property (nonatomic, readonly, copy) id /* block */ lockProvider;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) <AVTBlockScheduler> *scheduler;
@property (nonatomic, readonly, copy) id /* block */ serialQueueProvider;
@property (nonatomic, readonly, copy) NSURL *stickerImageStoreLocation;
@property (nonatomic, readonly, copy) NSURL *storeLocation;

+ (id)defaultEnvironment;
+ (id)imageCacheStoreLocationWithError:(id*)arg1;
+ (id)imageStoreLocation;
+ (void)resetFlushCacheValuesIfNeeded;
+ (id /* block */)serialQueueProvider;
+ (id)stickerImageStoreLocation;
+ (id)storeLocation;

- (void).cxx_destruct;
- (id)backgroundQueue;
- (id)imageCacheStoreLocation;
- (id)imageStoreLocation;
- (id)init;
- (id /* block */)lockProvider;
- (id)logger;
- (id)notificationCenter;
- (id)scheduler;
- (id /* block */)serialQueueProvider;
- (id)stickerImageStoreLocation;
- (id)storeLocation;

@end
