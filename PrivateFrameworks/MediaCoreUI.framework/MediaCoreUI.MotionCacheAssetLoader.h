
@interface MediaCoreUI.MotionCacheAssetLoader : NSObject <AVAssetDownloadDelegate> {
    void $__lazy_storage_$_downloadSession;
    void assetDownloadTasksMapping;
    void downloadContainers;
    void requestedCancelations;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)init;

@end
