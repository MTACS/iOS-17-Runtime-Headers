
@interface AMSURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate> {
    NSURLSessionConfiguration * _configuration;
    AMSURLDelegateProxy * _delegateProxy;
    NSOperationQueue * _delegateQueue;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _lazyDataTaskCreationQueue;
    <AMSURLHandling> * _protocolHandler;
    <AMSRequestEncoding> * _requestEncoder;
    <AMSResponseDecoding> * _responseDecoder;
    AMSURLSecurityPolicy * _securityPolicy;
    NSURLSession * _session;
}

@property (nonatomic, readonly) NSURLSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NSURLSessionDelegate><AMSURLProtocolDelegate> *delegate;
@property (nonatomic, retain) AMSURLDelegateProxy *delegateProxy;
@property (nonatomic, readonly) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalidated;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *lazyDataTaskCreationQueue;
@property (nonatomic, retain) <AMSURLHandling> *protocolHandler;
@property (nonatomic, retain) <AMSRequestEncoding> *requestEncoder;
@property (nonatomic, retain) <AMSResponseDecoding> *responseDecoder;
@property (nonatomic, retain) AMSURLSecurityPolicy *securityPolicy;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;

+ (id)defaultSession;
+ (id)imageSession;
+ (id)sharedAuthKitSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_completeTask:(id)arg1 decodedObject:(id)arg2 error:(id)arg3;
- (id)_createSharedDataForTask:(id)arg1 properties:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_formatError:(id)arg1 task:(id)arg2 decodedObject:(id)arg3;
- (id)_handleURLAction:(id)arg1 task:(id)arg2 error:(id*)arg3;
- (id)_prepareRequest:(id)arg1 properties:(id)arg2 error:(id*)arg3;
- (bool)_protocolHandlerIsAMSImplementation;
- (void)_retryTask:(id)arg1 action:(id)arg2 error:(id*)arg3;
- (id)configuration;
- (id)dataTaskPromiseWithRequest:(id)arg1;
- (id)dataTaskPromiseWithRequestPromise:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dataTaskWithRequest:(id)arg1 signpostID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (id)delegateProxy;
- (id)delegateQueue;
- (void)finishTasksAndInvalidate;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invalidateAndCancel;
- (bool)invalidated;
- (id)lazyDataTaskCreationQueue;
- (id)protocolHandler;
- (id)requestEncoder;
- (id)responseDecoder;
- (id)securityPolicy;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)setDelegateProxy:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setProtocolHandler:(id)arg1;
- (void)setRequestEncoder:(id)arg1;
- (void)setResponseDecoder:(id)arg1;
- (void)setSecurityPolicy:(id)arg1;

@end
