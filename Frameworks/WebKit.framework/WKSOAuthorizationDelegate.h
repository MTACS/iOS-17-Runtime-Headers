
@interface WKSOAuthorizationDelegate : NSObject <SOAuthorizationDelegate> {
    struct RefPtr<WebKit::SOAuthorizationSession, WTF::RawPtrTraits<WebKit::SOAuthorizationSession>, WTF::DefaultRefDerefTraits<WebKit::SOAuthorizationSession>> { 
        struct SOAuthorizationSession {} *m_ptr; 
    }  _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)authorization:(id)arg1 didCompleteWithError:(id)arg2;
- (void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2;
- (void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3;
- (void)authorization:(id)arg1 presentViewController:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)authorizationDidCancel:(id)arg1;
- (void)authorizationDidComplete:(id)arg1;
- (void)authorizationDidNotHandle:(id)arg1;
- (void)setSession:(void*)arg1;

@end
