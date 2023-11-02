
@interface CDPDPCSController : NSObject {
    CDPContext * _context;
    <CDPProtectedCloudStorageProxy> * _pcsProxy;
}

@property (nonatomic, retain) CDPContext *context;
@property (nonatomic, retain) <CDPProtectedCloudStorageProxy> *pcsProxy;

- (void).cxx_destruct;
- (void)_checkiCDPStatusNetwork:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)_contextSetupDictionary;
- (void)_enableCDPWithCompletion:(id /* block */)arg1;
- (id)_fetchKeyForPCSIdentityRef:(struct _PCSIdentityData { }*)arg1;
- (struct _PCSIdentitySetData { }*)_getOrSetupIdentitySetRef:(id*)arg1;
- (void)_reauthenticateAndCheckiCDPStatusWithNetwork:(bool)arg1 completion:(id /* block */)arg2;
- (bool)_shoudAllowKeyFetchForService:(id)arg1;
- (void)checkiCDPStatusNetwork:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)context;
- (void)enableCDPWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 pcsProxy:(id)arg2;
- (bool)isCloudProtectionEnabledLocally:(id*)arg1;
- (bool)isCompanionInKeychainCircle:(id*)arg1;
- (id)pcsKeysForService:(id)arg1 error:(id*)arg2;
- (id)pcsProxy;
- (void)recoverAndSynchronizeKeysWithCompletion:(id /* block */)arg1;
- (void)recoverKeysWithCompletion:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setPcsProxy:(id)arg1;

@end
