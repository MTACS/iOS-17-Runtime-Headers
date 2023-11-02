
@interface SSDownloadAuthenticationSession : SSDownloadSession

@property (readonly) NSURLAuthenticationChallenge *authenticationChallenge;

- (void)_finishWithType:(int)arg1 credential:(id)arg2;
- (id)authenticationChallenge;

@end
