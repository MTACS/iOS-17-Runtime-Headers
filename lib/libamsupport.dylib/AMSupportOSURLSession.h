
@interface AMSupportOSURLSession : NSObject <NSURLSessionDelegate> {
    NSDictionary * _options;
    float  _priority;
    NSObject<OS_dispatch_queue> * _queue;
    NSURLSession * _session;
    bool  _sslEvalFailed;
    double  _timeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic) float priority;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) bool sslEvalFailed;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;

- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_defaultSessionConfigurationWithIdentifier:(id)arg1;
- (id)_newSession;
- (id)_urlRequestForHTTPMessage:(struct __CFHTTPMessage { }*)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (void)invalidateAndCancel;
- (id)options;
- (float)priority;
- (id)queue;
- (void)sendRequest:(struct __CFHTTPMessage { }*)arg1 completion:(id /* block */)arg2;
- (id)session;
- (void)setOptions:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setQueue:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTimeout:(double)arg1;
- (bool)sslEvalFailed;
- (double)timeout;

@end
