
@interface AKPrivateEmailController : NSObject <AAFXPCSessionDelegate, AKPrivateEmailDaemonProtocol> {
    AKPrivateEmailClientImpl * _clientImpl;
    AAFXPCSession * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAFXPCSession *remoteService;
@property (readonly) Class superclass;
@property (retain) <AKPrivateEmailUIProvider> *uiProvider;

- (void).cxx_destruct;
- (void)configureRemoteInterface:(id)arg1;
- (void)deletePrivateEmailDatabaseWithCompletion:(id /* block */)arg1;
- (id)exportedObject;
- (void)fetchPrivateEmailForAltDSID:(id)arg1 withKey:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchPrivateEmailWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSignInWithApplePrivateEmailWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)getContextForRequestContext:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithXPCSession:(id)arg1;
- (void)listAllPrivateEmailsForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)lookupPrivateEmailForAltDSID:(id)arg1 withKey:(id)arg2 completion:(id /* block */)arg3;
- (void)lookupPrivateEmailWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)privateEmailListVersionWithCompletion:(id /* block */)arg1;
- (void)registerPrivateEmailForAltDSID:(id)arg1 withKey:(id)arg2 completion:(id /* block */)arg3;
- (void)registerPrivateEmailWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteService;
- (void)removePrivateEmailKey:(id)arg1 completion:(id /* block */)arg2;
- (void)setRemoteService:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (id)uiProvider;

@end
