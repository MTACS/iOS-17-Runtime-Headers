
@interface ASTAutomatedSession : NSObject <ASTSessionSigningDelegate> {
    ASTAuthInfoResult * _authInfo;
    id /* block */  _authInfoHandler;
    id /* block */  _completion;
    ASTIdentity * _identity;
    ASTProfileResult * _profile;
    ASTSession * _session;
    NSDictionary * _tests;
}

@property (nonatomic, retain) ASTAuthInfoResult *authInfo;
@property (nonatomic, copy) id /* block */ authInfoHandler;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ASTIdentity *identity;
@property (nonatomic, retain) ASTProfileResult *profile;
@property (nonatomic, retain) ASTSession *session;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *tests;

+ (void)sessionExistsForIdentities:(id)arg1 ticketNumber:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)sessionExistsForSerialNumbers:(id)arg1 ticketNumber:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)sessionWithIdentity:(id)arg1 profile:(id)arg2 tests:(id)arg3 authInfoHandler:(id /* block */)arg4;
+ (id)sessionWithSerialNumber:(id)arg1 profile:(id)arg2 tests:(id)arg3 authInfoHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)authInfo;
- (id /* block */)authInfoHandler;
- (id /* block */)completion;
- (void)end;
- (void)executeWithCompletion:(id /* block */)arg1;
- (id)identity;
- (id)initWithIdentity:(id)arg1 profile:(id)arg2 tests:(id)arg3 authInfoHandler:(id /* block */)arg4;
- (id)profile;
- (id)session;
- (void)session:(id)arg1 cancelTest:(id)arg2;
- (void)session:(id)arg1 didEndWithError:(id)arg2;
- (void)session:(id)arg1 generateAuthInfoWithNonce:(id)arg2;
- (void)session:(id)arg1 profile:(id)arg2 filteredByComponents:(id)arg3;
- (void)session:(id)arg1 startTest:(id)arg2 parameters:(id)arg3 testResult:(id)arg4;
- (void)setAuthInfo:(id)arg1;
- (void)setAuthInfoHandler:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setIdentity:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTests:(id)arg1;
- (id)tests;

@end
