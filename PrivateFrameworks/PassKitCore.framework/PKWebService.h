
@interface PKWebService : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate> {
    ACAccountStore * _accountStore;
    NSOperationQueue * _delegateOperationQueue;
    NSMutableArray * _diagnosticReasons;
    NSMutableDictionary * _diagnosticReasonsByTaskID;
    NSObject<OS_dispatch_queue> * _diagnosticReasonsQueue;
    NSSet * _sensitiveKeys;
    NSObject<OS_dispatch_queue> * _sessionQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    <PKTapToRadarDelegate> * _tapToRadarDelegate;
    unsigned long long  _taskIDCounter;
    NSMutableDictionary * _tasksMetadata;
    NSURLSession * _urlSession;
    NSString * _webServiceSessionMarker;
    NSMutableDictionary * _webServiceTasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSURLSessionConfiguration *sessionConfiguration;
@property (readonly) Class superclass;
@property (nonatomic) <PKTapToRadarDelegate> *tapToRadarDelegate;
@property (nonatomic, readonly) NSString *webServiceSessionMarker;

+ (id)_sharedCookieStorage;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (id)_accountStore;
- (void)_associateDiagnosticReasonsWithTaskID:(unsigned long long)arg1;
- (void)_cleanUpDiagnosticReasonsForTaskID:(unsigned long long)arg1;
- (bool)_evaluateTrust:(struct __SecTrust { }*)arg1;
- (void)_redactLogsFromJSONObject:(id)arg1;
- (id)_redactLogsWithData:(id)arg1;
- (id)_urlRequestTaggedWithDiagnosticReasonHeader:(id)arg1 forTaskID:(unsigned long long)arg2;
- (id)_urlRequestTaggedWithWebServiceSessionMarkerHeader:(id)arg1;
- (id)_urlRequestWithCustomHeaders:(id)arg1;
- (void)addDiagnosticReason:(id)arg1;
- (bool)canBypassTrustValidation;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)diagnosticSessionWithReason:(id)arg1 sessionHandler:(id /* block */)arg2;
- (id)forbiddenErrorWithResponse:(id)arg1;
- (void)handleAuthenticationFailureWithCompletionHandler:(id /* block */)arg1;
- (void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 originalRequest:(id)arg2 redirectHandler:(id /* block */)arg3;
- (id)initWithTapToRadarDelegate:(id)arg1;
- (void)invalidate;
- (long long)logFacilityType;
- (void)logRequest:(id)arg1;
- (void)logResponse:(id)arg1 withData:(id)arg2;
- (unsigned long long)nextTaskID;
- (void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 cacheResponse:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 retries:(unsigned long long)arg3 authHandling:(bool)arg4 cacheResponse:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 retries:(unsigned long long)arg3 authHandling:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)processRetryRequest:(id)arg1 responseData:(id)arg2 orginalRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)refreshSessionWithConfiguration:(id)arg1;
- (void)removeDiagnosticReason:(id)arg1;
- (void)resetWebServiceSessionMarker;
- (id)sessionConfiguration;
- (void)setTapToRadarDelegate:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (id)tapToRadarDelegate;
- (id)urlRequestTaggedWithUniqueRequestIdentifier:(id)arg1;
- (id)urlSession;
- (id)webServiceSessionMarker;
- (unsigned long long)webServiceTaskIdentifierForTaskIdentifier:(long long)arg1;

@end
