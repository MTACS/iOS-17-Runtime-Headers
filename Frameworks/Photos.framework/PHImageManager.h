
@interface PHImageManager : NSObject <PHMediaRequestContextDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _managerID;
    _Atomic int  _nextRequestID;
    PHPhotoLibrary * _photoLibrary;
    NSMapTable * _requestContextsByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long managerID;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

+ (bool)_allowVideoAccessForAsset:(id)arg1 options:(id)arg2;
+ (unsigned long long)_nextManagerID;
+ (id)_videoAVObjectBuilderFromVideoURL:(id)arg1 info:(id)arg2 options:(id)arg3 playbackOnly:(bool)arg4;
+ (void)buildAVAssetFromVideoURL:(id)arg1 infoDictionary:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
+ (void)buildAVPlayerItemFromVideoURL:(id)arg1 infoDictionary:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
+ (void)buildExportSessionFromVideoURL:(id)arg1 infoDictionary:(id)arg2 options:(id)arg3 exportPreset:(id)arg4 completion:(id /* block */)arg5;
+ (void)configureAssetCacheInAssetCreationOptionsDictionary:(id)arg1;
+ (id)defaultManager;
+ (id)mediaItemURLForAsset:(id)arg1 result:(id)arg2;
+ (id)playerItemFromVideoMediaItemMakerDataInMediaResult:(id)arg1 forAsset:(id)arg2;

- (void).cxx_destruct;
- (bool)_canStreamVideoForAsset:(id)arg1;
- (void)_prepareLivePhotoResultWithImage:(struct CGImage { }*)arg1 uiOrientation:(long long)arg2 shouldIncludeVideo:(bool)arg3 videoURL:(id)arg4 info:(id)arg5 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 asset:(id)arg7 completion:(id /* block */)arg8;
- (int)_requestImagePropertiesFromFileForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)_requestLiveRenderAVAssetForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)_runBlockOnAppropriateResultQueueOrSynchronouslyWithRequest:(id)arg1 options:(id)arg2 block:(id /* block */)arg3;
- (bool)_shouldUseRAWResourceAsUnadjustedBaseForAsset:(id)arg1 options:(id)arg2;
- (void)additionalWorkForImageRequestCompletedWithResult:(id)arg1 request:(id)arg2 context:(id)arg3;
- (void)cancelImageRequest:(int)arg1;
- (unsigned long long)hash;
- (id)init;
- (unsigned long long)managerID;
- (void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(bool*)arg3 didFindImage:(bool*)arg4 resultHandler:(id /* block */)arg5;
- (void)mediaRequestContextDidFinish:(id)arg1;
- (int)nextID;
- (id)photoLibrary;
- (int)requestAVAssetForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestAVProxyForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestContentEditingInputForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (int)requestExportSessionForVideo:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 resultHandler:(id /* block */)arg4;
- (int)requestImageDataAndOrientationForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestImagePropertiesForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestNewCGImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)runRequestWithContext:(id)arg1;
- (id)synchronousImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;

@end
