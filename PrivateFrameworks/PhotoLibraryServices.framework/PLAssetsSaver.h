
@interface PLAssetsSaver : NSObject {
    NSMutableArray * __pendingSaveAssetJobs;
    NSMutableDictionary * _inProgressAvalancheFds;
}

@property (nonatomic, retain) NSMutableArray *_pendingSaveAssetJobs;

+ (id /* block */)createWriteImageCompletionBlockWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void*)arg4;
+ (id /* block */)createWriteVideoCompletionBlockWithVideoPath:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void*)arg4;
+ (id)publicAssetsLibraryErrorFromPrivateDomain:(id)arg1 withPrivateCode:(long long)arg2;
+ (id)publicAssetsLibraryErrorFromPrivateError:(id)arg1;
+ (id)sharedAssetsSaver;

- (void).cxx_destruct;
- (id)_assetsdClientForJobDictionary:(id)arg1;
- (id)_pendingSaveAssetJobs;
- (id)_photoLibrary;
- (void)_queueJobDictionary:(id)arg1 asset:(id)arg2 requestEnqueuedBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4 imageSurface:(struct __IOSurface { }*)arg5;
- (void)_queueJobDictionary:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)_saveIsolationQueue;
- (void)_saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_setIsTakingPhoto:(bool)arg1;
- (void)dealloc;
- (void)deletePhotoStreamAssetsWithUUIDs:(id)arg1 streamID:(id)arg2;
- (void)deletePhotoStreamDataForStreamID:(id)arg1;
- (id)init;
- (void)queuePhotoStreamJobDictionary:(id)arg1;
- (void)reenqueueAssetUUIDsForPhotoStreamPublication:(id)arg1;
- (void)regenerateVideoThumbnailsForVideo:(id)arg1 withCreationDate:(id)arg2 progressStack:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)requestAsynchronousImageForAssetOID:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 completionBlock:(id /* block */)arg7;
- (id)requestSynchronousImageForAssetOID:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 outImageDataInfo:(id*)arg7 outCPLDownloadContext:(id*)arg8;
- (void)saveCameraAvalancheWithUUID:(id)arg1 allAssetUUIDs:(id)arg2 allAssets:(id)arg3 stackAsset:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 diagnostics:(id)arg4 previouslyPendingAsset:(id)arg5 requestEnqueuedBlock:(id /* block */)arg6;
- (void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(id /* block */)arg4;
- (void)saveImageRef:(struct CGImage { }*)arg1 orientation:(long long)arg2 imageData:(id)arg3 properties:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)savePhotoStreamImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)saveSyncedAssets:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)set_pendingSaveAssetJobs:(id)arg1;
- (id)validateAvalanches:(id)arg1 inLibraryWithURL:(id)arg2;

@end
