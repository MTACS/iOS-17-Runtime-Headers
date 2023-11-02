
@interface TPSURLSessionManager : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate> {
    NSMutableDictionary * _URLSessionMap;
    <TPSURLSessionCustomAuthHandling> * _authenticationHandler;
    bool  _coalesceRequests;
    NSMutableDictionary * _coalesceTaskURLMap;
    <TPSURLSessionDelegate> * _defaultSessionDelegate;
    struct TPSURLSessionDelegateResponds { 
        bool willCacheResponse; 
        bool downloadTaskDidFinishDownloadingToURL; 
        bool didReceiveResponse; 
        bool didCompleteWithError; 
        bool taskDidReceiveChallenge; 
    }  _defaultSessionDelegateResponds;
    NSURLSession * _defaultURLSession;
    <TPSURLSessionManagerDelegate> * _delegate;
    bool  _respondsToDidReceiveChallenge;
    NSObject<OS_dispatch_queue> * _sessionMapQueue;
    NSObject<OS_dispatch_queue> * _sessionTaskQueue;
    NSMutableDictionary * _uncoalesceTaskMap;
    PPCRedirect * _urlRedirector;
}

@property (nonatomic, retain) NSMutableDictionary *URLSessionMap;
@property (nonatomic, retain) <TPSURLSessionCustomAuthHandling> *authenticationHandler;
@property (nonatomic) bool coalesceRequests;
@property (nonatomic, retain) NSMutableDictionary *coalesceTaskURLMap;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TPSURLSessionDelegate> *defaultSessionDelegate;
@property (nonatomic, retain) NSURLSession *defaultURLSession;
@property (nonatomic) <TPSURLSessionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool respondsToDidReceiveChallenge;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *uncoalesceTaskMap;
@property (nonatomic, retain) PPCRedirect *urlRedirector;

+ (id)defaultManager;
+ (unsigned long long)defaultURLCacheDiskCapcity;
+ (unsigned long long)defaultURLCacheMemoryCapcity;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)URLSessionForAttributionIdentifier:(id)arg1;
- (id)URLSessionMap;
- (id)_mappedURLRequest:(id)arg1;
- (bool)allowsNetworkAttribution;
- (id)authenticationHandler;
- (void)cancelSessionItem:(id)arg1;
- (bool)coalesceRequests;
- (id)coalesceTaskURLMap;
- (void)dealloc;
- (id)defaultSessionDelegate;
- (id)defaultURLSession;
- (id)delegate;
- (id)init;
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 attributionIdentifier:(id)arg3 requestType:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 attributionIdentifier:(id)arg3 requestType:(id)arg4 networkDelegate:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)removeTaskFromMap:(id)arg1;
- (bool)respondsToDidReceiveChallenge;
- (void)resumeSessionItem:(id)arg1;
- (void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (id)sessionTaskForTask:(id)arg1;
- (void)setAuthenticationHandler:(id)arg1;
- (void)setCoalesceRequests:(bool)arg1;
- (void)setCoalesceTaskURLMap:(id)arg1;
- (void)setDefaultSessionDelegate:(id)arg1;
- (void)setDefaultURLSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRespondsToDidReceiveChallenge:(bool)arg1;
- (void)setURLSessionMap:(id)arg1;
- (void)setUncoalesceTaskMap:(id)arg1;
- (void)setUrlRedirector:(id)arg1;
- (id)uncoalesceTaskMap;
- (id)urlRedirector;

@end
