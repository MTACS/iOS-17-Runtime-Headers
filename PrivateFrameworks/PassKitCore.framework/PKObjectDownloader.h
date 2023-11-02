
@interface PKObjectDownloader : NSObject {
    long long  _concurrentRequests;
    NSMutableSet * _downloadingURLs;
    NSMutableDictionary * _downloads;
    NSMutableOrderedSet * _pendingURLs;
    NSObject<OS_dispatch_queue> * _queue;
    NSURLSession * _session;
}

@property long long concurrentRequests;
@property (retain) NSURLSession *session;

+ (id)sharedImageAssetDownloader;

- (void).cxx_destruct;
- (void)_handleResponseForURL:(id)arg1 data:(id)arg2 response:(id)arg3 error:(id)arg4;
- (id)_logStringFromCachedResponse:(id)arg1 data:(id)arg2;
- (id)_logStringFromRequest:(id)arg1;
- (id)_logStringFromResponse:(id)arg1 data:(id)arg2;
- (void)_scheduleDownload:(id)arg1 forURL:(id)arg2;
- (void)_schedulePendingDownloads;
- (id)cachedDataForURL:(id)arg1;
- (long long)concurrentRequests;
- (void)downloadFromUrl:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)downloadWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithSession:(id)arg1;
- (void)invalidate;
- (id)session;
- (void)setConcurrentRequests:(long long)arg1;
- (void)setSession:(id)arg1;

@end
