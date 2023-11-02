
@interface AAUIRecoveryFactorController : AARecoveryFactorController <AAUICustodianSetupFlowControllerDelegate> {
    AIDAAccountManager * _accountManager;
    AAUICDPHelper * _cdpHelper;
    AAUICustodianSetupFlowController * _custodianFlowController;
    <AAUIRecoveryFactorControllerDelegate> * _delegate;
    bool  _forceInlinePresentation;
    UIViewController * _presentingViewController;
    CDPStateController * _stateController;
    CDPWalrusStateController * _walrusStateController;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIRecoveryFactorControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceInlinePresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cdpHelper;
- (id)_custodianFlowController;
- (void)_custodianFlowControllerWithCompletion:(id /* block */)arg1;
- (void)_handleRecoveryKeyOperationResultWithSuccess:(bool)arg1 error:(id)arg2 operationDescription:(id)arg3 completion:(id /* block */)arg4;
- (id)_stateController;
- (id)_walrusStateController;
- (id)accountManager;
- (void)authenticateAndDeleteRecoveryKeyFromAllSystemsWithCompletion:(id /* block */)arg1;
- (void)authenticateAndGenerateNewRecoveryKeyWithCompletion:(id /* block */)arg1;
- (void)custodianSetupFlowControllerDidFinish:(id)arg1;
- (void)custodianSetupFlowControllerRecoveryContactInviteSent;
- (id)delegate;
- (void)deleteRecoveryKeyFromAllSystems:(id /* block */)arg1;
- (id)followUpUniqueIdentifier;
- (bool)forceInlinePresentation;
- (void)generateRecoveryKeyWithCompletion:(id /* block */)arg1;
- (id)initWithAccountManager:(id)arg1 presentingViewController:(id)arg2;
- (id)presentingViewController;
- (void)setAccountManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceInlinePresentation:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)startAddingDataRecoveryService;
- (void)startAddingRecoveryContact;
- (void)validateRecoveryKeyWithCompletion:(id /* block */)arg1;

@end
