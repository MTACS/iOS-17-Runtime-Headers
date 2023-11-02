
@interface ASDPurgeableAppRequest : ASDEphemeralRequest

@property (nonatomic, readonly, copy) ASDPurgeableAppRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
