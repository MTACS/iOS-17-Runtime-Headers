
@interface POAuthPluginProcess : NSObject {
    POServiceConnection * _serviceConnection;
    unsigned int  _uid;
}

- (void).cxx_destruct;
- (unsigned long long)getLoginTypeForUser:(id)arg1;
- (id)initWithUid:(unsigned int)arg1 forLogin:(bool)arg2;
- (unsigned long long)performLocalPasswordLogin:(id)arg1 passwordContext:(id)arg2;
- (unsigned long long)performPasswordLogin:(id)arg1 passwordContext:(id)arg2 updateLocalAccountPassword:(bool)arg3;
- (void)retainContextForUserName:(id)arg1 context:(id)arg2;
- (bool)saveCredentialForUserName:(id)arg1 passwordContext:(id)arg2;
- (void)screenDidUnlockWithCredentialContext:(id)arg1 smartCardContext:(id)arg2 tokenId:(id)arg3 atLogin:(bool)arg4 tokenUnlock:(bool)arg5;
- (void)updateLocalAccountPassword:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)verifyPasswordLogin:(id)arg1 passwordContext:(id)arg2;

@end
