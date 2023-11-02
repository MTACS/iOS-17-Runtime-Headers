
@interface WBSLazyURLCredentialCache : WBSURLCredentialCache

- (id)credentials;
- (void)getCredentialsWithCompletionHandler:(id /* block */)arg1;
- (void)invalidate;

@end
