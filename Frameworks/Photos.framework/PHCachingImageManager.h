
@interface PHCachingImageManager : PHImageManager <PHImageCacheDelegate> {
    bool  _allowsCachingHighQualityImages;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachingLock;
    NSMutableSet * _cachingRequestIDs;
    PHImageCache * _imageCache;
    bool  _imageCacheCommitScheduled;
    NSObject<OS_dispatch_source> * _memoryEventSource;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) bool allowsCachingHighQualityImages;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_chooseImageTableFormatForPreheatingFromFormats:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 returnBestTableRegardlessOfFit:(bool)arg4;

- (void).cxx_destruct;
- (id)_cacheFailReasonFromInfo:(id)arg1;
- (bool)_cacheImageResult:(id)arg1 forRequest:(id)arg2;
- (bool)_canPopulateCacheForResult:(id)arg1;
- (void)_commitCacheChanges;
- (void)_handleCachingImageRequestResult:(id)arg1 request:(id)arg2 context:(id)arg3;
- (void)_handleMemoryWarning;
- (id)_imageTableForPreheatingDegradedOpportunisticRequestsWithPhotoLibrary:(id)arg1;
- (void)_preheatImageTable:(id)arg1 forAssets:(id)arg2;
- (void)_scheduleOrCommitCacheChangesIfNeeded;
- (id)_tableFormatsForLibrary:(id)arg1;
- (void)additionalWorkForImageRequestCompletedWithResult:(id)arg1 request:(id)arg2 context:(id)arg3;
- (bool)allowsCachingHighQualityImages;
- (void)imageCache:(id)arg1 didEvictCacheEntry:(id)arg2;
- (id)init;
- (void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(bool*)arg3 didFindImage:(bool*)arg4 resultHandler:(id /* block */)arg5;
- (void)setAllowsCachingHighQualityImages:(bool)arg1;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;

@end
