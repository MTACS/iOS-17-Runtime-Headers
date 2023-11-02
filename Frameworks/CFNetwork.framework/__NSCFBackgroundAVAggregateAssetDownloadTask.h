
@interface __NSCFBackgroundAVAggregateAssetDownloadTask : __NSCFBackgroundSessionTask <AVAssetDownloadDelegate, AVAssetDownloadDelegatePrivate> {
    unsigned long long  _AVAssetDownloadToken;
    AVURLAsset * _URLAsset;
    NSData * _assetArtworkData;
    NSString * _assetTitle;
    NSURLSession * _childAssetDownloadSession;
    NSArray * _childAssetDownloadTasks;
    NSString * _childAssetDownloadTasksSessionIdentifier;
    NSArray * _mediaSelections;
    NSDictionary * _options;
    bool  _sentWillBeginDelayedRequest;
    bool  _sentWillDownloadToURL;
}

@property (retain) AVURLAsset *URLAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)URLAsset;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)_isAVAssetTask;
- (void)_onqueue_cancel;
- (void)_onqueue_resume;
- (void)_onqueue_suspend;
- (id)currentRequest;
- (void)dealloc;
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;
- (bool)isKindOfClass:(Class)arg1;
- (id)originalRequest;
- (id)response;
- (void)setURLAsset:(id)arg1;

@end
