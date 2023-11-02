
@interface TSUserResponseFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    UIBarButtonItem * _cancelButton;
    NSString * _confirmationCode;
    bool  _confirmationCodeRequired;
    unsigned long long  _userConsentType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property unsigned long long userConsentType;

- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)initWithConfirmationCodeRequired:(bool)arg1;
- (id)nextViewControllerFrom:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)setUserConsentType:(unsigned long long)arg1;
- (unsigned long long)userConsentType;
- (void)viewControllerDidComplete:(id)arg1;

@end
