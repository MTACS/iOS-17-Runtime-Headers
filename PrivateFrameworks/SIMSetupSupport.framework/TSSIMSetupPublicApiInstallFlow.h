
@interface TSSIMSetupPublicApiInstallFlow : TSSIMSetupFlow <TSCellularPlanManagerCacheDelegate, TSSIMSetupFlowDelegate> {
    UIBarButtonItem * _cancelButton;
    NSString * _carrierName;
    bool  _confirmationCodeRequired;
    NSMutableArray * _danglingPlanItems;
    NSString * _installName;
    bool  _isPreinstallingViewControllerActive;
    NSError * _planInstallError;
    bool  _requireSetup;
    long long  _signupConsentResponse;
    bool  _skipGeneralInstallConsent;
    unsigned long long  _userConsentType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isPreinstallingViewControllerActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_maybeShowPreinstallConsentOnViewController:(id)arg1;
- (void)dealloc;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)initWithAppName:(id)arg1 requireSetup:(bool)arg2 skipGeneralInstallConsent:(bool)arg3;
- (bool)isPreinstallingViewControllerActive;
- (id)nextViewControllerFrom:(id)arg1;
- (void)planItemsUpdated:(id)arg1 planListError:(id)arg2;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)setIsPreinstallingViewControllerActive:(bool)arg1;
- (long long)signupUserConsentResponse;

@end
