
@interface ASDExternalManifestRequest : ASDEphemeralRequest

@property (nonatomic, readonly, copy) ASDExternalManifestRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
