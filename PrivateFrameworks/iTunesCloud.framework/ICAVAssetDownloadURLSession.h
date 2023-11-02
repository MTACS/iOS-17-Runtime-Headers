
@interface ICAVAssetDownloadURLSession : ICURLSession <AVAssetDownloadDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5 forMediaSelection:(id)arg6;
- (id)_createURLSessionTaskForRequest:(id)arg1 usingSession:(id)arg2;
- (id)_createURLSessionWithConfiguration:(id)arg1;
- (void)dealloc;
- (void)enqueueAVDownloadRequest:(id)arg1 toDestination:(id)arg2 withAVURLAsset:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)enqueueAVDownloadRequest:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)enqueueAVDownloadRequest:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)enqueueAggregateAssetDownloadRequest:(id)arg1 toDestination:(id)arg2 withAVURLAsset:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)enqueueAggregateAssetDownloadRequest:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)enqueueAggregateAssetDownloadRequest:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 resourceLoaderDelegate:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithConfiguration:(id)arg1 maxConcurrentRequests:(unsigned long long)arg2 qualityOfService:(long long)arg3;
- (void)mediaServicesWereLost:(id)arg1;
- (void)mediaServicesWereReset:(id)arg1;

@end
