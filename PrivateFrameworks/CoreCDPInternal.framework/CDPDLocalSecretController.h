
@interface CDPDLocalSecretController : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate> {
    CDPDCircleController * _circleController;
    CDPContext * _context;
    <CDPLocalSecretFollowUpProvider> * _followUpProvider;
    AAFKeychainManager * _keychainManager;
    CDPDSecureBackupController * _secureBackupController;
    <CDPStateUIProviderInternal> * _uiProvider;
}

@property (nonatomic, retain) CDPDCircleController *circleController;
@property (nonatomic, retain) CDPContext *context;
@property (nonatomic, retain) <CDPLocalSecretFollowUpProvider> *followUpProvider;
@property (nonatomic, retain) AAFKeychainManager *keychainManager;
@property (nonatomic, retain) CDPDSecureBackupController *secureBackupController;
@property (nonatomic, retain) <CDPStateUIProviderInternal> *uiProvider;

- (void).cxx_destruct;
- (void)_attemptToEscrowPreRecord:(id)arg1 completion:(id /* block */)arg2;
- (id)_cdpStateMachine;
- (void)_collectLocalSecretWithCompletion:(id /* block */)arg1;
- (void)_createContextForSecret:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleCompletionStatus:(bool)arg1 preRecord:(bool)arg2;
- (void)_localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_repairWithStateMachine:(id)arg1 completion:(id /* block */)arg2;
- (void)_setContextWithAuthResults:(id)arg1;
- (void)attemptToEscrowPreRecord:(id)arg1 completion:(id /* block */)arg2;
- (id)circleController;
- (void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(id /* block */)arg2;
- (id)circlePeerIDForSecureBackupController:(id)arg1;
- (id)context;
- (id)contextForController:(id)arg1;
- (void)dealloc;
- (void)finishOfflineLocalSecretChangeWithCompletion:(id /* block */)arg1;
- (id)followUpProvider;
- (id)initWithContext:(id)arg1;
- (id)keychainManager;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(id /* block */)arg1;
- (void)promptForLocalSecretWithCompletion:(id /* block */)arg1;
- (id)secureBackupController;
- (id)secureChannelContextForController:(id)arg1;
- (void)setCircleController:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFollowUpProvider:(id)arg1;
- (void)setKeychainManager:(id)arg1;
- (void)setSecureBackupController:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (bool)synchronizeCircleViewsForSecureBackupContext:(id)arg1;
- (id)uiProvider;

@end
