
@interface _MPCMiniSINFEndpointInfo : NSObject {
    NSURL * _endpointURL;
    long long  _maximumBatchSize;
    ICStoreRequestContext * _requestContext;
}

@property (nonatomic, readonly, copy) NSURL *endpointURL;
@property (nonatomic, readonly) long long maximumBatchSize;
@property (nonatomic, readonly) ICStoreRequestContext *requestContext;

- (void).cxx_destruct;
- (id)endpointURL;
- (id)initWithEndpointURL:(id)arg1 maximumBatchSize:(long long)arg2 requestContext:(id)arg3;
- (long long)maximumBatchSize;
- (id)requestContext;

@end
