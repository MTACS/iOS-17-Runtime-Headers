
@interface FPUIAuthenticationCredentialsViewController : FPUIAuthenticationTableViewController <UITextFieldDelegate> {
    NSArray * _credentialDescriptors;
    FPUIAuthenticationSectionDescriptor * _credentialsInputSection;
    UITextField * _nameInputTextField;
    UITextField * _passwordInputTextField;
    FPUIAuthenticationSectionDescriptor * _rememberPasswordSection;
    UISwitch * _rememberPasswordSwitch;
    long long  _selectedCredentialRow;
    NSLayoutConstraint * _textFieldLeadingAnchorConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canMoveToNextStep;
- (void)_next:(id)arg1;
- (id)_rowDescriptorForCredentialDescriptor:(id)arg1;
- (void)_updateCanTransitionToNextStepState;
- (void)_updateCurrentlyVisibleSections;
- (void)_updateCurrentlyVisibleSectionsNeedsReloadData:(bool)arg1;
- (void)_updateTextFieldConstraints;
- (id)defaultRightBarButtonItem;
- (id)initWithCredentialDescriptors:(id)arg1;
- (void)setupTableViewSections;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidLoad;

@end
