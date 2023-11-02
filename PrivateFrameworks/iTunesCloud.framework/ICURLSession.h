
@interface ICURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionDownloadDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableSet * _activeRequests;
    NSMutableDictionary * _completionHandlers;
    unsigned long long  _maxConcurrentRequests;
    NSObject<OS_dispatch_queue> * _operationQueue;
    bool  _paused;
    NSMutableOrderedSet * _pendingRequests;
    unsigned long long  _pendingRequestsProcessingCounter;
    NSObject<OS_dispatch_source> * _requestTimeoutTimer;
    NSURLSession * _urlSession;
    NSObject<OS_dispatch_queue> * _utilityQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maxConcurrentRequests;
@property (readonly) Class superclass;

+ (id)_amsMetricsForRequestContext:(id)arg1;
+ (id)_sanitizeURLString:(id)arg1;
+ (void)_sendLoadUrlMetricsToCoreAnalytics:(id)arg1;
+ (unsigned long long)defaultMaximumConcurrentRequests;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didReceiveAVAssetDownloadToken:(unsigned long long)arg3;
- (void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_checkRequestTimeouts;
- (id)_createURLSessionTaskForRequest:(id)arg1 usingSession:(id)arg2;
- (id)_createURLSessionWithConfiguration:(id)arg1;
- (void)_enqueueRequest:(id)arg1;
- (void)_finishRequest:(id)arg1;
- (id)_newResponseForRequest:(id)arg1;
- (void)_processPendingRequests;
- (void)_processRequest:(id)arg1;
- (void)_reportLoadURLMetricsWithSession:(id)arg1 task:(id)arg2 signatureName:(id)arg3 requestContext:(id)arg4 responseData:(id)arg5 error:(id)arg6;
- (id)_requestForTask:(id)arg1;
- (void)_scheduleNextRequestTimeoutCheck;
- (double)_timeoutForRequest:(id)arg1;
- (void)_updateProgressForSessionTask:(id)arg1 withTotalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)cancelPendingRequestsWithError:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)cancelRequest:(id)arg1 withError:(id)arg2;
- (void)dealloc;
- (void)enqueueDataRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)enqueueDownloadRequest:(id)arg1 toDestination:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)enqueueDownloadRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)enqueueUploadRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 maxConcurrentRequests:(unsigned long long)arg2;
- (id)initWithConfiguration:(id)arg1 maxConcurrentRequests:(unsigned long long)arg2 qualityOfService:(long long)arg3;
- (unsigned long long)maxConcurrentRequests;
- (void)pause;
- (void)pauseRequest:(id)arg1;
- (void)resume;
- (void)resumeRequest:(id)arg1;

@end
