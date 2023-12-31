
@interface WBSURLCredentialCache : NSObject {
    NSDictionary * _credentialCache;
    id /* block */  _credentialFetchBlock;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (readonly, copy) NSDictionary *credentials;

- (void).cxx_destruct;
- (id)credentials;
- (void)getCredentialsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCachingMode:(long long)arg1 credentialFetchBlock:(id /* block */)arg2;
- (id)initWithCredentialFetchBlock:(id /* block */)arg1;
- (void)invalidate;

@end
