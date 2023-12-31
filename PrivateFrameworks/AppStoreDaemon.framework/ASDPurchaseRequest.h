
@interface ASDPurchaseRequest : ASDEphemeralRequest

@property (nonatomic, readonly, copy) ASDPurchaseRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
