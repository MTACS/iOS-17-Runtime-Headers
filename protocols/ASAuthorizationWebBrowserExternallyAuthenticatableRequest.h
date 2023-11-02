
@protocol ASAuthorizationWebBrowserExternallyAuthenticatableRequest <NSObject>

@required

- (LAContext *)authenticatedContext;
- (void)setAuthenticatedContext:(LAContext *)arg1;

@end
