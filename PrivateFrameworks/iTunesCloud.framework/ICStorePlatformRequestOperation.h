
@interface ICStorePlatformRequestOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    ICStoreURLRequest * _activeURLRequest;
    ICStorePlatformRequest * _platformRequest;
    id /* block */  _responseHandler;
    ICStorePlatformRequestOperation * _strongSelf;
    ICURLSession * _urlSession;
}

@property (nonatomic, readonly, copy) ICStorePlatformRequest *platformRequest;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)_URLRequestWithBaseURL:(id)arg1;
- (void)_enqueueDataRequest:(id)arg1;
- (void)_executePersonalized;
- (void)_executeUnpersonalized;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (id)_requestContext;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)initWithPlatformRequest:(id)arg1;
- (id)initWithPlatformRequest:(id)arg1 usingURLSession:(id)arg2;
- (id)platformRequest;
- (id /* block */)responseHandler;
- (void)setResponseHandler:(id /* block */)arg1;

@end
