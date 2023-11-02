
@interface WFOAuth2WebAuthorizationSession : NSObject <WFOAuth2AuthorizationSession> {
    ASWebAuthenticationSession * _authenticationSession;
    NSURL * _authorizationURL;
    id /* block */  _completionHandler;
    WFWebAuthenticationSessionPresentationContext * _presentationContext;
    NSURL * _redirectURI;
    NSString * _responseKey;
    NSString * _responseType;
    WFOAuth2SessionManager * _sessionManager;
    NSString * _state;
}

@property (nonatomic, retain) ASWebAuthenticationSession *authenticationSession;
@property (nonatomic, readonly, copy) NSURL *authorizationURL;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFWebAuthenticationSessionPresentationContext *presentationContext;
@property (nonatomic, readonly, copy) NSURL *redirectURI;
@property (nonatomic, readonly) NSString *responseKey;
@property (nonatomic, readonly, copy) NSString *responseType;
@property (nonatomic, readonly) WFOAuth2SessionManager *sessionManager;
@property (nonatomic, readonly) NSString *state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authenticationSession;
- (id)authenticationSessionWithPresentationAnchor:(id)arg1;
- (id)authorizationURL;
- (id /* block */)completionHandler;
- (id)initWithSessionManager:(id)arg1 authorizationURL:(id)arg2 responseType:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(bool)arg5 completionHandler:(id /* block */)arg6;
- (id)presentationContext;
- (id)redirectURI;
- (id)responseKey;
- (id)responseType;
- (bool)resumeSessionWithResponseObject:(id)arg1;
- (bool)resumeSessionWithURL:(id)arg1;
- (id)sessionManager;
- (void)setAuthenticationSession:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setPresentationContext:(id)arg1;
- (id)state;

@end
