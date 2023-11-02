
@interface WBSAggresiveURLCredentialCache : WBSURLCredentialCache

- (id)credentials;
- (void)getCredentialsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCredentialFetchBlock:(id /* block */)arg1;
- (void)invalidate;

@end
