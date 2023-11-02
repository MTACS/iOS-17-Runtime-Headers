
@interface HFCameraVideoCache : NSObject <HFCameraVideoDownloaderDelegate, HFDiskCacheDelegate, HFNetworkMonitorObserver> {
    double  _cacheDurationLimit;
    <HFCameraVideoCacheDelegate> * _delegate;
    HFDiskCache * _diskCache;
    double  _expensiveNetworkCacheDurationLimit;
    NSOperationQueue * _operationQueue;
    <HFCameraVideoDownloader> * _videoDownloader;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) double cacheDurationLimit;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <HFCameraVideoCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HFDiskCache *diskCache;
@property (nonatomic) unsigned long long diskCacheLimit;
@property (nonatomic, readonly) double expensiveNetworkCacheDurationLimit;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCameraVideoDownloader> *videoDownloader;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_cacheClip:(id)arg1;
- (void)_cacheClip:(id)arg1 inClips:(id)arg2;
- (double)_cacheDurationLimit;
- (id)_delegate;
- (id)_existingDownloadOperationForClip:(id)arg1;
- (double)_expensiveNetworkCacheDurationLimit;
- (void)_gloablNotifyDidAddVideoForClip:(id)arg1;
- (void)_limitDiskCacheToPercentageofAvailableDiskSpace:(unsigned long long)arg1;
- (void)_notifyVideoExistsForClip:(id)arg1 atURL:(id)arg2;
- (bool)_queueVideoDownloadForClip:(id)arg1 priority:(long long)arg2;
- (void)_setCacheDurationLimit:(double)arg1;
- (void)_setDelegate:(id)arg1;
- (void)cacheClip:(id)arg1;
- (void)cacheClip:(id)arg1 inClips:(id)arg2;
- (double)cacheDurationLimit;
- (void)dealloc;
- (id)delegate;
- (void)didDownloadVideoFileForClip:(id)arg1 toURL:(id)arg2;
- (id)diskCache;
- (void)diskCache:(id)arg1 didEvictFileFromDisk:(id)arg2 forUniqueIdentifier:(id)arg3;
- (bool)diskCache:(id)arg1 shouldAddExistingFileToCache:(id)arg2;
- (unsigned long long)diskCacheLimit;
- (double)expensiveNetworkCacheDurationLimit;
- (void)foundVideoFileForClip:(id)arg1 atURL:(id)arg2;
- (id)initWithVideoDownloader:(id)arg1;
- (void)limitDiskCacheToPercentageofAvailableDiskSpace:(unsigned long long)arg1;
- (void)networkDidBecomeExpensive:(id)arg1;
- (id)operationQueue;
- (void)setCacheDurationLimit:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiskCacheLimit:(unsigned long long)arg1;
- (id)videoDownloader;
- (id)workQueue;

@end
