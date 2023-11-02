
@interface VideosUI.LibDownloadObserver : NSObject <MPMediaDownloadObserver, VUIDownloadManagerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _hasDownloadInProgress;
    void downloadObservationCallbackMap;
    void ssDownloadManager;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (id)init;

@end
