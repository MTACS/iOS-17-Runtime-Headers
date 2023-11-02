
@interface PKWebServiceRequestMetadata : NSObject {
    bool  _authHandling;
    bool  _cacheResponse;
    id /* block */  _completion;
    NSData * _originalBody;
    NSData * _responseData;
    long long  _retries;
}

@property (nonatomic) bool authHandling;
@property (nonatomic) bool cacheResponse;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSData *originalBody;
@property (nonatomic, retain) NSData *responseData;
@property (nonatomic) long long retries;

- (void).cxx_destruct;
- (bool)authHandling;
- (bool)cacheResponse;
- (id /* block */)completion;
- (id)originalBody;
- (id)responseData;
- (long long)retries;
- (void)setAuthHandling:(bool)arg1;
- (void)setCacheResponse:(bool)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setOriginalBody:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)setRetries:(long long)arg1;

@end
