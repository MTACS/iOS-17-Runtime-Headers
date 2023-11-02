
@interface AAUIShowAccessKeyViewController : PSListController <AAUIInviteMessageFlowControllerDelegate> {
    NSString * _accessKey;
    ACAccount * _appleAccount;
    AAUIInviteMessageFlowController * _inviteFlowController;
    AALocalContactInfo * _localContact;
    UIImage * _qrCodeImage;
    AAUIAccountContactsSpecifierCreator * _specifierCreator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_printTapped:(id)arg1;
- (void)_setTableSeparatorInset;
- (void)_setupNavigationBar;
- (id)_specifiersForShowAccessKey;
- (id)initWithAppleAccount:(id)arg1 localContactInfo:(id)arg2 accessKey:(id)arg3 accessKeyQRCodeImage:(id)arg4;
- (void)inviteMessageCompleteSecondaryButtonTapped:(id)arg1;
- (void)inviteMessageFlowDidFinish:(id)arg1;
- (void)inviteMessageWasSent:(id)arg1 completion:(id /* block */)arg2;
- (id)specifiers;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)viewDidLoad;

@end
