
@interface MTImageDownloader : MTURLSessionManager <MTFeedIngesterImageDownloaderProtocol> {
    NSMutableDictionary * _clientRequestsByUrl;
    bool  _hasPurgedTemporaryResourcesDirectory;
    MTImageStore * _imageStore;
    NSObject<OS_dispatch_queue> * _imageWorkQueue;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (nonatomic, retain) NSMutableDictionary *clientRequestsByUrl;
@property (nonatomic) bool hasPurgedTemporaryResourcesDirectory;
@property (nonatomic, retain) MTImageStore *imageStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *imageWorkQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;

- (void).cxx_destruct;
- (id)_clientRequestsForUrl:(id)arg1;
- (bool)_completeUsingExistingDownloadedImageForUuid:(id)arg1 imageUrl:(id)arg2;
- (void)_dequeueClientRequests:(id)arg1;
- (void)_downloadImageUrl:(id)arg1 cacheKey:(id)arg2 podcastUuid:(id)arg3 userInitiated:(bool)arg4 backgroundFetch:(bool)arg5 callback:(id /* block */)arg6;
- (long long)_enqueueClientInfoWithUrl:(id)arg1 key:(id)arg2 podcastUuid:(id)arg3 completion:(id /* block */)arg4;
- (void)_finishProcessingClientRequests:(id)arg1 originalUrl:(id)arg2 success:(bool)arg3 error:(id)arg4;
- (id)_keyForImageDownloaderTempFilename:(id)arg1;
- (void)_onImageWorkQueuePurgeUnneededItemsInTemporaryResourcesDirectoryIfNecessary;
- (void)_processFinishedDownloadWithContentURL:(id)arg1 originalUrl:(id)arg2 actualRequestUrl:(id)arg3 finishedWithContentHandler:(id /* block */)arg4 processedKeys:(id)arg5;
- (void)_saveArtworkImageUrl:(id)arg1 forPodcastUuids:(id)arg2 logHeader:(id)arg3;
- (bool)_shouldDiscardTransparency;
- (id)_temporaryImagePathByCopyingDownloadedContent:(id)arg1 uuid:(id)arg2 error:(id*)arg3;
- (id)_temporaryImagePathForDownloadedImageWithUuid:(id)arg1;
- (id)_temporaryResourcesDirectory;
- (double)_urlSessionResourceTimeout;
- (void)cleanupTemporaryResourcesDirectoryIfNecessary;
- (id)clientRequestsByUrl;
- (void)configureSession:(id)arg1;
- (void)downloadImageForPodcastUuid:(id)arg1 urlOptions:(id)arg2 userInitiated:(bool)arg3 useBackgroundFetch:(bool)arg4;
- (void)downloadImageForPodcastUuid:(id)arg1 urlOptions:(id)arg2 userInitiated:(bool)arg3 useBackgroundFetch:(bool)arg4 callback:(id /* block */)arg5;
- (void)downloadImageForPodcastUuid:(id)arg1 userInitiated:(bool)arg2 backgroundFetch:(bool)arg3 callback:(id /* block */)arg4;
- (void)downloadImageUrl:(id)arg1 cacheKey:(id)arg2 userInitiated:(bool)arg3 backgroundFetch:(bool)arg4;
- (void)downloadImageUrl:(id)arg1 cacheKey:(id)arg2 userInitiated:(bool)arg3 backgroundFetch:(bool)arg4 callback:(id /* block */)arg5;
- (void)downloadImageUrl:(id)arg1 cacheKey:(id)arg2 userInitiated:(bool)arg3 callback:(id /* block */)arg4;
- (bool)hasPurgedTemporaryResourcesDirectory;
- (id)imageStore;
- (id)imageWorkQueue;
- (id)init;
- (void)setClientRequestsByUrl:(id)arg1;
- (void)setHasPurgedTemporaryResourcesDirectory:(bool)arg1;
- (void)setImageStore:(id)arg1;
- (void)setImageWorkQueue:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (id)syncQueue;
- (void)task:(id)arg1 didCompleteWithDownloadedContentUrl:(id)arg2;
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;

@end
