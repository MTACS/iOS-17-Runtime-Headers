
@interface _ICQMegaBackupNetworkRequest : NSObject {
    NSURLSession * _URLSession;
    NSURLSessionTask * _URLSessionTask;
    id /* block */  _completionHandler;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _requestURL;
}

@property (nonatomic, readonly, copy) NSDictionary *additionalRequestHeaders;
@property (nonatomic, readonly, copy) NSDictionary *bodyJSON;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) NSDictionary *requestHeaders;
@property (nonatomic, readonly, copy) NSURL *requestURL;

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (id)_createURLRequestWithError:(id*)arg1;
- (id)_dictionaryFromData:(id)arg1 response:(id)arg2 error:(id*)arg3;
- (id)_errorForURLRequestError:(id)arg1;
- (void)_performURLRequest:(id)arg1;
- (void)addAdditionalRequestHeaders:(id)arg1;
- (id)additionalRequestHeaders;
- (id)bodyJSON;
- (id)error;
- (id)errorForUnsuccessfulResponse:(id)arg1 body:(id)arg2;
- (id)handleResponse:(id)arg1 body:(id)arg2;
- (void)handleURLResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)initWithRequestURL:(id)arg1 URLSession:(id)arg2 queue:(id)arg3;
- (void)invalidate;
- (id)requestHeaders;
- (id)requestURL;
- (void)resumeWithCompletionHandler:(id /* block */)arg1;

@end
