
@interface ENTestResultNetworkRequest : NSObject {
    NSString * _APIKey;
    NSURLSession * _URLSession;
    NSURLSessionTask * _URLSessionTask;
    id /* block */  _completionHandler;
    NSError * _error;
    unsigned long long  _maxRetryTime;
    unsigned long long  _paddedRequestSize;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _requestURL;
}

@property (nonatomic, copy) NSString *APIKey;
@property (nonatomic, readonly, copy) NSDictionary *additionalRequestHeaders;
@property (nonatomic, readonly, copy) NSDictionary *bodyJSON;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic) unsigned long long paddedRequestSize;
@property (nonatomic, readonly, copy) NSDictionary *requestHeaders;
@property (nonatomic, readonly, copy) NSURL *requestURL;

- (void).cxx_destruct;
- (id)APIKey;
- (void)_completeWithError:(id)arg1;
- (id)_createURLRequestWithError:(id*)arg1;
- (void)_dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_dictionaryFromData:(id)arg1 response:(id)arg2 error:(id*)arg3;
- (id)_errorForURLRequestError:(id)arg1;
- (void)_performURLRequest:(id)arg1 attempt:(int)arg2;
- (id)additionalRequestHeaders;
- (id)bodyJSON;
- (id)error;
- (id)errorForUnsuccessfulResponse:(id)arg1 body:(id)arg2;
- (id)getPaddedBodyJSONAndReturnError:(id*)arg1;
- (id)handleResponse:(id)arg1 body:(id)arg2;
- (void)handleURLResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)initWithRequestURL:(id)arg1 URLSession:(id)arg2 queue:(id)arg3;
- (void)invalidate;
- (unsigned long long)paddedRequestSize;
- (id)requestHeaders;
- (id)requestURL;
- (void)resumeWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)retryCheck:(id)arg1 retryAttempt:(int)arg2 baseMultiplier:(int)arg3;
- (void)setAPIKey:(id)arg1;
- (void)setMaxRetryTime:(unsigned long long)arg1;
- (void)setPaddedRequestSize:(unsigned long long)arg1;

@end
