
@interface AAURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    NSMutableDictionary * _pendingSessionOperations;
    bool  _requiresICSSPinning;
    bool  _requiresSigning;
    bool  _requiresUrlCache;
    NSURLSession * _session;
    NSObject<OS_dispatch_queue> * _sessionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURLSession *urlSession;

+ (id)sharedPinningOnlySession;
+ (id)sharedPinningSession;
+ (id)sharedSession;
+ (id)sharedSessionWithNoUrlCache;
+ (id)sharedSigningSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)_enqueueRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)_initRequiringSigning:(bool)arg1;
- (id)_initRequiringSigning:(bool)arg1 requiresPinning:(bool)arg2;
- (id)_initRequiringSigning:(bool)arg1 requiresPinning:(bool)arg2 requiresUrlCache:(bool)arg3;
- (void)_sessionQueue_dequeueTask:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)_sessionQueue_enqueueTask:(id)arg1 completion:(id /* block */)arg2;
- (void)_sessionQueue_updateTask:(id)arg1 withData:(id)arg2;
- (id)bodyTaskWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)bodyTaskWithURL:(id)arg1 completion:(id /* block */)arg2;
- (id)dataTaskWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)dataTaskWithURL:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initForProxiedDevice:(id)arg1;
- (id)initForProxiedDevice:(id)arg1 anisetteDataProvider:(id)arg2;
- (void)resetSessionCache;
- (id)urlSession;

@end
