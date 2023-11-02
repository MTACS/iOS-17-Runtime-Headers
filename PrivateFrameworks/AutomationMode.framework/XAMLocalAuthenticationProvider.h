
@interface XAMLocalAuthenticationProvider : NSObject <XAMAuthorizationProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_makeAuthorizationContext;
- (id)authorizationWithError:(id*)arg1;
- (id)localizedAuthorizationReason;
- (void)requestAuthorizationWithReply:(id /* block */)arg1;

@end
