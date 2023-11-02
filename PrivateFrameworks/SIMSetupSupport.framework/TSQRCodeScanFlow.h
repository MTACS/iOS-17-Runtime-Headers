
@interface TSQRCodeScanFlow : TSSIMSetupFlow <TSCellularPlanManagerCacheDelegate, TSSIMSetupFlowDelegate> {
    UIBarButtonItem * _cancelButton;
    bool  _confirmationCodeRequired;
    bool  _isPreinstallingViewControllerActive;
    NSString * _name;
    NSError * _planInstallError;
    long long  _signupUserConsentResponse;
    unsigned long long  _userConsentType;
    bool  _withBackButton;
}

@property (retain) UIBarButtonItem *cancelButton;
@property bool confirmationCodeRequired;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isPreinstallingViewControllerActive;
@property (retain) NSString *name;
@property (retain) NSError *planInstallError;
@property long long signupUserConsentResponse;
@property (readonly) Class superclass;
@property unsigned long long userConsentType;
@property bool withBackButton;

- (void).cxx_destruct;
- (id)cancelButton;
- (bool)confirmationCodeRequired;
- (void)dealloc;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (void)handleError:(id)arg1;
- (id)initWithBackButton:(bool)arg1;
- (bool)isPreinstallingViewControllerActive;
- (id)name;
- (id)nextViewControllerFrom:(id)arg1;
- (id)planInstallError;
- (void)planItemsUpdated:(id)arg1 planListError:(id)arg2;
- (void)setCancelButton:(id)arg1;
- (void)setConfirmationCodeRequired:(bool)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)setIsPreinstallingViewControllerActive:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPlanInstallError:(id)arg1;
- (void)setSignupUserConsentResponse:(long long)arg1;
- (void)setUserConsentType:(unsigned long long)arg1;
- (void)setWithBackButton:(bool)arg1;
- (long long)signupUserConsentResponse;
- (unsigned long long)userConsentType;
- (void)viewControllerDidComplete:(id)arg1;
- (bool)withBackButton;

@end
