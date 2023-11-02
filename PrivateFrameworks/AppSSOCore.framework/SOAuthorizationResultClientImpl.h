
@interface SOAuthorizationResultClientImpl : NSObject <SOAuthorizationCoreDelegate> {
    id /* block */  _authorizationHandleCredentialCompletion;
    id /* block */  _authorizationHandleResponseCompletion;
}

@property (copy) id /* block */ authorizationHandleCredentialCompletion;
@property (copy) id /* block */ authorizationHandleResponseCompletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorization:(id)arg1 didCompleteWithError:(id)arg2;
- (void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2;
- (void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3;
- (void)authorizationDidCancel:(id)arg1;
- (void)authorizationDidComplete:(id)arg1;
- (void)authorizationDidNotHandle:(id)arg1;
- (id /* block */)authorizationHandleCredentialCompletion;
- (id /* block */)authorizationHandleResponseCompletion;
- (void)setAuthorizationHandleCredentialCompletion:(id /* block */)arg1;
- (void)setAuthorizationHandleResponseCompletion:(id /* block */)arg1;

@end
