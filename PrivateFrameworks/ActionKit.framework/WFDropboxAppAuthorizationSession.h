
@interface WFDropboxAppAuthorizationSession : NSObject <WFOAuth2AuthorizationSession> {
    NSArray * _authorizationURLs;
    NSURL * _cancelURI;
    NSString * _clientID;
    id /* block */  _completionHandler;
    NSString * _state;
    NSURL * _successURI;
}

@property (nonatomic, readonly) NSArray *authorizationURLs;
@property (nonatomic, readonly) NSURL *cancelURI;
@property (nonatomic, readonly) NSString *clientID;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *state;
@property (nonatomic, readonly) NSURL *successURI;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authorizationURLs;
- (id)cancelURI;
- (id)clientID;
- (id /* block */)completionHandler;
- (id)initWithClientID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)resumeSessionWithURL:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)state;
- (id)successURI;

@end
