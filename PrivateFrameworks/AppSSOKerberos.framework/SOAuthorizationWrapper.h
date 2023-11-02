
@interface SOAuthorizationWrapper : NSObject <SOAuthorizationCoreDelegate> {
    SOAuthorizationCore * _authorization;
    id /* block */  _authorizationCompletion;
}

@property (copy) id /* block */ authorizationCompletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorization:(id)arg1 didCompleteWithError:(id)arg2;
- (void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2;
- (void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3;
- (id /* block */)authorizationCompletion;
- (void)authorizationDidCancel:(id)arg1;
- (void)authorizationDidComplete:(id)arg1;
- (void)authorizationDidNotHandle:(id)arg1;
- (void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 andCompletion:(id /* block */)arg5;
- (bool)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2;
- (id)init;
- (void)setAuthorizationCompletion:(id /* block */)arg1;

@end
