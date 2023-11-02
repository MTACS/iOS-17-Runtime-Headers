
@interface BridgedWebAuthenticationSession : NSObject <ASWebAuthenticationPresentationContextProviding> {
    ASWebAuthenticationSession * _authenticationSession;
}

@property (nonatomic, retain) ASWebAuthenticationSession *authenticationSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authenticationSession;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completion:(id /* block */)arg3;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;
- (void)setAuthenticationSession:(id)arg1;
- (bool)start;

@end
