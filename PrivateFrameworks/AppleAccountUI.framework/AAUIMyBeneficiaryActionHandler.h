
@interface AAUIMyBeneficiaryActionHandler : NSObject <AAUITrustedContactDetailsActionHandler> {
    AIDAAccountManager * _accountManager;
    AALocalContactInfo * _contact;
    AAUISpinnerManager * _spinnerManager;
}

@property (nonatomic, readonly) AIDAAccountManager *accountManager;
@property (nonatomic, readonly) AALocalContactInfo *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doBeneficiaryRemoveWithViewController:(id)arg1;
- (void)_navigateToAccessKeyScreenFromViewController:(id)arg1;
- (void)_showAuthPromptInViewController:(id)arg1;
- (void)_startSpinnerInSpecifier:(id)arg1;
- (void)_stopAllSpinners;
- (id)accountManager;
- (id)contact;
- (void)doDestructiveAction:(id)arg1 specifier:(id)arg2;
- (void)doPrimaryAction:(id)arg1 specifier:(id)arg2;
- (id)initWithAccountManager:(id)arg1 localContact:(id)arg2;

@end
