
@interface ADJingleRequest : NSObject {
    NSString * _DSID;
    NSString * _bagKey;
    id /* block */  _completionHandler;
    NSError * _error;
    NSData * _requestBody;
    NSMutableDictionary * _requestHeaders;
    NSData * _responseBody;
    NSDictionary * _responseHeaders;
    long long  _statusCode;
    NSNumber * _token;
}

@property (nonatomic, copy) NSString *DSID;
@property (nonatomic, retain) NSString *bagKey;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (copy) NSError *error;
@property (nonatomic, retain) NSData *requestBody;
@property (nonatomic, retain) NSMutableDictionary *requestHeaders;
@property (retain) NSData *responseBody;
@property (retain) NSDictionary *responseHeaders;
@property long long statusCode;
@property (nonatomic, retain) NSNumber *token;

+ (id)incrementToken;

- (void).cxx_destruct;
- (id)DSID;
- (id)bagKey;
- (id /* block */)completionHandler;
- (id)error;
- (void)handleJingleResponse;
- (id)init:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)requestBody;
- (id)requestHeaders;
- (id)responseBody;
- (id)responseHeaders;
- (void)send;
- (void)sendJingleRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setBagKey:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDSID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRequestBody:(id)arg1;
- (void)setRequestHeaders:(id)arg1;
- (void)setResponseBody:(id)arg1;
- (void)setResponseHeaders:(id)arg1;
- (void)setStatusCode:(long long)arg1;
- (void)setToken:(id)arg1;
- (long long)statusCode;
- (id)token;

@end
