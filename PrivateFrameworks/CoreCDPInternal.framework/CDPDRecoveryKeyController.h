
@interface CDPDRecoveryKeyController : NSObject <CDPDDeviceSecretValidatorDelegate, CDPDRecoveryKeyValidatorInternalDelegate> {
    <CDPDCircleProxy> * _circleProxy;
    CDPContext * _context;
    <CDPDAuthProviderInternal> * _internalAuthProvider;
    <CDPDOctagonTrustProxy> * _otProxy;
    CDPDPCSController * _pcsController;
    <CDPAuthProviderInternal> * _recoveryAuthProvider;
    <CDPDSecureBackupProxy> * _sbProxy;
    CDPDSecureBackupController * _secureBackupController;
    <CDPStateUIProviderInternal> * _uiProvider;
}

@property (nonatomic, retain) <CDPDCircleProxy> *circleProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CDPDAuthProviderInternal> *internalAuthProvider;
@property (nonatomic, retain) <CDPDOctagonTrustProxy> *otProxy;
@property (nonatomic, retain) <CDPAuthProviderInternal> *recoveryAuthProvider;
@property (nonatomic, retain) <CDPDSecureBackupProxy> *sbProxy;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CDPStateUIProviderInternal> *uiProvider;

- (void).cxx_destruct;
- (void)_authenticateAndPerformRecoveryKeyOperation:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)authenticateAndDeleteRecoveryKeyWithCompletion:(id /* block */)arg1;
- (void)authenticateAndGenerateNewRecoveryKeyWithCompletion:(id /* block */)arg1;
- (id)circleProxy;
- (void)dealloc;
- (void)deleteRecoveryKeyWithCompletion:(id /* block */)arg1;
- (void)generateNewRecoveryKey:(id /* block */)arg1;
- (void)generateRandomRecoveryKey:(id /* block */)arg1;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 circleProxy:(id)arg4 secureBackupProxy:(id)arg5 octagonTrustProxy:(id)arg6 pcsProxy:(id)arg7;
- (id)internalAuthProvider;
- (bool)isRecoveryKeyAvailableWithError:(id*)arg1;
- (bool)isWalrusRecoveryKeyAvailableWithError:(id*)arg1;
- (id)otProxy;
- (void)recoverAndSynchronizeStateWithServer:(id /* block */)arg1;
- (void)recoverDataUsingMasterKeyWithCompletion:(id /* block */)arg1;
- (void)recoverState:(id /* block */)arg1;
- (id)recoveryAuthProvider;
- (id)sbProxy;
- (void)secretValidator:(id)arg1 recoverSecureBackupWithContext:(id)arg2 completion:(id /* block */)arg3;
- (bool)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2;
- (void)secretValidator:(id)arg1 validateRecoveryKeyWithContext:(id)arg2 completion:(id /* block */)arg3;
- (void)setCircleProxy:(id)arg1;
- (void)setInternalAuthProvider:(id)arg1;
- (void)setOtProxy:(id)arg1;
- (void)setRecoveryAuthProvider:(id)arg1;
- (void)setSbProxy:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (id)uiProvider;
- (void)verifyRecoveryKey:(id /* block */)arg1;

@end
