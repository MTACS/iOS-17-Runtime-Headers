
@interface SeymourServices.AssetMediaStreamLoader : NSObject <AVAssetDownloadDelegate> {
    void $__lazy_storage_$_systemPrefetchSession;
    void $__lazy_storage_$_userInitiatedSession;
    void assetFileStore;
    void eventHub;
    void lock;
    void persistenceStore;
    void queue;
    void tasks;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5 forMediaSelection:(id)arg6;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)init;

@end
