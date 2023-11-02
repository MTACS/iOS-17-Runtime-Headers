
@interface POServiceConnection : NSObject <POServiceProtocol> {
    bool  _forLogin;
    unsigned int  _uid;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool forLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property unsigned int uid;
@property (retain) NSXPCConnection *xpcConnection;

+ (id)xpcQueue;

- (void).cxx_destruct;
- (bool)_connectToService;
- (void)createUserAccount:(id)arg1 passwordContext:(id)arg2 smartCardContext:(id)arg3 tokenId:(id)arg4 completion:(id /* block */)arg5;
- (void)dealloc;
- (bool)forLogin;
- (void)getLoginTypeForUser:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithUid:(unsigned int)arg1 forLogin:(bool)arg2;
- (void)passwordDidChangeForUsername:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;
- (void)performLocalPasswordLogin:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;
- (void)performPasswordLogin:(id)arg1 passwordContext:(id)arg2 updateLocalAccountPassword:(bool)arg3 completion:(id /* block */)arg4;
- (void)retainContextForUserName:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)saveCredentialForUserName:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;
- (void)screenDidUnlockWithCredentialContext:(id)arg1 smartCardContext:(id)arg2 tokenId:(id)arg3 atLogin:(bool)arg4 tokenUnlock:(bool)arg5 completion:(id /* block */)arg6;
- (void)setForLogin:(bool)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setXpcConnection:(id)arg1;
- (unsigned int)uid;
- (void)updateLocalAccountPassword:(id)arg1 passwordContextData:(id)arg2 completion:(id /* block */)arg3;
- (void)verifyPasswordLogin:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;
- (id)xpcConnection;

@end
