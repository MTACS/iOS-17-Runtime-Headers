
@interface RadioRequest : NSObject {
    bool  _asynchronousBackgroundRequest;
    bool  _cachedResponse;
    long long  _errorCode;
    NSObject<OS_dispatch_queue> * _queue;
    RadioRequestContext * _requestContext;
    double  _retryInterval;
    long long  _status;
    NSDictionary * _unparsedResponseDictionary;
}

@property (getter=isAsynchronousBackgroundRequest, nonatomic) bool asynchronousBackgroundRequest;
@property (getter=isCachedResponse, nonatomic, readonly) bool cachedResponse;
@property (nonatomic, readonly) long long errorCode;
@property (nonatomic, copy) RadioRequestContext *requestContext;
@property (nonatomic, readonly) double retryInterval;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, copy) NSDictionary *unparsedResponseDictionary;

+ (id)defaultURLCache;
+ (void)loadServiceConfigurationWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_loadRadioStoreBagAndAllowRetry:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_loadRadioStoreBagWithCompletionHandler:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (long long)errorCode;
- (id)init;
- (bool)isAsynchronousBackgroundRequest;
- (bool)isCachedResponse;
- (id)requestContext;
- (double)retryInterval;
- (void)setAsynchronousBackgroundRequest:(bool)arg1;
- (void)setCachedResponse:(bool)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setRetryInterval:(double)arg1;
- (void)setStatus:(long long)arg1;
- (void)setUnparsedResponseDictionary:(id)arg1;
- (long long)status;
- (id)unparsedResponseDictionary;

@end
