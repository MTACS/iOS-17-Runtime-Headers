
@protocol SBFAuthenticationResponder <NSObject>

@required

- (void)handleFailedAuthenticationRequest:(SBFAuthenticationRequest *)arg1 error:(NSError *)arg2;
- (void)handleInvalidAuthenticationRequest:(SBFAuthenticationRequest *)arg1;
- (void)handleSuccessfulAuthenticationRequest:(SBFAuthenticationRequest *)arg1;

@end
