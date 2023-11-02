
@interface AAUIMyCustodianActionHandler : NSObject <AAUIRecoveryFactorControllerDelegate, AAUITrustedContactDetailsActionHandler> {
    AIDAAccountManager * _accountManager;
    AALocalContactInfo * _contact;
    UIViewController * _presentingViewController;
    OBNavigationController * _recoveryContactRemovedNavigationController;
    AAUIRecoveryFactorController * _recoveryFactorController;
    AAUISpinnerManager * _spinnerManager;
}

@property (nonatomic, readonly) AALocalContactInfo *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRecoveryContact;
- (void)_checkRecoveryContactAndRecoveryKeyStatus:(id /* block */)arg1;
- (void)_dismissAndPopFromRecoveryContactRemovedScreen;
- (void)_dismissAndStartHealthCheck;
- (void)_dismissRecoveryContactRemovedScreenWithCompletion:(id /* block */)arg1;
- (void)_doCustodianRemove;
- (bool)_isWalrusEnabled;
- (void)_performHealthCheck;
- (void)_popToAccountRecoveryScreen;
- (id)_recoveryFactorController;
- (void)_setupRecoveryKey;
- (void)_stopSpinners;
- (void)_updateUIAfterDeleteWithHasRecoveryContact:(bool)arg1 hasRecoveryKey:(bool)arg2;
- (id)contact;
- (void)doDestructiveAction:(id)arg1 specifier:(id)arg2;
- (id)initWithAccountManager:(id)arg1 localContact:(id)arg2;
- (void)recoveryFactorController:(id)arg1 didFinishAddingRecoveryContactWithError:(id)arg2;

@end
