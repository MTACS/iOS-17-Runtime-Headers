
@interface PLAssetsdResourceInternalClient : PLAssetsdBaseClient

- (void)batchSaveAssetsWithJobDictionaries:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelAllPrewarming;
- (bool)cancelAllPrewarming:(id*)arg1;
- (void)cancelAllPrewarmingWithCompletionHandler:(id /* block */)arg1;
- (bool)handlePhotoKitIngestJobs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)prewarmWithCapturePhotoSettings:(id)arg1;
- (void)prewarmWithCapturePhotoSettings:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)prewarmWithCapturePhotoSettings:(id)arg1 error:(id*)arg2;
- (void)requestMasterThumbnailForAssetUUID:(id)arg1 completionHandler:(id /* block */)arg2;

@end
