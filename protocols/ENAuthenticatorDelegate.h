
@protocol ENAuthenticatorDelegate <NSObject>

@required

- (void)authenticatorDidAuthenticateWithCredentials:(ENCredentials *)arg1 authInfo:(NSDictionary *)arg2;
- (void)authenticatorDidFailWithError:(NSError *)arg1;
- (void)authenticatorShouldShowAuthorizationUIWithURL:(void *)arg1 callbackPrefix:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*
- (ENUserStoreClient *)userStoreClientForBootstrapping;

@end
