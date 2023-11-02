
@interface PHCloudSharedAssetExportRequest : PHAssetExportRequest {
    int  _imageManagerImageRequestId;
    NSObject<OS_dispatch_queue> * _imageManagerResultHandlerQueue;
    int  _imageManagerVideoRequestId;
    NSObject<OS_dispatch_queue> * _resourceRetrievingQueue;
}

+ (id)exportRequestForAsset:(id)arg1 error:(id*)arg2;
+ (id)variantsForAsset:(id)arg1 asUnmodifiedOriginal:(bool)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_handleImageManagerResultForAsset:(id)arg1 networkAccessAllowed:(bool)arg2 progress:(id)arg3 processingUnitCount:(unsigned long long)arg4 options:(id)arg5 withFileUrls:(id)arg6 info:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)_requestFileURLsForAsset:(id)arg1 withOptions:(id)arg2 networkAccessAllowed:(bool)arg3 progressHandler:(id /* block */)arg4 resultHandler:(id /* block */)arg5 resultHandlerQueue:(id)arg6;
- (int)_requestImageURLForAsset:(id)arg1 networkAccessAllowed:(bool)arg2 progressHandler:(id /* block */)arg3 resultHandler:(id /* block */)arg4 resultHandlerQueue:(id)arg5;
- (void)_requestLivePhotoURLsForAsset:(id)arg1 networkAccessAllowed:(bool)arg2 progressHandler:(id /* block */)arg3 resultHandler:(id /* block */)arg4 resultHandlerQueue:(id)arg5;
- (int)_requestVideoURLForAsset:(id)arg1 networkAccessAllowed:(bool)arg2 progressHandler:(id /* block */)arg3 resultHandler:(id /* block */)arg4 resultHandlerQueue:(id)arg5;
- (void)exportWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)exportWithOptions:(id)arg1 networkAccessAllowed:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithAsset:(id)arg1 variants:(id)arg2;
- (void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long*)arg2 isProcessingRequired:(bool*)arg3 fileURLs:(id*)arg4 info:(id*)arg5;

@end
