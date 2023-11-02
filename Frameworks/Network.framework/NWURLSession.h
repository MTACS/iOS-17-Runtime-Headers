
@interface NWURLSession : NSObject {
    NSObject<OS_nw_http_cookie_storage> * _HTTPCookieStorage;
    NSObject<OS_nw_authentication_credential_storage> * _URLCredentialStorage;
    NSObject<OS_nw_http_alt_svc_storage> * _altSvcStorage;
    NSObject<OS_nw_context> * _context;
    NWURLSessionDelegateWrapper * _delegateWrapper;
    NSURLSessionConfiguration * _internalConfiguration;
    bool  _invalidated;
    unsigned long long  _nextTaskIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _runningTasks;
    NSString * _sessionDescription;
    NSHashTable * _weakUnresumedTasks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned char  uuid;
}

@property (nonatomic, readonly) NSObject<OS_nw_context> *_networkContext;
@property (nonatomic, readonly, copy) NSURLSessionConfiguration *configuration;
@property (nonatomic, readonly) <NSURLSessionDelegate> *delegate;
@property (nonatomic, readonly) NSOperationQueue *delegateQueue;
@property (copy) NSString *sessionDescription;

+ (void)_disableAppSSO;
+ (void)_strictTrustEvaluate:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_dataTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (id)_dataTaskWithRequest:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_dataTaskWithURL:(id)arg1 delegate:(id)arg2;
- (id)_dataTaskWithURL:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_downloadTaskWithRequest:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_downloadTaskWithResumeData:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_downloadTaskWithURL:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_networkContext;
- (id)_uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 delegate:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 delegate:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)configuration;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (id)delegateQueue;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finishTasksAndInvalidate;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (void)getAllTasksWithCompletionHandler:(id /* block */)arg1;
- (void)getTasksWithCompletionHandler:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invalidateAndCancel;
- (bool)isKindOfClass:(Class)arg1;
- (void)resetWithCompletionHandler:(id /* block */)arg1;
- (id)sessionDescription;
- (void)setSessionDescription:(id)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;
- (id)streamTaskWithNetService:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)webSocketTaskWithRequest:(id)arg1;
- (id)webSocketTaskWithURL:(id)arg1;
- (id)webSocketTaskWithURL:(id)arg1 protocols:(id)arg2;

@end
