
@interface TSActivationFlowWithSimSetupFlow : TSSIMSetupFlow <TSCellularPlanManagerCacheDelegate, TSEntitlementJSHandlerDelegate, TSSIMSetupFlowDelegate> {
    UIBarButtonItem * _cancelButton;
    CTDisplayPlanList * _carrierSetupItems;
    NSDictionary * _carrierSetupPostData;
    NSString * _carrierSetupUrl;
    CoreTelephonyClient * _client;
    bool  _confirmationCodeRequired;
    CTDisplayPlanList * _crossPlatformTransferItems;
    NSMutableArray * _danglingPlanItems;
    bool  _isActivationPolicyMismatch;
    bool  _isDualeSIMCapabilityLoss;
    bool  _isPreinstallingViewControllerActive;
    bool  _isTransferCapable;
    NSString * _name;
    CTDisplayPlanList * _pendingInstallPlans;
    NSError * _planInstallError;
    NSObject<OS_dispatch_group> * _queryGroup;
    bool  _requireSetup;
    long long  _signupConsentResponse;
    id  _transferBackPlan;
    NSString * _transferBackPlanPhoneNumber;
    NSMutableArray * _transferItems;
    unsigned long long  _userConsentType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isPreinstallingViewControllerActive;
@property bool requireSetup;
@property (readonly) Class superclass;
@property (retain) id transferBackPlan;
@property (retain) NSString *transferBackPlanPhoneNumber;

- (void).cxx_destruct;
- (id)_createFirstViewController:(id)arg1;
- (void)_filterCarrierSetupItems:(id)arg1;
- (void)_maybeShowPreinstallConsentOnViewController:(id)arg1 planItems:(id)arg2;
- (void)_requestCarrierSetupsWithCompletion:(id /* block */)arg1;
- (void)_requestCrossPlatformTransferPlanListWithCompletion:(id /* block */)arg1;
- (void)_requestPendingInstallItemsWithCompletion:(id /* block */)arg1;
- (void)_requestPlansWithCompletion:(id /* block */)arg1;
- (void)_requestTransferPlanListWithCompletion:(id /* block */)arg1;
- (void)_sendSIMSetupReadyNotification;
- (void)_userDidTapCancel;
- (void)accountCancelled;
- (void)accountPendingRelease;
- (void)dealloc;
- (void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6;
- (void)didTransferPlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 srcIccid:(id)arg5 alternateSDMP:(id)arg6 state:(id)arg7;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (void)getWebsheetInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)initRequireSetup:(bool)arg1 transferBackPlan:(id)arg2;
- (bool)isPreinstallingViewControllerActive;
- (id)nextViewControllerFrom:(id)arg1;
- (void)planItemsUpdated:(id)arg1 planListError:(id)arg2;
- (bool)requireSetup;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)setIsPreinstallingViewControllerActive:(bool)arg1;
- (void)setRequireSetup:(bool)arg1;
- (void)setTransferBackPlan:(id)arg1;
- (void)setTransferBackPlanPhoneNumber:(id)arg1;
- (long long)signupUserConsentResponse;
- (void)startOverWithFirstViewController:(id /* block */)arg1;
- (id)transferBackPlan;
- (id)transferBackPlanPhoneNumber;
- (void)viewControllerDidComplete:(id)arg1;

@end
