
@interface ASDPurgeAppsRequest : ASDEphemeralRequest

@property (nonatomic, readonly, copy) ASDPurgeAppsRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
