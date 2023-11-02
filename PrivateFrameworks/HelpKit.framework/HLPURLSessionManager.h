
@interface HLPURLSessionManager : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate> {
    NSURLSession * _URLSession;
    <HLPURLSessionCustomAuthHandling> * _authenticationHandler;
    bool  _coalesceRequests;
    NSMutableDictionary * _coalesceTaskURLMap;
    <HLPURLSessionDelegate> * _defaultSessionDelegate;
    struct HLPURLSessionDelegateResponds { 
        bool willCacheResponse; 
        bool willPerformHTTPRedirection; 
        bool downloadTaskDidFinishDownloadingToURL; 
        bool didReceiveResponse; 
        bool didCompleteWithError; 
        bool taskDidReceiveChallenge; 
    }  _defaultSessionDelegateResponds;
    <HLPURLSessionManagerDelegate> * _delegate;
    bool  _respondsToDidReceiveChallenge;
    bool  _respondsToRequestCompleted;
    bool  _respondsToRequestResumed;
    NSObject<OS_dispatch_queue> * _sessionTaskQueue;
    NSMutableDictionary * _uncoalesceTaskMap;
    PPCRedirect * _urlRedirector;
}

@property (nonatomic, retain) NSURLSession *URLSession;
@property (nonatomic, retain) <HLPURLSessionCustomAuthHandling> *authenticationHandler;
@property (nonatomic) bool coalesceRequests;
@property (nonatomic, retain) NSMutableDictionary *coalesceTaskURLMap;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HLPURLSessionDelegate> *defaultSessionDelegate;
@property (nonatomic) <HLPURLSessionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool respondsToDidReceiveChallenge;
@property (nonatomic) bool respondsToRequestCompleted;
@property (nonatomic) bool respondsToRequestResumed;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *uncoalesceTaskMap;
@property (nonatomic, retain) PPCRedirect *urlRedirector;

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)URLSession;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_mappedURLRequest:(id)arg1;
- (id)authenticationHandler;
- (void)cancelSessionItem:(id)arg1;
- (bool)coalesceRequests;
- (id)coalesceTaskURLMap;
- (void)dealloc;
- (id)defaultSessionDelegate;
- (id)delegate;
- (id)init;
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 networkDelegate:(id)arg3;
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 networkDelegate:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)removeTaskFromMap:(id)arg1;
- (bool)respondsToDidReceiveChallenge;
- (bool)respondsToRequestCompleted;
- (bool)respondsToRequestResumed;
- (void)resumeSessionItem:(id)arg1;
- (void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (id)sessionTaskForTask:(id)arg1;
- (void)setAuthenticationHandler:(id)arg1;
- (void)setCoalesceRequests:(bool)arg1;
- (void)setCoalesceTaskURLMap:(id)arg1;
- (void)setDefaultSessionDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRespondsToDidReceiveChallenge:(bool)arg1;
- (void)setRespondsToRequestCompleted:(bool)arg1;
- (void)setRespondsToRequestResumed:(bool)arg1;
- (void)setURLSession:(id)arg1;
- (void)setUncoalesceTaskMap:(id)arg1;
- (void)setUrlRedirector:(id)arg1;
- (id)uncoalesceTaskMap;
- (id)urlRedirector;

@end
