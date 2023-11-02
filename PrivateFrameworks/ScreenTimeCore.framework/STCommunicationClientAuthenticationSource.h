
@interface STCommunicationClientAuthenticationSource : NSObject <STAuthenticationSource> {
    <STAuthenticationSession> * _authenticationSession;
}

@property (nonatomic, retain) <STAuthenticationSession> *authenticationSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authenticateWithIdentifier:(id)arg1 forced:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)authenticationSession;
- (id)initWithAuthenticationSession:(id)arg1;
- (void)setAuthenticationSession:(id)arg1;

@end
