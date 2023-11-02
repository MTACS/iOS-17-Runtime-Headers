
@interface AAUIMyBenefactorActionHandler : NSObject <AAUIGrandSlamRemoteUIPresenterDelegate, AAUITrustedContactDetailsActionHandler> {
    AIDAAccountManager * _accountManager;
    AALocalContactInfo * _contact;
    AAUIGrandSlamRemoteUIPresenter * _remoteUIPresenter;
    AAUISpinnerManager * _spinnerManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_navigateToAccessKeyScreenFromViewController:(id)arg1;
- (void)_showAuthPromptInViewController:(id)arg1;
- (void)_startSpinnerInSpecifier:(id)arg1;
- (void)_stopAllSpinners;
- (void)doDestructiveAction:(id)arg1 specifier:(id)arg2;
- (void)doPrimaryAction:(id)arg1 specifier:(id)arg2;
- (void)doSecondaryAction:(id)arg1 specifier:(id)arg2;
- (id)initWithAccountManager:(id)arg1 localContact:(id)arg2;
- (void)remoteUIRequestComplete:(id)arg1 error:(id)arg2;

@end
