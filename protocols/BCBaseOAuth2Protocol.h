
@protocol BCBaseOAuth2Protocol <NSObject>

@required

- (NSURL *)authenticationSessionURL;
- (bool)shouldHandleRedirectURI:(NSURL *)arg1;

@end
