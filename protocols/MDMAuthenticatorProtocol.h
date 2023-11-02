
@protocol MDMAuthenticatorProtocol <NSObject, DMCHTTPAuthenticator>

@required

+ (NSString *)authenticationMethod;

- (bool)canRefreshToken;
- (bool)doesWebAuthentication;
- (id)initWithRMAccountID:(NSString *)arg1;
- (id)initWithTokens:(NSDictionary *)arg1;
- (NSURL *)prepareForReauthenticationWithAuthParams:(NSDictionary *)arg1 accountID:(NSString *)arg2 error:(id*)arg3;
- (bool)validAuthParams:(NSDictionary *)arg1;

@optional

- (void)authTokensWithCallbackURL:(void *)arg1 authParams:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchTokenWithAuthParams:(void *)arg1 accountID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)refreshTokenWithAuthParams:(void *)arg1 accountID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (NSURL *)webAuthenticationURLForAuthParams:(NSDictionary *)arg1 userIdentifier:(NSString *)arg2;

@end
