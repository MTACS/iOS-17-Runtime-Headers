
@interface GEOResourceLoadOperation : NSObject <GEOResourceLoadOperation, NSURLSessionDataDelegate> {
    GEOApplicationAuditToken * _auditToken;
    NSURL * _authProxyURL;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    NSMutableData * _data;
    NSURL * _downloadedFileURL;
    NSString * _eTag;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _log;
    bool  _preferDirectNetworking;
    GEOReportedProgress * _progress;
    NSURL * _proxyURL;
    <GEORequestCounterTicket> * _requestCounterTicket;
    bool  _requiresWiFi;
    NSString * _serviceAddress;
    NSURLSession * _session;
    NSDate * _starttime;
    NSURLSessionTask * _task;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool preferDirectNetworking;
@property (readonly) NSProgress *progress;
@property (nonatomic) bool requiresWiFi;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cancel;
- (void)dealloc;
- (id)initWithResource:(id)arg1 eTag:(id)arg2 auditToken:(id)arg3 baseURL:(id)arg4 alternateURLs:(id)arg5 proxyURL:(id)arg6 log:(id)arg7;
- (bool)preferDirectNetworking;
- (id)progress;
- (bool)requiresWiFi;
- (void)setPreferDirectNetworking:(bool)arg1;
- (void)setRequiresWiFi:(bool)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;

@end
